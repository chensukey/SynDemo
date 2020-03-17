// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef OCTAGONVOICECHAT_VoiceChatComponent_generated_h
#error "VoiceChatComponent.generated.h already included, missing '#pragma once' in VoiceChatComponent.h"
#endif
#define OCTAGONVOICECHAT_VoiceChatComponent_generated_h

#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_13_DELEGATE \
static inline void FVoiceChatStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VoiceChatStateChangedSignature) \
{ \
	VoiceChatStateChangedSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_12_DELEGATE \
static inline void FVoiceDataAvailableSignature_DelegateWrapper(const FMulticastScriptDelegate& VoiceDataAvailableSignature) \
{ \
	VoiceDataAvailableSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllPlayersInRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_requiredDistance); \
		P_GET_TARRAY_REF(APawn*,Z_Param_Out_pawnList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetAllPlayersInRange(Z_Param_requiredDistance,Z_Param_Out_pawnList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompressedVoiceData) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetCompressedVoiceData(Z_Param_Out_OutBuffer); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllPlayersInRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_requiredDistance); \
		P_GET_TARRAY_REF(APawn*,Z_Param_Out_pawnList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetAllPlayersInRange(Z_Param_requiredDistance,Z_Param_Out_pawnList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompressedVoiceData) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetCompressedVoiceData(Z_Param_Out_OutBuffer); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceChatComponent(); \
	friend OCTAGONVOICECHAT_API class UClass* Z_Construct_UClass_UVoiceChatComponent(); \
public: \
	DECLARE_CLASS(UVoiceChatComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OctagonVoiceChat"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChatComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceChatComponent(); \
	friend OCTAGONVOICECHAT_API class UClass* Z_Construct_UClass_UVoiceChatComponent(); \
public: \
	DECLARE_CLASS(UVoiceChatComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OctagonVoiceChat"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChatComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceChatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChatComponent(UVoiceChatComponent&&); \
	NO_API UVoiceChatComponent(const UVoiceChatComponent&); \
public:


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChatComponent(UVoiceChatComponent&&); \
	NO_API UVoiceChatComponent(const UVoiceChatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoiceChatComponent)


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StopTalkingTimeThreshold() { return STRUCT_OFFSET(UVoiceChatComponent, StopTalkingTimeThreshold); }


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_20_PROLOG
#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_RPC_WRAPPERS \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_INCLASS \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Components_VoiceChatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
