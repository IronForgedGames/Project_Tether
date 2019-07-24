// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Implementation/Gameplay/Player_Delete/E_PlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE_PlayerCharacter() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_AE_PlayerCharacter_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_AE_PlayerCharacter();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_AE_Character();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
// End Cross Module References
	void AE_PlayerCharacter::StaticRegisterNativesAE_PlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_AE_PlayerCharacter_NoRegister()
	{
		return AE_PlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AE_PlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AE_PlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AE_Character,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AE_PlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Implementation/Gameplay/Player_Delete/E_PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/Player_Delete/E_PlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AE_PlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AE_PlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AE_PlayerCharacter_Statics::ClassParams = {
		&AE_PlayerCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AE_PlayerCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AE_PlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AE_PlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AE_PlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AE_PlayerCharacter, 212664157);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AE_PlayerCharacter(Z_Construct_UClass_AE_PlayerCharacter, &AE_PlayerCharacter::StaticClass, TEXT("/Script/Project_Tether"), TEXT("AE_PlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AE_PlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
