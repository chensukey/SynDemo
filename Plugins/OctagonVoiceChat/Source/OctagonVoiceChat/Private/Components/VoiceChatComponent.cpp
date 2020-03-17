/*
	Copyright 2017 Octagon Interactive Ltd.
	support@octagon-interactive.com
*/

#include "VoiceChatComponent.h"
#include "OctagonVoiceChatPrivatePCH.h"
#include "OctagonVoiceChatDefinitions.h"
#include "VoiceModule.h"
#include "VoiceCapture.h"
#include "VoiceCodec.h"

DEFINE_LOG_CATEGORY(LogVoiceChatComponent);


UVoiceChatComponent::UVoiceChatComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	bActiveTalker = false;
	StopTalkingTimeThreshold = 0.5f;
}

void UVoiceChatComponent::BeginPlay()
{
	Super::BeginPlay();

	// the voice chat component must be attached to a pawn
	const APawn* PawnOwner = Cast<APawn>(GetOwner());
	if( PawnOwner == nullptr )
	{
		UE_LOG(LogVoiceChatComponent, Warning, TEXT("[%s] A VoiceChatComponent can only be attached to a pawn derived actor."),
			*FString(__FUNCTION__));
		return;
	}

	AController* Controller = PawnOwner->GetController();
	if( Controller == nullptr )
		return;

	// only initialize voice chat on pawns with a local player controller
	if( Controller->IsLocalPlayerController() )
	{
		InitializeVoiceChat();
	}
}

void UVoiceChatComponent::InitializeVoiceChat()
{
	UE_LOG(LogVoiceChatComponent, Verbose, TEXT("[%s](%s)"),
		*FString(__FUNCTION__), *GetNameSafe(GetOwner()));

	VoiceCapture = FVoiceModule::Get().CreateVoiceCapture();
	if( VoiceCapture.IsValid() )
	{
		VoiceEncoder = FVoiceModule::Get().CreateVoiceEncoder();
		VoiceCapture->Start();
	}
	else
	{
		UE_LOG(LogVoiceChatComponent, Warning,
			TEXT("[%s] FVoiceModule::CreateVoiceCapture() failed. Make sure voice is ") \
			TEXT("enabled in the DefaultEngine.ini file and a microphone is plugged in."),
			*FString(__FUNCTION__));
	}
}

void UVoiceChatComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	ShutDownVoiceChat();

	Super::EndPlay(EndPlayReason);
}

void UVoiceChatComponent::ShutDownVoiceChat()
{
	UE_LOG(LogVoiceChatComponent, Verbose, TEXT("[%s](%s)"),
		*FString(__FUNCTION__), *GetNameSafe(GetOwner()));

	if( VoiceCapture.IsValid() )
	{
		VoiceCapture->Shutdown();
		VoiceCapture = nullptr;
		VoiceEncoder = nullptr;
	}

	CompressedVoiceBuffer.Empty();
	DecompressedVoiceBuffer.Empty();
	VoiceRemainder.Empty();
}

