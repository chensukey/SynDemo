// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UVoiceDecoder;
#ifdef OCTAGONVOICECHAT_VoiceDecoder_generated_h
#error "VoiceDecoder.generated.h already included, missing '#pragma once' in VoiceDecoder.h"
#endif
#define OCTAGONVOICECHAT_VoiceDecoder_generated_h

#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecompressVoiceData) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InCompressedVoiceData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InCompressedVoiceBytes); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutDecompressedVoiceData); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutDecompressedVoiceBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DecompressVoiceData(Z_Param_Out_InCompressedVoiceData,Z_Param_InCompressedVoiceBytes,Z_Param_Out_OutDecompressedVoiceData,Z_Param_Out_OutDecompressedVoiceBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVoiceDecoder) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVoiceDecoder**)Z_Param__Result=UVoiceDecoder::CreateVoiceDecoder(Z_Param_Owner); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecompressVoiceData) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InCompressedVoiceData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InCompressedVoiceBytes); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutDecompressedVoiceData); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutDecompressedVoiceBytes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DecompressVoiceData(Z_Param_Out_InCompressedVoiceData,Z_Param_InCompressedVoiceBytes,Z_Param_Out_OutDecompressedVoiceData,Z_Param_Out_OutDecompressedVoiceBytes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVoiceDecoder) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVoiceDecoder**)Z_Param__Result=UVoiceDecoder::CreateVoiceDecoder(Z_Param_Owner); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceDecoder(); \
	friend OCTAGONVOICECHAT_API class UClass* Z_Construct_UClass_UVoiceDecoder(); \
public: \
	DECLARE_CLASS(UVoiceDecoder, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OctagonVoiceChat"), NO_API) \
	DECLARE_SERIALIZER(UVoiceDecoder) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceDecoder(); \
	friend OCTAGONVOICECHAT_API class UClass* Z_Construct_UClass_UVoiceDecoder(); \
public: \
	DECLARE_CLASS(UVoiceDecoder, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OctagonVoiceChat"), NO_API) \
	DECLARE_SERIALIZER(UVoiceDecoder) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceDecoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceDecoder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceDecoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceDecoder(UVoiceDecoder&&); \
	NO_API UVoiceDecoder(const UVoiceDecoder&); \
public:


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceDecoder(UVoiceDecoder&&); \
	NO_API UVoiceDecoder(const UVoiceDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceDecoder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceDecoder)


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_14_PROLOG
#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_RPC_WRAPPERS \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_INCLASS \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OctagonVoiceChat_Source_OctagonVoiceChat_Public_Utilities_VoiceDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
