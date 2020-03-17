// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/VoiceChatComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceChatComponent() {}
// Cross Module References
	OCTAGONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_OctagonVoiceChat_VoiceChatStateChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OctagonVoiceChat();
	OCTAGONVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_OctagonVoiceChat_VoiceDataAvailableSignature__DelegateSignature();
	OCTAGONVOICECHAT_API UClass* Z_Construct_UClass_UVoiceChatComponent_NoRegister();
	OCTAGONVOICECHAT_API UClass* Z_Construct_UClass_UVoiceChatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	OCTAGONVOICECHAT_API UFunction* Z_Construct_UFunction_UVoiceChatComponent_GetAllPlayersInRange();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	OCTAGONVOICECHAT_API UFunction* Z_Construct_UFunction_UVoiceChatComponent_GetCompressedVoiceData();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_OctagonVoiceChat_VoiceChatStateChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/VoiceChatComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OctagonVoiceChat, "VoiceChatStateChangedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_OctagonVoiceChat_VoiceDataAvailableSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/VoiceChatComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OctagonVoiceChat, "VoiceDataAvailableSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UVoiceChatComponent::StaticRegisterNativesUVoiceChatComponent()
	{
		UClass* Class = UVoiceChatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllPlayersInRange", (Native)&UVoiceChatComponent::execGetAllPlayersInRange },
			{ "GetCompressedVoiceData", (Native)&UVoiceChatComponent::execGetCompressedVoiceData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVoiceChatComponent_GetAllPlayersInRange()
	{
		struct VoiceChatComponent_eventGetAllPlayersInRange_Parms
		{
			float requiredDistance;
			TArray<APawn*> pawnList;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pawnList = { UE4CodeGen_Private::EPropertyClass::Array, "pawnList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VoiceChatComponent_eventGetAllPlayersInRange_Parms, pawnList), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawnList_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "pawnList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_requiredDistance = { UE4CodeGen_Private::EPropertyClass::Float, "requiredDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VoiceChatComponent_eventGetAllPlayersInRange_Parms, requiredDistance), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pawnList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pawnList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_requiredDistance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "pawnList" },
				{ "Category", "VoiceChatComponent" },
				{ "ModuleRelativePath", "Public/Components/VoiceChatComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceChatComponent, "GetAllPlayersInRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(VoiceChatComponent_eventGetAllPlayersInRange_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVoiceChatComponent_GetCompressedVoiceData()
	{
		struct VoiceChatComponent_eventGetCompressedVoiceData_Parms
		{
			TArray<uint8> OutBuffer;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VoiceChatComponent_eventGetCompressedVoiceData_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VoiceChatComponent_eventGetCompressedVoiceData_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutBuffer = { UE4CodeGen_Private::EPropertyClass::Array, "OutBuffer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VoiceChatComponent_eventGetCompressedVoiceData_Parms, OutBuffer), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutBuffer_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "OutBuffer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutBuffer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutBuffer_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VoiceChatComponent" },
				{ "ModuleRelativePath", "Public/Components/VoiceChatComponent.h" },
				{ "ToolTip", "Gets the available voice data." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceChatComponent, "GetCompressedVoiceData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(VoiceChatComponent_eventGetCompressedVoiceData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoiceChatComponent_NoRegister()
	{
		return UVoiceChatComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVoiceChatComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_OctagonVoiceChat,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVoiceChatComponent_GetAllPlayersInRange, "GetAllPlayersInRange" }, // 730892447
				{ &Z_Construct_UFunction_UVoiceChatComponent_GetCompressedVoiceData, "GetCompressedVoiceData" }, // 394504293
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "Components/VoiceChatComponent.h" },
				{ "ModuleRelativePath", "Public/Components/VoiceChatComponent.h" },
				{ "ToolTip", "This component broadcasts events in response to voice chat activity. It also allows\nretrieval of the voice chat data buffer in either compressed or uncompressed form." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopTalkingTimeThreshold_MetaData[] = {
				{ "Category", "Voice" },
				{ "ModuleRelativePath", "Public/Components/VoiceChatComponent.h" },
				{ "ToolTip", "The amount of time in seconds before the stop talking event is triggered." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopTalkingTimeThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "StopTalkingTimeThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UVoiceChatComponent, StopTalkingTimeThreshold), METADATA_PARAMS(NewProp_StopTalkingTimeThreshold_MetaData, ARRAY_COUNT(NewProp_StopTalkingTimeThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoppedTalkingEvent_MetaData[] = {
				{ "Category", "VoiceChatComponent" },
				{ "ModuleRelativePath", "Public/Components/VoiceChatComponent.h" },
				{ "ToolTip", "An event that is broadcast when voice chat stops after being in an active state." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StoppedTalkingEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "StoppedTalkingEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVoiceChatComponent, StoppedTalkingEvent), Z_Construct_UDelegateFunction_OctagonVoiceChat_VoiceChatStateChangedSignature__DelegateSignature, METADATA_PARAMS(NewProp_StoppedTalkingEvent_MetaData, ARRAY_COUNT(NewProp_StoppedTalkingEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartedTalkingEvent_MetaData[] = {
				{ "Category", "VoiceChatComponent" },
				{ "ModuleRelativePath", "Public/Components/VoiceChatComponent.h" },
				{ "ToolTip", "An event that is broadcast when voice chat starts after being in an inactive state." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StartedTalkingEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "StartedTalkingEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVoiceChatComponent, StartedTalkingEvent), Z_Construct_UDelegateFunction_OctagonVoiceChat_VoiceChatStateChangedSignature__DelegateSignature, METADATA_PARAMS(NewProp_StartedTalkingEvent_MetaData, ARRAY_COUNT(NewProp_StartedTalkingEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceDataAvailableEvent_MetaData[] = {
				{ "Category", "VoiceChatComponent" },
				{ "ModuleRelativePath", "Public/Components/VoiceChatComponent.h" },
				{ "ToolTip", "An event that is broadcast when captured voice data is available to be read." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_VoiceDataAvailableEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "VoiceDataAvailableEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVoiceChatComponent, VoiceDataAvailableEvent), Z_Construct_UDelegateFunction_OctagonVoiceChat_VoiceDataAvailableSignature__DelegateSignature, METADATA_PARAMS(NewProp_VoiceDataAvailableEvent_MetaData, ARRAY_COUNT(NewProp_VoiceDataAvailableEvent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StopTalkingTimeThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoppedTalkingEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartedTalkingEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VoiceDataAvailableEvent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVoiceChatComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVoiceChatComponent::StaticClass,
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
	IMPLEMENT_CLASS(UVoiceChatComponent, 2516418923);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoiceChatComponent(Z_Construct_UClass_UVoiceChatComponent, &UVoiceChatComponent::StaticClass, TEXT("/Script/OctagonVoiceChat"), TEXT("UVoiceChatComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceChatComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
