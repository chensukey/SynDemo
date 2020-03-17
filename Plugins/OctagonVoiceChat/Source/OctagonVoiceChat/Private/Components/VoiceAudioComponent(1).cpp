/*
	Copyright 2017 Octagon Interactive Ltd.
	support@octagon-interactive.com
*/

#include "VoiceAudioComponent.h"
#include "OctagonVoiceChatPrivatePCH.h"
#include "Sound/SoundWaveProcedural.h"
#include "Sound/AudioSettings.h"
#include "AudioDevice.h"
#include "VoiceDecoder.h"
#include "OctagonVoiceChatDefinitions.h"

DEFINE_LOG_CATEGORY(LogVoiceAudioComponent);


UVoiceAudioComponent::UVoiceAudioComponent()
{
	bWantsInitializeComponent = true;
	
	bIsUISound = false;
	bAllowSpatialization = true;
	SetVolumeMultiplier(1.5f);
	bOverrideAttenuation = true;
	AttenuationOverrides.bAttenuate = true;
	AttenuationOverrides.bSpatialize = true;
	AttenuationOverrides.FalloffDistance = 2500.f;
	//AttenuationOverrides.DistanceAlgorithm = ATTENUATION_Logarithmic;
	AttenuationOverrides.DistanceAlgorithm = EAttenuationDistanceModel::Logarithmic;

	bInitialized = false;
}

void UVoiceAudioComponent::InitializeComponent()
{
	Super::InitializeComponent();

	UE_LOG(LogVoiceAudioComponent, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	if( !IsTemplate() )
	{
		InitializeVoiceAudioComponent();
	}
}

void UVoiceAudioComponent::InitializeVoiceAudioComponent()
{
	if (bInitialized)
	{
		return;
	}

	bInitialized = true;

	UE_LOG(LogVoiceAudioComponent, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	// create a decoder to decompress incoming voice data
	VoiceDecoder = UVoiceDecoder::CreateVoiceDecoder(this);

	// get the main audio device
	FAudioDevice* AudioDevice = GEngine->GetMainAudioDevice();
	if (AudioDevice == nullptr)
	{
		return;
	}

	// get the actor that owns the component
	const AActor* ActorOwner = Cast<AActor>(GetOwner());

	// create a streaming sound source
	USoundWaveProcedural* SoundStreaming = NewObject<USoundWaveProcedural>();
	SoundStreaming->SampleRate = 16000;
	SoundStreaming->NumChannels = 1;
	SoundStreaming->Duration = INDEFINITELY_LOOPING_DURATION;
	SoundStreaming->SoundGroup = SOUNDGROUP_Voice;
	SoundStreaming->bLooping = false;

	Sound = SoundStreaming;

	// property overrides
	bAutoActivate = false;
	bAutoDestroy = false;
	bStopWhenOwnerDestroyed = false;
#if WITH_EDITORONLY_DATA
	bVisualizeComponent = false;
#endif

	// sound class override
	const FStringAssetReference VoiPSoundClassName = GetDefault<UAudioSettings>()->VoiPSoundClass;
	if( VoiPSoundClassName.IsValid() )
	{
		SoundClassOverride =
			LoadObject<USoundClass>(nullptr, *VoiPSoundClassName.ToString());
	}
}

void UVoiceAudioComponent::QueueVoiceData(
	const TArray<uint8>& CompressedVoiceData)
{
	const int32 NumCompressedBytes = CompressedVoiceData.Num();
	if( NumCompressedBytes > 0 )
	{
		UE_LOG(LogVoiceAudioComponent, VeryVerbose, TEXT("[%s] NumCompressedBytes=%i"),
			*FString(__FUNCTION__), NumCompressedBytes);

		check(VoiceDecoder != nullptr);
		UncompressedVoiceData.Empty(MAX_UNCOMPRESSED_VOICE_BUFFER_SIZE);
		UncompressedVoiceData.AddUninitialized(MAX_UNCOMPRESSED_VOICE_BUFFER_SIZE);

		int32 UncompressedSize = 0;
		VoiceDecoder->DecompressVoiceData(
			CompressedVoiceData, NumCompressedBytes, UncompressedVoiceData, UncompressedSize);

		if( UncompressedSize > 0 )
		{
			if( !IsActive() )
			{
				Play();
			}

			USoundWaveProcedural* SoundStreaming = CastChecked<USoundWaveProcedural>(Sound);
			SoundStreaming->QueueAudio(UncompressedVoiceData.GetData(), UncompressedSize);
		}
	}
	
}
