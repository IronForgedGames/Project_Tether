// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Project_TetherGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_TetherGameMode() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_AProject_TetherGameMode_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_AProject_TetherGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
// End Cross Module References
	void AProject_TetherGameMode::StaticRegisterNativesAProject_TetherGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProject_TetherGameMode_NoRegister()
	{
		return AProject_TetherGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProject_TetherGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject_TetherGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_TetherGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Project_TetherGameMode.h" },
		{ "ModuleRelativePath", "Project_TetherGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject_TetherGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_TetherGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProject_TetherGameMode_Statics::ClassParams = {
		&AProject_TetherGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProject_TetherGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProject_TetherGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProject_TetherGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProject_TetherGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProject_TetherGameMode, 736803718);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject_TetherGameMode(Z_Construct_UClass_AProject_TetherGameMode, &AProject_TetherGameMode::StaticClass, TEXT("/Script/Project_Tether"), TEXT("AProject_TetherGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_TetherGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
