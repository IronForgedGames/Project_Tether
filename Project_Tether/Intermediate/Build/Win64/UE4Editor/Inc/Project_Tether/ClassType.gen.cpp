// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Class/ClassType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassType() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UPlayerClassType_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UPlayerClassType();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
// End Cross Module References
	void UPlayerClassType::StaticRegisterNativesUPlayerClassType()
	{
	}
	UClass* Z_Construct_UClass_UPlayerClassType_NoRegister()
	{
		return UPlayerClassType::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerClassType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_className_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_className;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerClassType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerClassType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Class/ClassType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Class/ClassType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerClassType_Statics::NewProp_className_MetaData[] = {
		{ "Category", "Class" },
		{ "ModuleRelativePath", "Public/Core/Class/ClassType.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayerClassType_Statics::NewProp_className = { UE4CodeGen_Private::EPropertyClass::Str, "className", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UPlayerClassType, className), METADATA_PARAMS(Z_Construct_UClass_UPlayerClassType_Statics::NewProp_className_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerClassType_Statics::NewProp_className_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerClassType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerClassType_Statics::NewProp_className,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerClassType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerClassType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerClassType_Statics::ClassParams = {
		&UPlayerClassType::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UPlayerClassType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPlayerClassType_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerClassType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerClassType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerClassType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerClassType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerClassType, 1832091775);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerClassType(Z_Construct_UClass_UPlayerClassType, &UPlayerClassType::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UPlayerClassType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerClassType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
