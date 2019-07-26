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
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_ArmorSlot();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_Rarity();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_UsageType();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UTool_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UTool();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UTool_GetAnimAlt_1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UTool_GetAnimAlt_2();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UTool_GetArmorSlot();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UTool_GetItem();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UItem_NoRegister();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UTool_GetName();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UTool_GetRarity();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UTool_GetStandardAnims();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UTool_GetUsage();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UTool_GetWeaponType();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UWeaponType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UClassType_NoRegister();
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
	uint32 Get_Z_Construct_UEnum_Project_Tether_ArmorSlot_CRC() { return 50987999U; }
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
	uint32 Get_Z_Construct_UEnum_Project_Tether_Rarity_CRC() { return 3208106499U; }
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
				{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
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
	uint32 Get_Z_Construct_UEnum_Project_Tether_UsageType_CRC() { return 3420286293U; }
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
				{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
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
	void UTool::StaticRegisterNativesUTool()
	{
		UClass* Class = UTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimAlt_1", &UTool::execGetAnimAlt_1 },
			{ "GetAnimAlt_2", &UTool::execGetAnimAlt_2 },
			{ "GetArmorSlot", &UTool::execGetArmorSlot },
			{ "GetItem", &UTool::execGetItem },
			{ "GetName", &UTool::execGetName },
			{ "GetRarity", &UTool::execGetRarity },
			{ "GetStandardAnims", &UTool::execGetStandardAnims },
			{ "GetUsage", &UTool::execGetUsage },
			{ "GetWeaponType", &UTool::execGetWeaponType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics
	{
		struct Tool_eventGetAnimAlt_1_Parms
		{
			TArray<TSubclassOf<UAnimMontage> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(Tool_eventGetAnimAlt_1_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTool, "GetAnimAlt_1", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Tool_eventGetAnimAlt_1_Parms), Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTool_GetAnimAlt_1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTool_GetAnimAlt_1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics
	{
		struct Tool_eventGetAnimAlt_2_Parms
		{
			TArray<TSubclassOf<UAnimMontage> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(Tool_eventGetAnimAlt_2_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTool, "GetAnimAlt_2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Tool_eventGetAnimAlt_2_Parms), Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTool_GetAnimAlt_2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTool_GetAnimAlt_2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTool_GetArmorSlot_Statics
	{
		struct Tool_eventGetArmorSlot_Parms
		{
			TEnumAsByte<ArmorSlot> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTool_GetArmorSlot_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Tool_eventGetArmorSlot_Parms, ReturnValue), Z_Construct_UEnum_Project_Tether_ArmorSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTool_GetArmorSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTool_GetArmorSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTool_GetArmorSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTool_GetArmorSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTool, "GetArmorSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Tool_eventGetArmorSlot_Parms), Z_Construct_UFunction_UTool_GetArmorSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetArmorSlot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTool_GetArmorSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetArmorSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTool_GetArmorSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTool_GetArmorSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTool_GetItem_Statics
	{
		struct Tool_eventGetItem_Parms
		{
			TSubclassOf<UItem>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTool_GetItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(Tool_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTool_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTool_GetItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTool_GetItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTool_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTool, "GetItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Tool_eventGetItem_Parms), Z_Construct_UFunction_UTool_GetItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTool_GetItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTool_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTool_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTool_GetName_Statics
	{
		struct Tool_eventGetName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTool_GetName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Tool_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTool_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTool_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTool_GetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTool_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTool, "GetName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Tool_eventGetName_Parms), Z_Construct_UFunction_UTool_GetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTool_GetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTool_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTool_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTool_GetRarity_Statics
	{
		struct Tool_eventGetRarity_Parms
		{
			TEnumAsByte<Rarity> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTool_GetRarity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Tool_eventGetRarity_Parms, ReturnValue), Z_Construct_UEnum_Project_Tether_Rarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTool_GetRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTool_GetRarity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTool_GetRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTool_GetRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTool, "GetRarity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Tool_eventGetRarity_Parms), Z_Construct_UFunction_UTool_GetRarity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetRarity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTool_GetRarity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTool_GetRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTool_GetRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTool_GetStandardAnims_Statics
	{
		struct Tool_eventGetStandardAnims_Parms
		{
			TArray<TSubclassOf<UAnimMontage> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTool_GetStandardAnims_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(Tool_eventGetStandardAnims_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTool_GetStandardAnims_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTool_GetStandardAnims_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTool_GetStandardAnims_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTool_GetStandardAnims_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTool_GetStandardAnims_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTool_GetStandardAnims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTool, "GetStandardAnims", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Tool_eventGetStandardAnims_Parms), Z_Construct_UFunction_UTool_GetStandardAnims_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetStandardAnims_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTool_GetStandardAnims_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetStandardAnims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTool_GetStandardAnims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTool_GetStandardAnims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTool_GetUsage_Statics
	{
		struct Tool_eventGetUsage_Parms
		{
			TEnumAsByte<UsageType> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTool_GetUsage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Tool_eventGetUsage_Parms, ReturnValue), Z_Construct_UEnum_Project_Tether_UsageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTool_GetUsage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTool_GetUsage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTool_GetUsage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\nUTool* CreateToolInstance();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTool_GetUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTool, "GetUsage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Tool_eventGetUsage_Parms), Z_Construct_UFunction_UTool_GetUsage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetUsage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTool_GetUsage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetUsage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTool_GetUsage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTool_GetUsage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTool_GetWeaponType_Statics
	{
		struct Tool_eventGetWeaponType_Parms
		{
			TSubclassOf<UWeaponType>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTool_GetWeaponType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(Tool_eventGetWeaponType_Parms, ReturnValue), Z_Construct_UClass_UWeaponType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTool_GetWeaponType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTool_GetWeaponType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTool_GetWeaponType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTool_GetWeaponType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTool, "GetWeaponType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Tool_eventGetWeaponType_Parms), Z_Construct_UFunction_UTool_GetWeaponType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetWeaponType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTool_GetWeaponType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTool_GetWeaponType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTool_GetWeaponType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTool_GetWeaponType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTool_NoRegister()
	{
		return UTool::StaticClass();
	}
	struct Z_Construct_UClass_UTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toolName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_toolName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_armorSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_armorSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_weaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_classType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_classType;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTool_GetAnimAlt_1, "GetAnimAlt_1" }, // 3164884791
		{ &Z_Construct_UFunction_UTool_GetAnimAlt_2, "GetAnimAlt_2" }, // 2003266331
		{ &Z_Construct_UFunction_UTool_GetArmorSlot, "GetArmorSlot" }, // 2865851886
		{ &Z_Construct_UFunction_UTool_GetItem, "GetItem" }, // 1587355548
		{ &Z_Construct_UFunction_UTool_GetName, "GetName" }, // 3311377517
		{ &Z_Construct_UFunction_UTool_GetRarity, "GetRarity" }, // 3243783405
		{ &Z_Construct_UFunction_UTool_GetStandardAnims, "GetStandardAnims" }, // 3345342847
		{ &Z_Construct_UFunction_UTool_GetUsage, "GetUsage" }, // 1834663240
		{ &Z_Construct_UFunction_UTool_GetWeaponType, "GetWeaponType" }, // 79661118
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_toolName_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTool_Statics::NewProp_toolName = { UE4CodeGen_Private::EPropertyClass::Str, "toolName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTool, toolName), METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_toolName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_toolName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTool_Statics::NewProp_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTool, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_armorSlot_MetaData[] = {
		{ "Category", "Armor" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTool_Statics::NewProp_armorSlot = { UE4CodeGen_Private::EPropertyClass::Byte, "armorSlot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UTool, armorSlot), Z_Construct_UEnum_Project_Tether_ArmorSlot, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_armorSlot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_armorSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_weaponType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTool_Statics::NewProp_weaponType = { UE4CodeGen_Private::EPropertyClass::Class, "weaponType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UTool, weaponType), Z_Construct_UClass_UWeaponType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_weaponType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_weaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_classType_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTool_Statics::NewProp_classType = { UE4CodeGen_Private::EPropertyClass::Class, "classType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UTool, classType), Z_Construct_UClass_UClassType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_classType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_classType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_item_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTool_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Class, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UTool, item), Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_rarity_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTool_Statics::NewProp_rarity = { UE4CodeGen_Private::EPropertyClass::Byte, "rarity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UTool, rarity), Z_Construct_UEnum_Project_Tether_Rarity, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_rarity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTool_Statics::NewProp_usageType_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Core/Tools/Tool.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTool_Statics::NewProp_usageType = { UE4CodeGen_Private::EPropertyClass::Byte, "usageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UTool, usageType), Z_Construct_UEnum_Project_Tether_UsageType, METADATA_PARAMS(Z_Construct_UClass_UTool_Statics::NewProp_usageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTool_Statics::NewProp_usageType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_toolName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_armorSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_weaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_classType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTool_Statics::NewProp_usageType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTool_Statics::ClassParams = {
		&UTool::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UTool, 645147444);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTool(Z_Construct_UClass_UTool, &UTool::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
