// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Components/state.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodestate() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_Ustate_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_Ustate();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
// End Cross Module References
	void Ustate::StaticRegisterNativesUstate()
	{
	}
	UClass* Z_Construct_UClass_Ustate_NoRegister()
	{
		return Ustate::StaticClass();
	}
	struct Z_Construct_UClass_Ustate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ustate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ustate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Components/state.h" },
		{ "ModuleRelativePath", "Public/Core/Components/state.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ustate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ustate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ustate_Statics::ClassParams = {
		&Ustate::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_Ustate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Ustate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ustate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ustate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ustate, 2040006007);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ustate(Z_Construct_UClass_Ustate, &Ustate::StaticClass, TEXT("/Script/Project_Tether"), TEXT("Ustate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ustate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
