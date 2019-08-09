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
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UItem_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UItemCategory_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UInventory();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UInventory_Add();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UInventory_GetItems();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UInventory_GetQuantity();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UInventory_Subtract();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unlimitedSpace_MetaData[];
#endif
		static void NewProp_unlimitedSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_unlimitedSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_category;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlot_Statics::NewProp_maxAmount_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSlot_Statics::NewProp_maxAmount = { UE4CodeGen_Private::EPropertyClass::Int, "maxAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSlot, maxAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_maxAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_maxAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlot_Statics::NewProp_unlimitedSpace_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSlot_Statics::NewProp_unlimitedSpace_SetBit(void* Obj)
	{
		((FSlot*)Obj)->unlimitedSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSlot_Statics::NewProp_unlimitedSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "unlimitedSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSlot), &Z_Construct_UScriptStruct_FSlot_Statics::NewProp_unlimitedSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_unlimitedSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_unlimitedSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlot_Statics::NewProp_item_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSlot_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Object, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSlot, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlot_Statics::NewProp_category_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSlot_Statics::NewProp_category = { UE4CodeGen_Private::EPropertyClass::Object, "category", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSlot, category), Z_Construct_UClass_UItemCategory_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_category_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlot_Statics::NewProp_quantity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSlot_Statics::NewProp_quantity = { UE4CodeGen_Private::EPropertyClass::Float, "quantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSlot, quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_quantity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlot_Statics::NewProp_quantity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlot_Statics::NewProp_maxAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlot_Statics::NewProp_unlimitedSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlot_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlot_Statics::NewProp_category,
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
	uint32 Get_Z_Construct_UScriptStruct_FSlot_CRC() { return 1753566996U; }
	void UInventory::StaticRegisterNativesUInventory()
	{
		UClass* Class = UInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &UInventory::execAdd },
			{ "GetItems", &UInventory::execGetItems },
			{ "GetQuantity", &UInventory::execGetQuantity },
			{ "Subtract", &UInventory::execSubtract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventory_Add_Statics
	{
		struct Inventory_eventAdd_Parms
		{
			UItem* item;
			int32 amount;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_Add_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Inventory_eventAdd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_Add_Statics::NewProp_amount = { UE4CodeGen_Private::EPropertyClass::Int, "amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Inventory_eventAdd_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_Add_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Object, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Inventory_eventAdd_Parms, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_Add_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_Add_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_Add_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_Add_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_amount", "1" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, "Add", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Inventory_eventAdd_Parms), Z_Construct_UFunction_UInventory_Add_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_Add_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_Add_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItems_Statics
	{
		struct Inventory_eventGetItems_Parms
		{
			UItemCategory* category;
			TArray<UItem*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItems_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Inventory_eventGetItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_GetItems_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_GetItems_Statics::NewProp_category = { UE4CodeGen_Private::EPropertyClass::Object, "category", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Inventory_eventGetItems_Parms, category), Z_Construct_UClass_UItemCategory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItems_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItems_Statics::NewProp_category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, "GetItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Inventory_eventGetItems_Parms), Z_Construct_UFunction_UInventory_GetItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetQuantity_Statics
	{
		struct Inventory_eventGetQuantity_Parms
		{
			UItem* item;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_GetQuantity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Inventory_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_GetQuantity_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Object, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Inventory_eventGetQuantity_Parms, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetQuantity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetQuantity_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, "GetQuantity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Inventory_eventGetQuantity_Parms), Z_Construct_UFunction_UInventory_GetQuantity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetQuantity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetQuantity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_Subtract_Statics
	{
		struct Inventory_eventSubtract_Parms
		{
			UItem* item;
			int32 amount;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_Subtract_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Inventory_eventSubtract_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_Subtract_Statics::NewProp_amount = { UE4CodeGen_Private::EPropertyClass::Int, "amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Inventory_eventSubtract_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_Subtract_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Object, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Inventory_eventSubtract_Parms, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_Subtract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_Subtract_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_Subtract_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_Subtract_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_Subtract_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_amount", "1" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_Subtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, "Subtract", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Inventory_eventSubtract_Parms), Z_Construct_UFunction_UInventory_Subtract_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventory_Subtract_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_Subtract_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_Subtract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_Subtract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_Subtract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventory_NoRegister()
	{
		return UInventory::StaticClass();
	}
	struct Z_Construct_UClass_UInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_slots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_slots_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_Add, "Add" }, // 3465148336
		{ &Z_Construct_UFunction_UInventory_GetItems, "GetItems" }, // 3694648062
		{ &Z_Construct_UFunction_UInventory_GetQuantity, "GetQuantity" }, // 1725650302
		{ &Z_Construct_UFunction_UInventory_Subtract, "Subtract" }, // 1563127431
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_slots_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Core/Item/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_slots = { UE4CodeGen_Private::EPropertyClass::Array, "slots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UInventory, slots), METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_slots_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_slots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_slots_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "slots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_slots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_slots_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
		&UInventory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UInventory, 639053570);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventory(Z_Construct_UClass_UInventory, &UInventory::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
