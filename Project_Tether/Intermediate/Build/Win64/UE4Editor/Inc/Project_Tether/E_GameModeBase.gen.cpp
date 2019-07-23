// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Entity/E_GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE_GameModeBase() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_AE_GameModeBase_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_AE_GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_AE_GameModeBase_GetEntityManager();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UEntityManager_NoRegister();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_AE_GameModeBase_GetInventory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UInventory_NoRegister();
// End Cross Module References
	void AE_GameModeBase::StaticRegisterNativesAE_GameModeBase()
	{
		UClass* Class = AE_GameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEntityManager", &AE_GameModeBase::execGetEntityManager },
			{ "GetInventory", &AE_GameModeBase::execGetInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AE_GameModeBase_GetEntityManager_Statics
	{
		struct E_GameModeBase_eventGetEntityManager_Parms
		{
			UEntityManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AE_GameModeBase_GetEntityManager_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(E_GameModeBase_eventGetEntityManager_Parms, ReturnValue), Z_Construct_UClass_UEntityManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AE_GameModeBase_GetEntityManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AE_GameModeBase_GetEntityManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AE_GameModeBase_GetEntityManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Entity Manager" },
		{ "ModuleRelativePath", "Public/Core/Entity/E_GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AE_GameModeBase_GetEntityManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AE_GameModeBase, "GetEntityManager", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(E_GameModeBase_eventGetEntityManager_Parms), Z_Construct_UFunction_AE_GameModeBase_GetEntityManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AE_GameModeBase_GetEntityManager_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AE_GameModeBase_GetEntityManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AE_GameModeBase_GetEntityManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AE_GameModeBase_GetEntityManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AE_GameModeBase_GetEntityManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AE_GameModeBase_GetInventory_Statics
	{
		struct E_GameModeBase_eventGetInventory_Parms
		{
			TSubclassOf<UInventory>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AE_GameModeBase_GetInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(E_GameModeBase_eventGetInventory_Parms, ReturnValue), Z_Construct_UClass_UInventory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AE_GameModeBase_GetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AE_GameModeBase_GetInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AE_GameModeBase_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/Entity/E_GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AE_GameModeBase_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AE_GameModeBase, "GetInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(E_GameModeBase_eventGetInventory_Parms), Z_Construct_UFunction_AE_GameModeBase_GetInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AE_GameModeBase_GetInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AE_GameModeBase_GetInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AE_GameModeBase_GetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AE_GameModeBase_GetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AE_GameModeBase_GetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AE_GameModeBase_NoRegister()
	{
		return AE_GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AE_GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_entityManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_entityManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AE_GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AE_GameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AE_GameModeBase_GetEntityManager, "GetEntityManager" }, // 4006420408
		{ &Z_Construct_UFunction_AE_GameModeBase_GetInventory, "GetInventory" }, // 863037233
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AE_GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Core/Entity/E_GameModeBase.h" },
		{ "ModuleRelativePath", "Public/Core/Entity/E_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AE_GameModeBase_Statics::NewProp_inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/Entity/E_GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AE_GameModeBase_Statics::NewProp_inventory = { UE4CodeGen_Private::EPropertyClass::Class, "inventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(AE_GameModeBase, inventory), Z_Construct_UClass_UInventory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AE_GameModeBase_Statics::NewProp_inventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AE_GameModeBase_Statics::NewProp_inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AE_GameModeBase_Statics::NewProp_entityManager_MetaData[] = {
		{ "Category", "Entity Manager" },
		{ "ModuleRelativePath", "Public/Core/Entity/E_GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AE_GameModeBase_Statics::NewProp_entityManager = { UE4CodeGen_Private::EPropertyClass::Object, "entityManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AE_GameModeBase, entityManager), Z_Construct_UClass_UEntityManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AE_GameModeBase_Statics::NewProp_entityManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_AE_GameModeBase_Statics::NewProp_entityManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AE_GameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AE_GameModeBase_Statics::NewProp_inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AE_GameModeBase_Statics::NewProp_entityManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AE_GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AE_GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AE_GameModeBase_Statics::ClassParams = {
		&AE_GameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AE_GameModeBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AE_GameModeBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AE_GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AE_GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AE_GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AE_GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AE_GameModeBase, 3603975391);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AE_GameModeBase(Z_Construct_UClass_AE_GameModeBase, &AE_GameModeBase::StaticClass, TEXT("/Script/Project_Tether"), TEXT("AE_GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AE_GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