void UVoiceChatComponent::TickComponent(
	float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!VoiceCapture.IsValid() || !VoiceEncoder.IsValid())
	{
		return;
	}

	DecompressedVoiceBuffer.Empty(MAX_UNCOMPRESSED_VOICE_BUFFER_SIZE);
	CompressedVoiceBuffer.Empty(MAX_COMPRESSED_VOICE_BUFFER_SIZE);

	const uint32 VoiceBytesAvailable = GetVoiceCaptureBytesAvailable();
	if (VoiceBytesAvailable == 0)
	{
		return;
	}

	// Make space for new and any previously remaining data
	uint32 TotalVoiceBytes = VoiceBytesAvailable + VoiceRemainderSize;
	if( TotalVoiceBytes > MAX_UNCOMPRESSED_VOICE_BUFFER_SIZE )
	{
		UE_LOG(LogVoiceChatComponent, Warning, TEXT("[%s] Exceeded uncompressed voice buffer size, clamping"),
			*FString(__FUNCTION__));

		TotalVoiceBytes = MAX_UNCOMPRESSED_VOICE_BUFFER_SIZE;
	}

	DecompressedVoiceBuffer.AddUninitialized(TotalVoiceBytes);

	// copy previous data into the buffer
	if( VoiceRemainderSize > 0 )
	{
		FMemory::Memcpy(
			DecompressedVoiceBuffer.GetData(),
			VoiceRemainder.GetData(),
			VoiceRemainderSize);
	}

	// Get new uncompressed data
	uint32 DecompressedBytesRead = 0;
	EVoiceCaptureState::Type VoiceResult = VoiceCapture->GetVoiceData(
		DecompressedVoiceBuffer.GetData() + VoiceRemainderSize,
		VoiceBytesAvailable,
		DecompressedBytesRead);

	TotalVoiceBytes = DecompressedBytesRead + VoiceRemainderSize;

	// check if any voice data was read
	if( VoiceResult != EVoiceCaptureState::Ok || TotalVoiceBytes == 0 )
	{
		// update the last talk time
		if( bActiveTalker && LastTalkTimeDelta > 0.f )
		{
			LastTalkTimeDelta = FMath::Max(LastTalkTimeDelta - DeltaTime, 0.f);
			if( LastTalkTimeDelta == 0.f )
			{
				// send stop talking notification
				bActiveTalker = false;
				StoppedTalkingEvent.Broadcast();
			}
		}

		return;
	}

	if( DecompressedBytesRead > 0 )
	{
		// reset the last talk time
		LastTalkTimeDelta = StopTalkingTimeThreshold;
		if( !bActiveTalker )
		{
			// send start talking notification
			bActiveTalker = true;
			StartedTalkingEvent.Broadcast();
		}
	}

	CompressedVoiceBufferSize = MAX_COMPRESSED_VOICE_BUFFER_SIZE;
	CompressedVoiceBuffer.AddUninitialized(MAX_COMPRESSED_VOICE_BUFFER_SIZE);

	VoiceRemainderSize = VoiceEncoder->Encode(
		DecompressedVoiceBuffer.GetData(),
		TotalVoiceBytes,
		CompressedVoiceBuffer.GetData(),
		CompressedVoiceBufferSize);

	// Save off any unencoded remainder
	if( VoiceRemainderSize > 0 )
	{
		if( VoiceRemainderSize > MAX_VOICE_REMAINDER_SIZE )
		{
			UE_LOG(LogVoiceChatComponent, Warning, TEXT("[%s] Exceeded voice remainder buffer size, clamping"),
				*FString(__FUNCTION__));

			VoiceRemainderSize = MAX_VOICE_REMAINDER_SIZE;
		}

		VoiceRemainder.AddUninitialized(MAX_VOICE_REMAINDER_SIZE);

		FMemory::Memcpy(
			VoiceRemainder.GetData(),
			DecompressedVoiceBuffer.GetData() + (TotalVoiceBytes - VoiceRemainderSize),
			VoiceRemainderSize);
	}
	
	// send the available voice data notification
	if( CompressedVoiceBufferSize > 0 )
	{
		VoiceDataAvailableEvent.Broadcast();
	}
}

uint32 UVoiceChatComponent::GetVoiceCaptureBytesAvailable() const
{
	uint32 VoiceBytesAvailable = 0;

	EVoiceCaptureState::Type CaptureState =
		VoiceCapture->GetCaptureState(VoiceBytesAvailable);

	if( CaptureState != EVoiceCaptureState::Ok && CaptureState != EVoiceCaptureState::NoData )
	{
		UE_LOG(LogVoiceChatComponent, Warning, TEXT("[%s] GetCaptureState failed: Result=%s"),
			*FString(__FUNCTION__), EVoiceCaptureState::ToString(CaptureState));
		return 0;
	}

	if( VoiceBytesAvailable == 0 )
	{
		UE_LOG(LogVoiceChatComponent, VeryVerbose, TEXT("[%s] No data: CaptureState=%s"),
			*FString(__FUNCTION__), EVoiceCaptureState::ToString(CaptureState));
		return 0 ;
	}

	return VoiceBytesAvailable;
}

bool UVoiceChatComponent::GetCompressedVoiceData(
	TArray<uint8>& OutBuffer) const
{
	OutBuffer.Empty(CompressedVoiceBufferSize);

	if( CompressedVoiceBufferSize > 0 )
	{
		OutBuffer.AddUninitialized(CompressedVoiceBufferSize);
		FMemory::Memcpy(OutBuffer.GetData(), CompressedVoiceBuffer.GetData(), CompressedVoiceBufferSize);
		return true;
	}
	else
	{
		return false;
	}
}

void UVoiceChatComponent::GetAllPlayersInRange(float requiredDistance, TArray<APawn*>& pawnList)
{
	pawnList.Empty();

	for (auto ControllerIt = GetWorld()->GetPlayerControllerIterator(); ControllerIt; ++ControllerIt)
	{
		APlayerController *Controller = ControllerIt->Get();
		const auto pawn = Controller->GetPawn();
		
		if (this->GetOwner() == pawn)
			continue;

		if (pawn)
		{
			float distance = pawn->GetDistanceTo(GetOwner());

			if (distance < requiredDistance)
			{
				pawnList.Add(pawn);
			}
		}
	}
}
