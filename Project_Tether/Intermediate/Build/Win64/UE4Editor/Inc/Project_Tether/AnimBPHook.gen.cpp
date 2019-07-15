// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Implementation/Gameplay/PlayerController/Components/AnimBPHook.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBPHook() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UAnimBPHook_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UAnimBPHook();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UAnimBPHook_GetDirection();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UAnimBPHook_GetFocus();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UAnimBPHook_GetSpeed();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UAnimBPHook_SetFocusFalse();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UAnimBPHook_SetFocusTrue();
// End Cross Module References
	void UAnimBPHook::StaticRegisterNativesUAnimBPHook()
	{
		UClass* Class = UAnimBPHook::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDirection", &UAnimBPHook::execGetDirection },
			{ "GetFocus", &UAnimBPHook::execGetFocus },
			{ "GetSpeed", &UAnimBPHook::execGetSpeed },
			{ "SetFocusFalse", &UAnimBPHook::execSetFocusFalse },
			{ "SetFocusTrue", &UAnimBPHook::execSetFocusTrue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimBPHook_GetDirection_Statics
	{
		struct AnimBPHook_eventGetDirection_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimBPHook_GetDirection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimBPHook_eventGetDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBPHook_GetDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBPHook_GetDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBPHook_GetDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomtion" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/AnimBPHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBPHook_GetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBPHook, "GetDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimBPHook_eventGetDirection_Parms), Z_Construct_UFunction_UAnimBPHook_GetDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimBPHook_GetDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBPHook_GetDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimBPHook_GetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBPHook_GetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBPHook_GetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics
	{
		struct AnimBPHook_eventGetFocus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimBPHook_eventGetFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AnimBPHook_eventGetFocus_Parms), &Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomtion" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/AnimBPHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBPHook, "GetFocus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimBPHook_eventGetFocus_Parms), Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBPHook_GetFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBPHook_GetFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBPHook_GetSpeed_Statics
	{
		struct AnimBPHook_eventGetSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimBPHook_GetSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimBPHook_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimBPHook_GetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimBPHook_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBPHook_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomtion" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/AnimBPHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBPHook_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBPHook, "GetSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimBPHook_eventGetSpeed_Parms), Z_Construct_UFunction_UAnimBPHook_GetSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimBPHook_GetSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBPHook_GetSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimBPHook_GetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBPHook_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBPHook_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBPHook_SetFocusFalse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBPHook_SetFocusFalse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomtion" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/AnimBPHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBPHook_SetFocusFalse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBPHook, "SetFocusFalse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBPHook_SetFocusFalse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimBPHook_SetFocusFalse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBPHook_SetFocusFalse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBPHook_SetFocusFalse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimBPHook_SetFocusTrue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimBPHook_SetFocusTrue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomtion" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/AnimBPHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimBPHook_SetFocusTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimBPHook, "SetFocusTrue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimBPHook_SetFocusTrue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimBPHook_SetFocusTrue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimBPHook_SetFocusTrue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimBPHook_SetFocusTrue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimBPHook_NoRegister()
	{
		return UAnimBPHook::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBPHook_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBPHook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimBPHook_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimBPHook_GetDirection, "GetDirection" }, // 1284793338
		{ &Z_Construct_UFunction_UAnimBPHook_GetFocus, "GetFocus" }, // 802133245
		{ &Z_Construct_UFunction_UAnimBPHook_GetSpeed, "GetSpeed" }, // 677803151
		{ &Z_Construct_UFunction_UAnimBPHook_SetFocusFalse, "SetFocusFalse" }, // 282869535
		{ &Z_Construct_UFunction_UAnimBPHook_SetFocusTrue, "SetFocusTrue" }, // 936456868
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBPHook_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Implementation/Gameplay/PlayerController/Components/AnimBPHook.h" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/AnimBPHook.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBPHook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBPHook>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBPHook_Statics::ClassParams = {
		&UAnimBPHook::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBPHook_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimBPHook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBPHook()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBPHook_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBPHook, 1456151075);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBPHook(Z_Construct_UClass_UAnimBPHook, &UAnimBPHook::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UAnimBPHook"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBPHook);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
