/*
	Copyright 2017 Octagon Interactive Ltd.
	support@octagon-interactive.com
*/

#include "VoiceDecoder.h"
#include "OctagonVoiceChatPrivatePCH.h"
#include "OctagonVoiceChatDefinitions.h"
#include "VoiceCodec.h"


UVoiceDecoder* UVoiceDecoder::CreateVoiceDecoder(UObject* Owner)
{
	return NewObject<UVoiceDecoder>(Owner);
}

void UVoiceDecoder::PostInitProperties()
{
	Super::PostInitProperties();

	InitializeObject();
}

void UVoiceDecoder::InitializeObject()
{
	VoiceDecoder = FVoiceModule::Get().CreateVoiceDecoder();
}

void UVoiceDecoder::DecompressVoiceData(
	const TArray<uint8>& InCompressedVoiceData,
	int32 InCompressedVoiceBytes,
	TArray<uint8>& OutDecompressedVoiceData,
	int32& OutDecompressedVoiceBytes) const
{
	if( VoiceDecoder.IsValid() && InCompressedVoiceBytes > 0 )
	{
		OutDecompressedVoiceData.Empty(MAX_UNCOMPRESSED_VOICE_BUFFER_SIZE);
		OutDecompressedVoiceData.AddUninitialized(MAX_UNCOMPRESSED_VOICE_BUFFER_SIZE);
		uint32 BytesWritten = MAX_UNCOMPRESSED_VOICE_BUFFER_SIZE;
		VoiceDecoder->Decode(InCompressedVoiceData.GetData(), InCompressedVoiceBytes, OutDecompressedVoiceData.GetData(), BytesWritten);
		OutDecompressedVoiceBytes = BytesWritten;
	}
	else
	{
		OutDecompressedVoiceBytes = 0;
	}
}
