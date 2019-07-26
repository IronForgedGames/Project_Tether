// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Tools/WeaponType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponType() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UWeaponType_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UWeaponType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UWeaponType::StaticRegisterNativesUWeaponType()
	{
	}
	UClass* Z_Construct_UClass_UWeaponType_NoRegister()
	{
		return UWeaponType::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_altAttackAnims_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_altAttackAnims_2;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_altAttackAnims_2_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_altAttackAnims_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_altAttackAnims_1;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_altAttackAnims_1_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_standardAttackAnims_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_standardAttackAnims;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_standardAttackAnims_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponTypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_weaponTypeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Tools/WeaponType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Tools/WeaponType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_2_MetaData[] = {
		{ "Category", "WeaponType" },
		{ "ModuleRelativePath", "Public/Core/Tools/WeaponType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_2 = { UE4CodeGen_Private::EPropertyClass::Array, "altAttackAnims_2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UWeaponType, altAttackAnims_2), METADATA_PARAMS(Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_2_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_2_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "altAttackAnims_2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_1_MetaData[] = {
		{ "Category", "WeaponType" },
		{ "ModuleRelativePath", "Public/Core/Tools/WeaponType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_1 = { UE4CodeGen_Private::EPropertyClass::Array, "altAttackAnims_1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UWeaponType, altAttackAnims_1), METADATA_PARAMS(Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_1_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_1_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "altAttackAnims_1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponType_Statics::NewProp_standardAttackAnims_MetaData[] = {
		{ "Category", "WeaponType" },
		{ "ModuleRelativePath", "Public/Core/Tools/WeaponType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponType_Statics::NewProp_standardAttackAnims = { UE4CodeGen_Private::EPropertyClass::Array, "standardAttackAnims", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UWeaponType, standardAttackAnims), METADATA_PARAMS(Z_Construct_UClass_UWeaponType_Statics::NewProp_standardAttackAnims_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeaponType_Statics::NewProp_standardAttackAnims_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponType_Statics::NewProp_standardAttackAnims_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "standardAttackAnims", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponType_Statics::NewProp_weaponTypeName_MetaData[] = {
		{ "Category", "WeaponType" },
		{ "ModuleRelativePath", "Public/Core/Tools/WeaponType.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeaponType_Statics::NewProp_weaponTypeName = { UE4CodeGen_Private::EPropertyClass::Str, "weaponTypeName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UWeaponType, weaponTypeName), METADATA_PARAMS(Z_Construct_UClass_UWeaponType_Statics::NewProp_weaponTypeName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeaponType_Statics::NewProp_weaponTypeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponType_Statics::NewProp_altAttackAnims_1_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponType_Statics::NewProp_standardAttackAnims,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponType_Statics::NewProp_standardAttackAnims_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponType_Statics::NewProp_weaponTypeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponType_Statics::ClassParams = {
		&UWeaponType::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UWeaponType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UWeaponType_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWeaponType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponType, 873249642);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponType(Z_Construct_UClass_UWeaponType, &UWeaponType::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UWeaponType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
