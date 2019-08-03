// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Tools/WeaponHandedness.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponHandedness() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UWeaponHandedness_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UWeaponHandedness();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
// End Cross Module References
	void UWeaponHandedness::StaticRegisterNativesUWeaponHandedness()
	{
	}
	UClass* Z_Construct_UClass_UWeaponHandedness_NoRegister()
	{
		return UWeaponHandedness::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponHandedness_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handesness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_handesness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponHandedness_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponHandedness_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Tools/WeaponHandedness.h" },
		{ "ModuleRelativePath", "Public/Core/Tools/WeaponHandedness.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponHandedness_Statics::NewProp_handesness_MetaData[] = {
		{ "Category", "WeaponHandedness" },
		{ "ModuleRelativePath", "Public/Core/Tools/WeaponHandedness.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeaponHandedness_Statics::NewProp_handesness = { UE4CodeGen_Private::EPropertyClass::Str, "handesness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UWeaponHandedness, handesness), METADATA_PARAMS(Z_Construct_UClass_UWeaponHandedness_Statics::NewProp_handesness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeaponHandedness_Statics::NewProp_handesness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponHandedness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponHandedness_Statics::NewProp_handesness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponHandedness_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponHandedness>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponHandedness_Statics::ClassParams = {
		&UWeaponHandedness::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UWeaponHandedness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UWeaponHandedness_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponHandedness_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWeaponHandedness_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponHandedness()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponHandedness_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponHandedness, 4211966727);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponHandedness(Z_Construct_UClass_UWeaponHandedness, &UWeaponHandedness::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UWeaponHandedness"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponHandedness);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
