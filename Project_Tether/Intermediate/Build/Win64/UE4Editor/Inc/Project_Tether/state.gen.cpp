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
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UState_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UState();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
// End Cross Module References
	void UState::StaticRegisterNativesUState()
	{
	}
	UClass* Z_Construct_UClass_UState_NoRegister()
	{
		return UState::StaticClass();
	}
	struct Z_Construct_UClass_UState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Components/state.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Components/state.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UState_Statics::ClassParams = {
		&UState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UState, 2384739485);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UState(Z_Construct_UClass_UState, &UState::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
