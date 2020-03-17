// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Utilities/VoiceDecoder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceDecoder() {}
// Cross Module References
	OCTAGONVOICECHAT_API UClass* Z_Construct_UClass_UVoiceDecoder_NoRegister();
	OCTAGONVOICECHAT_API UClass* Z_Construct_UClass_UVoiceDecoder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OctagonVoiceChat();
	OCTAGONVOICECHAT_API UFunction* Z_Construct_UFunction_UVoiceDecoder_CreateVoiceDecoder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	OCTAGONVOICECHAT_API UFunction* Z_Construct_UFunction_UVoiceDecoder_DecompressVoiceData();
// End Cross Module References
	void UVoiceDecoder::StaticRegisterNativesUVoiceDecoder()
	{
		UClass* Class = UVoiceDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateVoiceDecoder", (Native)&UVoiceDecoder::execCreateVoiceDecoder },
			{ "DecompressVoiceData", (Native)&UVoiceDecoder::execDecompressVoiceData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVoiceDecoder_CreateVoiceDecoder()
	{
		struct VoiceDecoder_eventCreateVoiceDecoder_Parms
		{
			UObject* Owner;
			UVoiceDecoder* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VoiceDecoder_eventCreateVoiceDecoder_Parms, ReturnValue), Z_Construct_UClass_UVoiceDecoder_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner = { UE4CodeGen_Private::EPropertyClass::Object, "Owner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VoiceDecoder_eventCreateVoiceDecoder_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Owner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VoiceDecoder" },
				{ "DefaultToSelf", "Owner" },
				{ "HidePin", "Owner" },
				{ "ModuleRelativePath", "Public/Utilities/VoiceDecoder.h" },
				{ "ToolTip", "Creates a new voice decoder object." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceDecoder, "CreateVoiceDecoder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VoiceDecoder_eventCreateVoiceDecoder_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVoiceDecoder_DecompressVoiceData()
	{
		struct VoiceDecoder_eventDecompressVoiceData_Parms
		{
			TArray<uint8> InCompressedVoiceData;
			int32 InCompressedVoiceBytes;
			TArray<uint8> OutDecompressedVoiceData;
			int32 OutDecompressedVoiceBytes;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutDecompressedVoiceBytes = { UE4CodeGen_Private::EPropertyClass::Int, "OutDecompressedVoiceBytes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VoiceDecoder_eventDecompressVoiceData_Parms, OutDecompressedVoiceBytes), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDecompressedVoiceData = { UE4CodeGen_Private::EPropertyClass::Array, "OutDecompressedVoiceData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VoiceDecoder_eventDecompressVoiceData_Parms, OutDecompressedVoiceData), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutDecompressedVoiceData_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "OutDecompressedVoiceData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InCompressedVoiceBytes = { UE4CodeGen_Private::EPropertyClass::Int, "InCompressedVoiceBytes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VoiceDecoder_eventDecompressVoiceData_Parms, InCompressedVoiceBytes), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCompressedVoiceData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCompressedVoiceData = { UE4CodeGen_Private::EPropertyClass::Array, "InCompressedVoiceData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VoiceDecoder_eventDecompressVoiceData_Parms, InCompressedVoiceData), METADATA_PARAMS(NewProp_InCompressedVoiceData_MetaData, ARRAY_COUNT(NewProp_InCompressedVoiceData_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCompressedVoiceData_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "InCompressedVoiceData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutDecompressedVoiceBytes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutDecompressedVoiceData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutDecompressedVoiceData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InCompressedVoiceBytes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InCompressedVoiceData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InCompressedVoiceData_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VoiceChatComponent" },
				{ "ModuleRelativePath", "Public/Utilities/VoiceDecoder.h" },
				{ "ToolTip", "Decompresses a voice data stream." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceDecoder, "DecompressVoiceData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(VoiceDecoder_eventDecompressVoiceData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoiceDecoder_NoRegister()
	{
		return UVoiceDecoder::StaticClass();
	}
	UClass* Z_Construct_UClass_UVoiceDecoder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_OctagonVoiceChat,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVoiceDecoder_CreateVoiceDecoder, "CreateVoiceDecoder" }, // 3651444671
				{ &Z_Construct_UFunction_UVoiceDecoder_DecompressVoiceData, "DecompressVoiceData" }, // 2275776920
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Utilities/VoiceDecoder.h" },
				{ "ModuleRelativePath", "Public/Utilities/VoiceDecoder.h" },
				{ "ToolTip", "A helper class for decompressing voice chat data." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVoiceDecoder>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVoiceDecoder::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoiceDecoder, 735870844);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoiceDecoder(Z_Construct_UClass_UVoiceDecoder, &UVoiceDecoder::StaticClass, TEXT("/Script/OctagonVoiceChat"), TEXT("UVoiceDecoder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceDecoder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
