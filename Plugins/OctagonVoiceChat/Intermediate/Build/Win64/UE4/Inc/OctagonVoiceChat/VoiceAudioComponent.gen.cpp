// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/VoiceAudioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceAudioComponent() {}
// Cross Module References
	OCTAGONVOICECHAT_API UClass* Z_Construct_UClass_UVoiceAudioComponent_NoRegister();
	OCTAGONVOICECHAT_API UClass* Z_Construct_UClass_UVoiceAudioComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
	UPackage* Z_Construct_UPackage__Script_OctagonVoiceChat();
	OCTAGONVOICECHAT_API UFunction* Z_Construct_UFunction_UVoiceAudioComponent_InitializeVoiceAudioComponent();
	OCTAGONVOICECHAT_API UFunction* Z_Construct_UFunction_UVoiceAudioComponent_QueueVoiceData();
	OCTAGONVOICECHAT_API UClass* Z_Construct_UClass_UVoiceDecoder_NoRegister();
// End Cross Module References
	void UVoiceAudioComponent::StaticRegisterNativesUVoiceAudioComponent()
	{
		UClass* Class = UVoiceAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeVoiceAudioComponent", (Native)&UVoiceAudioComponent::execInitializeVoiceAudioComponent },
			{ "QueueVoiceData", (Native)&UVoiceAudioComponent::execQueueVoiceData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVoiceAudioComponent_InitializeVoiceAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VoiceAudioComponent" },
				{ "ModuleRelativePath", "Public/Components/VoiceAudioComponent.h" },
				{ "ToolTip", "Initializes the voice audio component. Called automatically for default\n      sub-objects, but must be called manually for components created at runtime." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAudioComponent, "InitializeVoiceAudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVoiceAudioComponent_QueueVoiceData()
	{
		struct VoiceAudioComponent_eventQueueVoiceData_Parms
		{
			TArray<uint8> CompressedVoiceData;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressedVoiceData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompressedVoiceData = { UE4CodeGen_Private::EPropertyClass::Array, "CompressedVoiceData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VoiceAudioComponent_eventQueueVoiceData_Parms, CompressedVoiceData), METADATA_PARAMS(NewProp_CompressedVoiceData_MetaData, ARRAY_COUNT(NewProp_CompressedVoiceData_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedVoiceData_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressedVoiceData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressedVoiceData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressedVoiceData_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VoiceAudioComponent" },
				{ "ModuleRelativePath", "Public/Components/VoiceAudioComponent.h" },
				{ "ToolTip", "Plays back uncompressed voice chat data." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAudioComponent, "QueueVoiceData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420400, sizeof(VoiceAudioComponent_eventQueueVoiceData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoiceAudioComponent_NoRegister()
	{
		return UVoiceAudioComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVoiceAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAudioComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_OctagonVoiceChat,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVoiceAudioComponent_InitializeVoiceAudioComponent, "InitializeVoiceAudioComponent" }, // 3485261578
				{ &Z_Construct_UFunction_UVoiceAudioComponent_QueueVoiceData, "QueueVoiceData" }, // 2991002882
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
				{ "IncludePath", "Components/VoiceAudioComponent.h" },
				{ "ModuleRelativePath", "Public/Components/VoiceAudioComponent.h" },
				{ "ToolTip", "An audio component that is set up for voice playback." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceDecoder_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/VoiceAudioComponent.h" },
				{ "ToolTip", "Decodes incoming voice chat data." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceDecoder = { UE4CodeGen_Private::EPropertyClass::Object, "VoiceDecoder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UVoiceAudioComponent, VoiceDecoder), Z_Construct_UClass_UVoiceDecoder_NoRegister, METADATA_PARAMS(NewProp_VoiceDecoder_MetaData, ARRAY_COUNT(NewProp_VoiceDecoder_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VoiceDecoder,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVoiceAudioComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVoiceAudioComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoiceAudioComponent, 1070178026);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoiceAudioComponent(Z_Construct_UClass_UVoiceAudioComponent, &UVoiceAudioComponent::StaticClass, TEXT("/Script/OctagonVoiceChat"), TEXT("UVoiceAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
