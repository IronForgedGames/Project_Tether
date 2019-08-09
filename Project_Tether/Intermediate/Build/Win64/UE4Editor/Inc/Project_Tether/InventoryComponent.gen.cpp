// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Item/InventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UInventoryComponent_Add();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UItem_NoRegister();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UInventoryComponent_GetInventory();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UInventoryComponent_GetItems();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UItemCategory_NoRegister();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UInventoryComponent_GetQuantity();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UInventoryComponent_Subtract();
	PROJECT_TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FSlot();
// End Cross Module References
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &UInventoryComponent::execAdd },
			{ "GetInventory", &UInventoryComponent::execGetInventory },
			{ "GetItems", &UInventoryComponent::execGetItems },
			{ "GetQuantity", &UInventoryComponent::execGetQuantity },
			{ "Subtract", &UInventoryComponent::execSubtract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_Add_Statics
	{
		struct InventoryComponent_eventAdd_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_Add_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InventoryComponent_eventAdd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_Add_Statics::NewProp_amount = { UE4CodeGen_Private::EPropertyClass::Int, "amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InventoryComponent_eventAdd_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Add_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Object, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InventoryComponent_eventAdd_Parms, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Add_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Add_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Add_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_Add_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_amount", "1" },
		{ "ModuleRelativePath", "Public/Core/Item/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, "Add", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InventoryComponent_eventAdd_Parms), Z_Construct_UFunction_UInventoryComponent_Add_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Add_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_Add_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics
	{
		struct InventoryComponent_eventGetInventory_Parms
		{
			UInventory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetInventory_Parms, ReturnValue), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Item/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, "GetInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InventoryComponent_eventGetInventory_Parms), Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetItems_Statics
	{
		struct InventoryComponent_eventGetItems_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_category = { UE4CodeGen_Private::EPropertyClass::Object, "category", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetItems_Parms, category), Z_Construct_UClass_UItemCategory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Item/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, "GetItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InventoryComponent_eventGetItems_Parms), Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics
	{
		struct InventoryComponent_eventGetQuantity_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Object, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetQuantity_Parms, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Item/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, "GetQuantity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InventoryComponent_eventGetQuantity_Parms), Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_Subtract_Statics
	{
		struct InventoryComponent_eventSubtract_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InventoryComponent_eventSubtract_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::NewProp_amount = { UE4CodeGen_Private::EPropertyClass::Int, "amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InventoryComponent_eventSubtract_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Object, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InventoryComponent_eventSubtract_Parms, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_amount", "1" },
		{ "ModuleRelativePath", "Public/Core/Item/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, "Subtract", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InventoryComponent_eventSubtract_Parms), Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_Subtract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Subtract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
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
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_Add, "Add" }, // 4251962447
		{ &Z_Construct_UFunction_UInventoryComponent_GetInventory, "GetInventory" }, // 2419634338
		{ &Z_Construct_UFunction_UInventoryComponent_GetItems, "GetItems" }, // 634473033
		{ &Z_Construct_UFunction_UInventoryComponent_GetQuantity, "GetQuantity" }, // 586204639
		{ &Z_Construct_UFunction_UInventoryComponent_Subtract, "Subtract" }, // 167852969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Core/Item/InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Core/Item/InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_slots_MetaData[] = {
		{ "Category", "InventoryComponent" },
		{ "ModuleRelativePath", "Public/Core/Item/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_slots = { UE4CodeGen_Private::EPropertyClass::Array, "slots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UInventoryComponent, slots), METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_slots_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_slots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_slots_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "slots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_slots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_slots_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryComponent, 3626894654);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryComponent(Z_Construct_UClass_UInventoryComponent, &UInventoryComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UInventoryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
