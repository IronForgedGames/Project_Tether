// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Tools/Tool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTool() {}
// Cross Module References
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_FHandedness();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_FArmorSlot();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_FRarity();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_FUsageType();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UTool_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UTool();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UWeaponType_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UPlayerClassType_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* FHandedness_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Project_Tether_FHandedness, Z_Construct_UPackage__Script_Project_Tether(), TEXT("FHandedness"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FHandedness(FHandedness_StaticEnum, TEXT("/Script/Project_Tether"), TEXT("FHandedness"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Project_Tether_FHandedness_CRC() { return 3358736596U; }
	UEnum* Z_Construct_UEnum_Project_Tether_FHandedness()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FHandedness"), 0, Get_Z_Construct_UEnum_Project_Tether_FHandedness_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TwoHanded", (int64)TwoHanded },
				{ "RightHanded", (int64)RightHanded },
				{ "LeftHanded", (int64)LeftHanded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LeftHanded.Display", "LeftHanded" },
				{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
				{ "RightHanded.Display", "RightHanded" },
				{ "TwoHanded.Display", "Two Handed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Project_Tether,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"FHandedness",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"FHandedness",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* FArmorSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Project_Tether_FArmorSlot, Z_Construct_UPackage__Script_Project_Tether(), TEXT("FArmorSlot"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FArmorSlot(FArmorSlot_StaticEnum, TEXT("/Script/Project_Tether"), TEXT("FArmorSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Project_Tether_FArmorSlot_CRC() { return 2320611128U; }
	UEnum* Z_Construct_UEnum_Project_Tether_FArmorSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FArmorSlot"), 0, Get_Z_Construct_UEnum_Project_Tether_FArmorSlot_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
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
				{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
				{ "Torso.DisplayName", "Torso" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Project_Tether,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"FArmorSlot",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"FArmorSlot",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* FRarity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Project_Tether_FRarity, Z_Construct_UPackage__Script_Project_Tether(), TEXT("FRarity"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FRarity(FRarity_StaticEnum, TEXT("/Script/Project_Tether"), TEXT("FRarity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Project_Tether_FRarity_CRC() { return 864459093U; }
	UEnum* Z_Construct_UEnum_Project_Tether_FRarity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FRarity"), 0, Get_Z_Construct_UEnum_Project_Tether_FRarity_CRC(), false);
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
				{ "BlueprintType", "true" },
				{ "Common.DisplayName", "Common" },
				{ "Epic.DisplayName", "Epic" },
				{ "Legendary.DisplayName", "Legendary" },
				{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
				{ "Rare.DisplayName", "Rare" },
				{ "Uncommon.DisplayName", "Uncommon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Project_Tether,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"FRarity",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"FRarity",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* FUsageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Project_Tether_FUsageType, Z_Construct_UPackage__Script_Project_Tether(), TEXT("FUsageType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FUsageType(FUsageType_StaticEnum, TEXT("/Script/Project_Tether"), TEXT("FUsageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Project_Tether_FUsageType_CRC() { return 3563141792U; }
	UEnum* Z_Construct_UEnum_Project_Tether_FUsageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FUsageType"), 0, Get_Z_Construct_UEnum_Project_Tether_FUsageType_CRC(), false);
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
				{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
				{ "Weapon.DisplayName", "Weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Project_Tether,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"FUsageType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"FUsageType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTool::StaticRegisterNativesUTool()
	{
	}
	UClass* Z_Construct_UClass_UTool_NoRegister()
	{
		return UTool::StaticClass();
	}
	struct Z_Construct_UClass_UTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canBeRemoved_MetaData[];
#endif
		static void NewProp_canBeRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canBeRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_armorSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_armorSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handedness_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_handedness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_usageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_usageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_classType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_classType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toolName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_toolName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Tools/Tool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_canBeRemoved_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	void Z_Construct_UClass_UTool_Statics::NewProp_canBeRemoved_SetBit(void* Obj)
	{
		((UTool*)Obj)->canBeRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTool_Statics::NewProp_canBeRemoved = { UE4CodeGen_Private::EPropertyClass::Bool, "canBeRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTool), &Z_Construct_UClass_UTool_Statics::NewProp_canBeRemoved_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_canBeRemoved_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_canBeRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_armorSlot_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTool_Statics::NewProp_armorSlot = { UE4CodeGen_Private::EPropertyClass::Byte, "armorSlot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTool, armorSlot), Z_Construct_UEnum_Project_Tether_FArmorSlot, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_armorSlot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_armorSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_weaponType_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTool_Statics::NewProp_weaponType = { UE4CodeGen_Private::EPropertyClass::Object, "weaponType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTool, weaponType), Z_Construct_UClass_UWeaponType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_weaponType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_weaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_handedness_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTool_Statics::NewProp_handedness = { UE4CodeGen_Private::EPropertyClass::Byte, "handedness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTool, handedness), Z_Construct_UEnum_Project_Tether_FHandedness, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_handedness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_handedness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_usageType_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTool_Statics::NewProp_usageType = { UE4CodeGen_Private::EPropertyClass::Byte, "usageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTool, usageType), Z_Construct_UEnum_Project_Tether_FUsageType, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_usageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_usageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_classType_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTool_Statics::NewProp_classType = { UE4CodeGen_Private::EPropertyClass::Object, "classType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTool, classType), Z_Construct_UClass_UPlayerClassType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_classType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_classType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_item_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTool_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Object, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTool, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_rarity_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTool_Statics::NewProp_rarity = { UE4CodeGen_Private::EPropertyClass::Byte, "rarity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTool, rarity), Z_Construct_UEnum_Project_Tether_FRarity, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_rarity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_toolName_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTool_Statics::NewProp_toolName = { UE4CodeGen_Private::EPropertyClass::Str, "toolName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTool, toolName), METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_toolName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_toolName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTool_Statics::NewProp_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTool, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_canBeRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_armorSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_weaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_handedness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_usageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_classType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_toolName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTool_Statics::ClassParams = {
		&UTool::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UTool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTool, 2435055774);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTool(Z_Construct_UClass_UTool, &UTool::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
