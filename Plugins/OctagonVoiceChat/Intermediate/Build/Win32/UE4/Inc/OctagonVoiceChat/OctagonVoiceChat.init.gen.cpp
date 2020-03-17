// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOctagonVoiceChat_init() {}
	OCTAGONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_OctagonVoiceChat_VoiceDataAvailableSignature__DelegateSignature();
	OCTAGONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_OctagonVoiceChat_VoiceChatStateChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OctagonVoiceChat()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OctagonVoiceChat_VoiceDataAvailableSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OctagonVoiceChat_VoiceChatStateChangedSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/OctagonVoiceChat",
				PKG_CompiledIn | 0x00000000,
				0xE46783BE,
				0x53D6EBB8,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
