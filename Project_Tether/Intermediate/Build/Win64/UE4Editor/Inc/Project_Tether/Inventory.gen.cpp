// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Item/Inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}
// Cross Module References
	PROJECT_TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FSlot();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UItem_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UInventory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UItemCategory_NoRegister();
// End Cross Module References
class UScriptStruct* FSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECT_TETHER_API uint32 Get_Z_Construct_UScriptStruct_FSlot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlot, Z_Construct_UPackage__Script_Project_Tether(), TEXT("Slot"), sizeof(FSlot), Get_Z_Construct_UScriptStruct_FSlot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlot(FSlot::StaticStruct, TEXT("/Script/Project_Tether"), TEXT("Slot"), false, nullptr, nullptr);
static struct FScriptStruct_Project_Tether_StaticRegisterNativesFSlot
{
	FScriptStruct_Project_Tether_StaticRegisterNativesFSlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Slot")),new UScriptStruct::TCppStructOps<FSlot>);
	}
} ScriptStruct_Project_Tether_StaticRegisterNativesFSlot;
	struct Z_Construct_UScriptStruct_FSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlot_Statics::NewProp_item_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSlot_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Class, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(FSlot, item), Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlot_Statics::NewProp_quantity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSlot_Statics::NewProp_quantity = { UE4CodeGen_Private::EPropertyClass::Float, "quantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSlot, quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_quantity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_quantity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlot_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlot_Statics::NewProp_quantity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
		nullptr,
		&NewStructOps,
		"Slot",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FSlot),
		alignof(FSlot),
		Z_Construct_UScriptStruct_FSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlot_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlot_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlot_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Slot"), sizeof(FSlot), Get_Z_Construct_UScriptStruct_FSlot_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlot_CRC() { return 1954991276U; }
	void UInventory::StaticRegisterNativesUInventory()
	{
	}
	UClass* Z_Construct_UClass_UInventory_NoRegister()
	{
		return UInventory::StaticClass();
	}
	struct Z_Construct_UClass_UInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_database_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_database;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_database_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_database_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Item/Inventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_database_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_database = { UE4CodeGen_Private::EPropertyClass::Map, "database", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UInventory, database), METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_database_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_database_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_database_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Class, "database_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000001, 1, nullptr, 0, Z_Construct_UClass_UItemCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_database_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "database", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_database,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_database_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_database_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
		&UInventory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventory, 2859810014);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventory(Z_Construct_UClass_UInventory, &UInventory::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
