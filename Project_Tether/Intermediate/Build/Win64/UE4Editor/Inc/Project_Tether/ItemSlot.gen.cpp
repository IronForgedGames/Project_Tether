// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Item/ItemSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemSlot() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UItemSlot_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UItemSlot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UItem_NoRegister();
// End Cross Module References
	void UItemSlot::StaticRegisterNativesUItemSlot()
	{
	}
	UClass* Z_Construct_UClass_UItemSlot_NoRegister()
	{
		return UItemSlot::StaticClass();
	}
	struct Z_Construct_UClass_UItemSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Item/ItemSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Item/ItemSlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemSlot_Statics::NewProp_quantity_MetaData[] = {
		{ "Category", "ItemSlot" },
		{ "ModuleRelativePath", "Public/Core/Item/ItemSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UItemSlot_Statics::NewProp_quantity = { UE4CodeGen_Private::EPropertyClass::Int, "quantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UItemSlot, quantity), METADATA_PARAMS(Z_Construct_UClass_UItemSlot_Statics::NewProp_quantity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UItemSlot_Statics::NewProp_quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemSlot_Statics::NewProp_item_MetaData[] = {
		{ "Category", "ItemSlot" },
		{ "ModuleRelativePath", "Public/Core/Item/ItemSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemSlot_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Class, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000004, 1, nullptr, STRUCT_OFFSET(UItemSlot, item), Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UItemSlot_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UClass_UItemSlot_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlot_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlot_Statics::NewProp_item,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemSlot_Statics::ClassParams = {
		&UItemSlot::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A0u,
		nullptr, 0,
		Z_Construct_UClass_UItemSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UItemSlot_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UItemSlot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UItemSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemSlot, 2336483292);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemSlot(Z_Construct_UClass_UItemSlot, &UItemSlot::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UItemSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
