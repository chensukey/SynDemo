/*
	Copyright 2017 Octagon Interactive Ltd.
	support@octagon-interactive.com
*/

#pragma once
#include "Components/AudioComponent.h"
#include "VoiceAudioComponent.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogVoiceAudioComponent, Log, All);


/**
	An audio component that is set up for voice playback.
*/
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class OCTAGONVOICECHAT_API UVoiceAudioComponent : public UAudioComponent
{
	GENERATED_BODY()


private:
	/////////////////////////////////////////////////////////////////
	// Private Properties

	/** Flag to prevent multiple initializations. */
	bool bInitialized;

	/** Decodes incoming voice chat data. */
	UPROPERTY(Transient)
	class UVoiceDecoder* VoiceDecoder;

	/** An array to hold uncompressed voice data. */
	TArray<uint8> UncompressedVoiceData;



public:
	/////////////////////////////////////////////////////////////////
	// Public Methods

	/** Default constructor. */
	UVoiceAudioComponent();

	/** Initializes the component after it is loaded. */
	virtual void InitializeComponent() override;

	/** Initializes the voice audio component. Called automatically for default
	sub-objects, but must be called manually for components created at runtime. */
	UFUNCTION(BlueprintCallable, Category="VoiceAudioComponent")
	void InitializeVoiceAudioComponent();

	/** Plays back uncompressed voice chat data. */
	UFUNCTION(BlueprintCallable, Category="VoiceAudioComponent")
	virtual void QueueVoiceData(const TArray<uint8>& CompressedVoiceData);
};
