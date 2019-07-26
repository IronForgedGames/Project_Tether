// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolComponent() {}
// Cross Module References
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_ArmorSlot();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_Rarity();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_UsageType();
	PROJECT_TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FToolData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UWeaponType_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* ArmorSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Project_Tether_ArmorSlot, Z_Construct_UPackage__Script_Project_Tether(), TEXT("ArmorSlot"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ArmorSlot(ArmorSlot_StaticEnum, TEXT("/Script/Project_Tether"), TEXT("ArmorSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Project_Tether_ArmorSlot_CRC() { return 844777877U; }
	UEnum* Z_Construct_UEnum_Project_Tether_ArmorSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ArmorSlot"), 0, Get_Z_Construct_UEnum_Project_Tether_ArmorSlot_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "Head", (int64)Head },
				{ "Torso", (int64)Torso },
				{ "Arms", (int64)Arms },
				{ "Legs", (int64)Legs },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Arms.DisplayName", "Arms" },
				{ "Head.DisplayName", "Head" },
				{ "Legs.DisplayName", "Legs" },
				{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
				{ "None.Display", "None" },
				{ "Torso.DisplayName", "Torso" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Project_Tether,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ArmorSlot",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ArmorSlot",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* Rarity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Project_Tether_Rarity, Z_Construct_UPackage__Script_Project_Tether(), TEXT("Rarity"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Rarity(Rarity_StaticEnum, TEXT("/Script/Project_Tether"), TEXT("Rarity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Project_Tether_Rarity_CRC() { return 2731133607U; }
	UEnum* Z_Construct_UEnum_Project_Tether_Rarity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Rarity"), 0, Get_Z_Construct_UEnum_Project_Tether_Rarity_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Common", (int64)Common },
				{ "Uncommon", (int64)Uncommon },
				{ "Rare", (int64)Rare },
				{ "Legendary", (int64)Legendary },
				{ "Epic", (int64)Epic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Common.DisplayName", "Common" },
				{ "Epic.DisplayName", "Epic" },
				{ "Legendary.DisplayName", "Legendary" },
				{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
				{ "Rare.DisplayName", "Rare" },
				{ "Uncommon.DisplayName", "Uncommon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Project_Tether,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"Rarity",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"Rarity",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* UsageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Project_Tether_UsageType, Z_Construct_UPackage__Script_Project_Tether(), TEXT("UsageType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_UsageType(UsageType_StaticEnum, TEXT("/Script/Project_Tether"), TEXT("UsageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Project_Tether_UsageType_CRC() { return 3784528146U; }
	UEnum* Z_Construct_UEnum_Project_Tether_UsageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("UsageType"), 0, Get_Z_Construct_UEnum_Project_Tether_UsageType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Weapon", (int64)Weapon },
				{ "Armor", (int64)Armor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Armor.DisplayName", "Armor" },
				{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
				{ "Weapon.DisplayName", "Weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Project_Tether,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"UsageType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"UsageType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FToolData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECT_TETHER_API uint32 Get_Z_Construct_UScriptStruct_FToolData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolData, Z_Construct_UPackage__Script_Project_Tether(), TEXT("ToolData"), sizeof(FToolData), Get_Z_Construct_UScriptStruct_FToolData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FToolData(FToolData::StaticStruct, TEXT("/Script/Project_Tether"), TEXT("ToolData"), false, nullptr, nullptr);
static struct FScriptStruct_Project_Tether_StaticRegisterNativesFToolData
{
	FScriptStruct_Project_Tether_StaticRegisterNativesFToolData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ToolData")),new UScriptStruct::TCppStructOps<FToolData>);
	}
} ScriptStruct_Project_Tether_StaticRegisterNativesFToolData;
	struct Z_Construct_UScriptStruct_FToolData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_armorSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_armorSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_weaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_usageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_usageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toolName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_toolName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToolData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolData_Statics::NewProp_armorSlot_MetaData[] = {
		{ "Category", "Armor" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolData_Statics::NewProp_armorSlot = { UE4CodeGen_Private::EPropertyClass::Byte, "armorSlot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FToolData, armorSlot), Z_Construct_UEnum_Project_Tether_ArmorSlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_armorSlot_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_armorSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolData_Statics::NewProp_weaponType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FToolData_Statics::NewProp_weaponType = { UE4CodeGen_Private::EPropertyClass::Class, "weaponType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(FToolData, weaponType), Z_Construct_UClass_UWeaponType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_weaponType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_weaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolData_Statics::NewProp_item_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FToolData_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Class, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(FToolData, item), Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolData_Statics::NewProp_rarity_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolData_Statics::NewProp_rarity = { UE4CodeGen_Private::EPropertyClass::Byte, "rarity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FToolData, rarity), Z_Construct_UEnum_Project_Tether_Rarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_rarity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolData_Statics::NewProp_usageType_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolData_Statics::NewProp_usageType = { UE4CodeGen_Private::EPropertyClass::Byte, "usageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FToolData, usageType), Z_Construct_UEnum_Project_Tether_UsageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_usageType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_usageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolData_Statics::NewProp_toolName_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FToolData_Statics::NewProp_toolName = { UE4CodeGen_Private::EPropertyClass::Str, "toolName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FToolData, toolName), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_toolName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_toolName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolData_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FToolData_Statics::NewProp_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FToolData, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolData_Statics::NewProp_armorSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolData_Statics::NewProp_weaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolData_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolData_Statics::NewProp_rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolData_Statics::NewProp_usageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolData_Statics::NewProp_toolName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolData_Statics::NewProp_mesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
		nullptr,
		&NewStructOps,
		"ToolData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FToolData),
		alignof(FToolData),
		Z_Construct_UScriptStruct_FToolData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToolData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToolData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FToolData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ToolData"), sizeof(FToolData), Get_Z_Construct_UScriptStruct_FToolData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FToolData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FToolData_CRC() { return 1749089647U; }
	void UToolComponent::StaticRegisterNativesUToolComponent()
	{
	}
	UClass* Z_Construct_UClass_UToolComponent_NoRegister()
	{
		return UToolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UToolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_armorDatabase_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_armorDatabase;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_armorDatabase_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_armorDatabase_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponDatabase_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_weaponDatabase;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_weaponDatabase_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_weaponDatabase_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_armorDatabase_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_armorDatabase = { UE4CodeGen_Private::EPropertyClass::Map, "armorDatabase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UToolComponent, armorDatabase), METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_armorDatabase_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_armorDatabase_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_armorDatabase_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "armorDatabase_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_armorDatabase_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "armorDatabase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponDatabase_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponDatabase = { UE4CodeGen_Private::EPropertyClass::Map, "weaponDatabase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UToolComponent, weaponDatabase), METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponDatabase_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponDatabase_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponDatabase_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "weaponDatabase_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponDatabase_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "weaponDatabase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_armorDatabase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_armorDatabase_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_armorDatabase_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponDatabase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponDatabase_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponDatabase_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToolComponent_Statics::ClassParams = {
		&UToolComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UToolComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToolComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToolComponent, 138503507);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToolComponent(Z_Construct_UClass_UToolComponent, &UToolComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UToolComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
