// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Entity/E_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE_Character() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_AE_Character_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_AE_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_AE_Character_GetEntity();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UEntity_NoRegister();
// End Cross Module References
	void AE_Character::StaticRegisterNativesAE_Character()
	{
		UClass* Class = AE_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEntity", &AE_Character::execGetEntity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AE_Character_GetEntity_Statics
	{
		struct E_Character_eventGetEntity_Parms
		{
			UEntity* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AE_Character_GetEntity_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AE_Character_GetEntity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(E_Character_eventGetEntity_Parms, ReturnValue), Z_Construct_UClass_UEntity_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AE_Character_GetEntity_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AE_Character_GetEntity_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AE_Character_GetEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AE_Character_GetEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AE_Character_GetEntity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Entity" },
		{ "ModuleRelativePath", "Public/Core/Entity/E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AE_Character_GetEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AE_Character, "GetEntity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(E_Character_eventGetEntity_Parms), Z_Construct_UFunction_AE_Character_GetEntity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AE_Character_GetEntity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AE_Character_GetEntity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AE_Character_GetEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AE_Character_GetEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AE_Character_GetEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AE_Character_NoRegister()
	{
		return AE_Character::StaticClass();
	}
	struct Z_Construct_UClass_AE_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AE_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AE_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AE_Character_GetEntity, "GetEntity" }, // 4257516946
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AE_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/Entity/E_Character.h" },
		{ "ModuleRelativePath", "Public/Core/Entity/E_Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AE_Character_Statics::NewProp_entity_MetaData[] = {
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Entity/E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AE_Character_Statics::NewProp_entity = { UE4CodeGen_Private::EPropertyClass::Object, "entity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(AE_Character, entity), Z_Construct_UClass_UEntity_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AE_Character_Statics::NewProp_entity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AE_Character_Statics::NewProp_entity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AE_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AE_Character_Statics::NewProp_entity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AE_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AE_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AE_Character_Statics::ClassParams = {
		&AE_Character::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AE_Character_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AE_Character_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AE_Character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AE_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AE_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AE_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AE_Character, 492406994);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AE_Character(Z_Construct_UClass_AE_Character, &AE_Character::StaticClass, TEXT("/Script/Project_Tether"), TEXT("AE_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AE_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
