// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Implementation/Gameplay/PlayerController/Components/EvadeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvadeComponent() {}
// Cross Module References
	PROJECT_TETHER_API UFunction* Z_Construct_UDelegateFunction_Project_Tether_EvadeEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UEvadeComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UEvadeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UEvadeComponent_EndEvade();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UEvadeComponent_StartEvade();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UState_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Project_Tether_EvadeEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Project_Tether_EvadeEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/EvadeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Project_Tether_EvadeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Project_Tether, "EvadeEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Project_Tether_EvadeEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Project_Tether_EvadeEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Project_Tether_EvadeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Project_Tether_EvadeEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UEvadeComponent::StaticRegisterNativesUEvadeComponent()
	{
		UClass* Class = UEvadeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndEvade", &UEvadeComponent::execEndEvade },
			{ "StartEvade", &UEvadeComponent::execStartEvade },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEvadeComponent_EndEvade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvadeComponent_EndEvade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/EvadeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvadeComponent_EndEvade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvadeComponent, "EndEvade", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvadeComponent_EndEvade_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEvadeComponent_EndEvade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvadeComponent_EndEvade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvadeComponent_EndEvade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics
	{
		struct EvadeComponent_eventStartEvade_Parms
		{
			FVector currentVelocity;
			bool shouldRotate;
		};
		static void NewProp_shouldRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldRotate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currentVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::NewProp_shouldRotate_SetBit(void* Obj)
	{
		((EvadeComponent_eventStartEvade_Parms*)Obj)->shouldRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::NewProp_shouldRotate = { UE4CodeGen_Private::EPropertyClass::Bool, "shouldRotate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EvadeComponent_eventStartEvade_Parms), &Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::NewProp_shouldRotate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::NewProp_currentVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "currentVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EvadeComponent_eventStartEvade_Parms, currentVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::NewProp_shouldRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::NewProp_currentVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/EvadeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvadeComponent, "StartEvade", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(EvadeComponent_eventStartEvade_Parms), Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvadeComponent_StartEvade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvadeComponent_StartEvade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEvadeComponent_NoRegister()
	{
		return UEvadeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEvadeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unavailableStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_unavailableStates;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unavailableStates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_evadeEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_evadeEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_evadeStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_evadeStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEvadeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEvadeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEvadeComponent_EndEvade, "EndEvade" }, // 2870605664
		{ &Z_Construct_UFunction_UEvadeComponent_StartEvade, "StartEvade" }, // 1292306217
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvadeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Implementation/Gameplay/PlayerController/Components/EvadeComponent.h" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/EvadeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvadeComponent_Statics::NewProp_unavailableStates_MetaData[] = {
		{ "Category", "EvadeComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/EvadeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEvadeComponent_Statics::NewProp_unavailableStates = { UE4CodeGen_Private::EPropertyClass::Array, "unavailableStates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UEvadeComponent, unavailableStates), METADATA_PARAMS(Z_Construct_UClass_UEvadeComponent_Statics::NewProp_unavailableStates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEvadeComponent_Statics::NewProp_unavailableStates_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEvadeComponent_Statics::NewProp_unavailableStates_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "unavailableStates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvadeComponent_Statics::NewProp_evadeEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/EvadeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEvadeComponent_Statics::NewProp_evadeEnded = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "evadeEnded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UEvadeComponent, evadeEnded), Z_Construct_UDelegateFunction_Project_Tether_EvadeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEvadeComponent_Statics::NewProp_evadeEnded_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEvadeComponent_Statics::NewProp_evadeEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvadeComponent_Statics::NewProp_evadeStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/EvadeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEvadeComponent_Statics::NewProp_evadeStarted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "evadeStarted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UEvadeComponent, evadeStarted), Z_Construct_UDelegateFunction_Project_Tether_EvadeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEvadeComponent_Statics::NewProp_evadeStarted_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEvadeComponent_Statics::NewProp_evadeStarted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEvadeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvadeComponent_Statics::NewProp_unavailableStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvadeComponent_Statics::NewProp_unavailableStates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvadeComponent_Statics::NewProp_evadeEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvadeComponent_Statics::NewProp_evadeStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEvadeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEvadeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEvadeComponent_Statics::ClassParams = {
		&UEvadeComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UEvadeComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEvadeComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEvadeComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEvadeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEvadeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEvadeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEvadeComponent, 670800165);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEvadeComponent(Z_Construct_UClass_UEvadeComponent, &UEvadeComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UEvadeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEvadeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
