// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolComponent() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_GetTestSub();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UTool_NoRegister();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_ToolPTR();
// End Cross Module References
	void UToolComponent::StaticRegisterNativesUToolComponent()
	{
		UClass* Class = UToolComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTestSub", &UToolComponent::execGetTestSub },
			{ "ToolPTR", &UToolComponent::execToolPTR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToolComponent_GetTestSub_Statics
	{
		struct ToolComponent_eventGetTestSub_Parms
		{
			TSubclassOf<UTool>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UToolComponent_GetTestSub_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventGetTestSub_Parms, ReturnValue), Z_Construct_UClass_UTool_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_GetTestSub_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_GetTestSub_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_GetTestSub_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_GetTestSub_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "GetTestSub", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventGetTestSub_Parms), Z_Construct_UFunction_UToolComponent_GetTestSub_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_GetTestSub_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_GetTestSub_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_GetTestSub_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_GetTestSub()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_GetTestSub_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolComponent_ToolPTR_Statics
	{
		struct ToolComponent_eventToolPTR_Parms
		{
			UTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_ToolPTR_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventToolPTR_Parms, ReturnValue), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_ToolPTR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_ToolPTR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_ToolPTR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_ToolPTR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "ToolPTR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventToolPTR_Parms), Z_Construct_UFunction_UToolComponent_ToolPTR_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_ToolPTR_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_ToolPTR_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_ToolPTR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_ToolPTR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_ToolPTR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UToolComponent_NoRegister()
	{
		return UToolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UToolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_testToolPTR_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_testToolPTR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_testTool_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_testTool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToolComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolComponent_GetTestSub, "GetTestSub" }, // 497738507
		{ &Z_Construct_UFunction_UToolComponent_ToolPTR, "ToolPTR" }, // 1170357281
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_testToolPTR_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_testToolPTR = { UE4CodeGen_Private::EPropertyClass::Object, "testToolPTR", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UToolComponent, testToolPTR), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_testToolPTR_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_testToolPTR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_testTool_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_testTool = { UE4CodeGen_Private::EPropertyClass::Class, "testTool", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(UToolComponent, testTool), Z_Construct_UClass_UTool_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_testTool_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_testTool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_testToolPTR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_testTool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToolComponent_Statics::ClassParams = {
		&UToolComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UToolComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToolComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToolComponent, 2795045699);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToolComponent(Z_Construct_UClass_UToolComponent, &UToolComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UToolComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
