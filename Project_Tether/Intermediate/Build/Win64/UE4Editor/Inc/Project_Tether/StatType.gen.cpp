// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Components/Stats/StatType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatType() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UStatType_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UStatType();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
// End Cross Module References
	void UStatType::StaticRegisterNativesUStatType()
	{
	}
	UClass* Z_Construct_UClass_UStatType_NoRegister()
	{
		return UStatType::StaticClass();
	}
	struct Z_Construct_UClass_UStatType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_statName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Components/Stats/StatType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatType_Statics::NewProp_statName_MetaData[] = {
		{ "Category", "StatType" },
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatType.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStatType_Statics::NewProp_statName = { UE4CodeGen_Private::EPropertyClass::Str, "statName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UStatType, statName), METADATA_PARAMS(Z_Construct_UClass_UStatType_Statics::NewProp_statName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatType_Statics::NewProp_statName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatType_Statics::NewProp_statName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatType_Statics::ClassParams = {
		&UStatType::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UStatType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UStatType_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStatType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStatType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatType, 3175095927);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatType(Z_Construct_UClass_UStatType, &UStatType::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UStatType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
