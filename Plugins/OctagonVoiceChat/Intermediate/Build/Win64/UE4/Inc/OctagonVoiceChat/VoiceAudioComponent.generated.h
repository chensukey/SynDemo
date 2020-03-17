// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCTAGONVOICECHAT_VoiceAudioComponent_generated_h
#error "VoiceAudioComponent.generated.h already included, missing '#pragma once' in VoiceAudioComponent.h"
#endif
#define OCTAGONVOICECHAT_VoiceAudioComponent_generated_h

#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQueueVoiceData) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedVoiceData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->QueueVoiceData(Z_Param_Out_CompressedVoiceData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeVoiceAudioComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitializeVoiceAudioComponent(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQueueVoiceData) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedVoiceData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->QueueVoiceData(Z_Param_Out_CompressedVoiceData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeVoiceAudioComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitializeVoiceAudioComponent(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceAudioComponent(); \
	friend OCTAGONVOICECHAT_API class UClass* Z_Construct_UClass_UVoiceAudioComponent(); \
public: \
	DECLARE_CLASS(UVoiceAudioComponent, UAudioComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OctagonVoiceChat"), NO_API) \
	DECLARE_SERIALIZER(UVoiceAudioComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceAudioComponent(); \
	friend OCTAGONVOICECHAT_API class UClass* Z_Construct_UClass_UVoiceAudioComponent(); \
public: \
	DECLARE_CLASS(UVoiceAudioComponent, UAudioComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OctagonVoiceChat"), NO_API) \
	DECLARE_SERIALIZER(UVoiceAudioComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceAudioComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceAudioComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceAudioComponent(UVoiceAudioComponent&&); \
	NO_API UVoiceAudioComponent(const UVoiceAudioComponent&); \
public:


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceAudioComponent(UVoiceAudioComponent&&); \
	NO_API UVoiceAudioComponent(const UVoiceAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceAudioComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceAudioComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoiceAudioComponent)


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VoiceDecoder() { return STRUCT_OFFSET(UVoiceAudioComponent, VoiceDecoder); }


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_16_PROLOG
#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_RPC_WRAPPERS \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_INCLASS \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceAudioComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
