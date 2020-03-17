/*
	Copyright 2017 Octagon Interactive Ltd.
	support@octagon-interactive.com
*/

#pragma once
#include "Components/ActorComponent.h"
#include "VoiceChatComponent.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogVoiceChatComponent, Log, All);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVoiceDataAvailableSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVoiceChatStateChangedSignature);


/**
	This component broadcasts events in response to voice chat activity. It also allows
	retrieval of the voice chat data buffer in either compressed or uncompressed form.
*/
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class OCTAGONVOICECHAT_API UVoiceChatComponent : public UActorComponent
{
	GENERATED_BODY()


public:
	/////////////////////////////////////////////////////////////////
	// Public Events

	/** An event that is broadcast when captured voice data is available to be read. */
	UPROPERTY(BlueprintAssignable, Category="VoiceChatComponent")
	FVoiceDataAvailableSignature VoiceDataAvailableEvent;

	/** An event that is broadcast when voice chat starts after being in an inactive state. */
	UPROPERTY(BlueprintAssignable, Category="VoiceChatComponent")
	FVoiceChatStateChangedSignature StartedTalkingEvent;

	/** An event that is broadcast when voice chat stops after being in an active state. */
	UPROPERTY(BlueprintAssignable, Category="VoiceChatComponent")
	FVoiceChatStateChangedSignature StoppedTalkingEvent;

	

private:
	/////////////////////////////////////////////////////////////////
	// Private Properties

	/** The amount of time in seconds before the stop talking event is triggered. */
	UPROPERTY(EditDefaultsOnly, Category="Voice")
	float StopTalkingTimeThreshold;

	/** The voice capture interface. */
	TSharedPtr<class IVoiceCapture> VoiceCapture;

	/** The voice encoder interface. */
	TSharedPtr<class IVoiceEncoder> VoiceEncoder;

	/** Helper to compress and decompress voice chat data. */
	//UPROPERTY(Transient)
	//class UVoiceDecoder* VoiceDecoder;

	/** Time delta to detect when a person has stopped talking. */
	float LastTalkTimeDelta;

	/** A byte array to store the uncompressed voice data. */
	TArray<uint8> DecompressedVoiceBuffer;

	/** A byte array to store the compressed voice data. */
	TArray<uint8> CompressedVoiceBuffer;

	/** A byte array to store the remaining voice data after encoding. */
	TArray<uint8> VoiceRemainder;

	/** The number of bytes stored in the compressed voice buffer. */
	uint32 CompressedVoiceBufferSize;

	/** The number of bytes stored in the voice remainder buffer. */
	uint32 VoiceRemainderSize;

	/** Whether the owning player is actively speaking. */
	bool bActiveTalker;



public:
	/////////////////////////////////////////////////////////////////
	// Public Methods

	/** Default constructor. */
	UVoiceChatComponent();

	/** Called when gameplay begins. */
	virtual void BeginPlay() override;

	/** Called when gameplay ends. */
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/** Called every frame to update the component. */
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** Gets the available voice data. */
	UFUNCTION(BlueprintPure, Category="VoiceChatComponent")
	bool GetCompressedVoiceData(TArray<uint8>& OutBuffer) const;

	UFUNCTION(BlueprintCallable, Category = "VoiceChatComponent", meta = (AutoCreateRefTerm = "pawnList"))
	void GetAllPlayersInRange(float requiredDistance, TArray<APawn*> &pawnList);

protected:
	/////////////////////////////////////////////////////////////////
	// Protected Methods

	/** Initializes the voice chat component. */
	virtual void InitializeVoiceChat();

	/** Shuts down the voice chat component. */
	virtual void ShutDownVoiceChat();



private:
	/////////////////////////////////////////////////////////////////
	// Private Functions

	/** Returns the number of bytes that are available for reading from the voice
	capture interface. */
	uint32 GetVoiceCaptureBytesAvailable() const;
};
