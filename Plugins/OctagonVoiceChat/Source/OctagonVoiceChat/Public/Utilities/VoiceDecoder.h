/*
	Copyright 2017 Octagon Interactive Ltd.
	support@octagon-interactive.com
*/

#pragma once
#include "UObject/NoExportTypes.h"
#include "VoiceDecoder.generated.h"


/**
	A helper class for decompressing voice chat data.
*/
UCLASS(BlueprintType)
class OCTAGONVOICECHAT_API UVoiceDecoder : public UObject
{
	GENERATED_BODY()

	
private:
	/////////////////////////////////////////////////////////////////
	// Private Properties

	/** The voice decoder interface. */
	TSharedPtr<class IVoiceDecoder> VoiceDecoder;



public:
	/////////////////////////////////////////////////////////////////
	// Public Methods

	/** Creates a new voice decoder object. */
	UFUNCTION(BlueprintCallable, Category="VoiceDecoder", meta=(HidePin="Owner", DefaultToSelf="Owner"))
	static UVoiceDecoder* CreateVoiceDecoder(UObject* Owner);

	/** Initializes the object after it is created. */
	virtual void PostInitProperties() override;

	/** Decompresses a voice data stream. */
	UFUNCTION(BlueprintPure, Category="VoiceChatComponent")
	void DecompressVoiceData(
		const TArray<uint8>& InCompressedVoiceData,
		int32 InCompressedVoiceBytes,
		TArray<uint8>& OutDecompressedVoiceData,
		int32& OutDecompressedVoiceBytes) const;



protected:
	/////////////////////////////////////////////////////////////////
	// Protected Methods

	/** Initializes the object after it is created. */
	void InitializeObject();
};
