// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Tools/Tool_StaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTool_StaticMeshComponent() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UTool_StaticMeshComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UTool_StaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
// End Cross Module References
	void UTool_StaticMeshComponent::StaticRegisterNativesUTool_StaticMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UTool_StaticMeshComponent_NoRegister()
	{
		return UTool_StaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTool_StaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTool_StaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_StaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Core/Tools/Tool_StaticMeshComponent.h" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool_StaticMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTool_StaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTool_StaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTool_StaticMeshComponent_Statics::ClassParams = {
		&UTool_StaticMeshComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTool_StaticMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTool_StaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTool_StaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTool_StaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTool_StaticMeshComponent, 3358869246);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTool_StaticMeshComponent(Z_Construct_UClass_UTool_StaticMeshComponent, &UTool_StaticMeshComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UTool_StaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTool_StaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
