// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Entity/EntityManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityManager() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UEntityManager_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UEntityManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
// End Cross Module References
	void UEntityManager::StaticRegisterNativesUEntityManager()
	{
	}
	UClass* Z_Construct_UClass_UEntityManager_NoRegister()
	{
		return UEntityManager::StaticClass();
	}
	struct Z_Construct_UClass_UEntityManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEntityManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Entity/EntityManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Entity/EntityManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntityManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEntityManager_Statics::ClassParams = {
		&UEntityManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEntityManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEntityManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEntityManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEntityManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEntityManager, 1031525116);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEntityManager(Z_Construct_UClass_UEntityManager, &UEntityManager::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UEntityManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
