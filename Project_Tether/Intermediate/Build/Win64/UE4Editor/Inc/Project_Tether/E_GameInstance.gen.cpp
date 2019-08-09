// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Entity/E_GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE_GameInstance() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UE_GameInstance_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UE_GameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
// End Cross Module References
	void UE_GameInstance::StaticRegisterNativesUE_GameInstance()
	{
	}
	UClass* Z_Construct_UClass_UE_GameInstance_NoRegister()
	{
		return UE_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UE_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UE_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UE_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Entity/E_GameInstance.h" },
		{ "ModuleRelativePath", "Public/Core/Entity/E_GameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UE_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UE_GameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UE_GameInstance_Statics::ClassParams = {
		&UE_GameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UE_GameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UE_GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UE_GameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UE_GameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UE_GameInstance, 2085240403);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UE_GameInstance(Z_Construct_UClass_UE_GameInstance, &UE_GameInstance::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UE_GameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UE_GameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
