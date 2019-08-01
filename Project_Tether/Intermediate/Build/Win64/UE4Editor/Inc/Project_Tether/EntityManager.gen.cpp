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
	PROJECT_TETHER_API UFunction* Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UEntity_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UEntityManager_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UEntityManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics
	{
		struct _Script_Project_Tether_eventEntityEventSignature_Parms
		{
			UEntity* entity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::NewProp_entity_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::NewProp_entity = { UE4CodeGen_Private::EPropertyClass::Object, "entity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_Project_Tether_eventEntityEventSignature_Parms, entity), Z_Construct_UClass_UEntity_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::NewProp_entity_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::NewProp_entity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::NewProp_entity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Entity/EntityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Project_Tether, "EntityEventSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Project_Tether_eventEntityEventSignature_Parms), Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityRemovedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_entityRemovedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityAddedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_entityAddedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityManager_Statics::NewProp_entityRemovedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Entity/EntityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEntityManager_Statics::NewProp_entityRemovedEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "entityRemovedEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UEntityManager, entityRemovedEvent), Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEntityManager_Statics::NewProp_entityRemovedEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEntityManager_Statics::NewProp_entityRemovedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityManager_Statics::NewProp_entityAddedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Entity/EntityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEntityManager_Statics::NewProp_entityAddedEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "entityAddedEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UEntityManager, entityAddedEvent), Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEntityManager_Statics::NewProp_entityAddedEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEntityManager_Statics::NewProp_entityAddedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityManager_Statics::NewProp_entityRemovedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityManager_Statics::NewProp_entityAddedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntityManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEntityManager_Statics::ClassParams = {
		&UEntityManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UEntityManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEntityManager_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UEntityManager, 384511672);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEntityManager(Z_Construct_UClass_UEntityManager, &UEntityManager::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UEntityManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
