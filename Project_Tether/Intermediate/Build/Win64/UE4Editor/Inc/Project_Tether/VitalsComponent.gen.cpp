// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Components/VitalsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVitalsComponent() {}
// Cross Module References
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_Status();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FResistanceModifier();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UE_DamageType_NoRegister();
	PROJECT_TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FHealInfo();
	PROJECT_TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FDamageInfo();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UVitalsComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UVitalsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UVitalsComponent_DealDamage();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UVitalsComponent_GetHealth();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UVitalsComponent_Heal();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UVitalsComponent_HealAll();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UVitalsComponent_KillImmediately();
// End Cross Module References
	static UEnum* Status_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Project_Tether_Status, Z_Construct_UPackage__Script_Project_Tether(), TEXT("Status"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Status(Status_StaticEnum, TEXT("/Script/Project_Tether"), TEXT("Status"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Project_Tether_Status_CRC() { return 3420555065U; }
	UEnum* Z_Construct_UEnum_Project_Tether_Status()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Status"), 0, Get_Z_Construct_UEnum_Project_Tether_Status_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Alive", (int64)Alive },
				{ "Dead", (int64)Dead },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alive.DisplayName", "Alive" },
				{ "Dead.DisplayName", "Dead" },
				{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Project_Tether,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"Status",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"Status",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FResistanceModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECT_TETHER_API uint32 Get_Z_Construct_UScriptStruct_FResistanceModifier_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResistanceModifier, Z_Construct_UPackage__Script_Project_Tether(), TEXT("ResistanceModifier"), sizeof(FResistanceModifier), Get_Z_Construct_UScriptStruct_FResistanceModifier_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResistanceModifier(FResistanceModifier::StaticStruct, TEXT("/Script/Project_Tether"), TEXT("ResistanceModifier"), false, nullptr, nullptr);
static struct FScriptStruct_Project_Tether_StaticRegisterNativesFResistanceModifier
{
	FScriptStruct_Project_Tether_StaticRegisterNativesFResistanceModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ResistanceModifier")),new UScriptStruct::TCppStructOps<FResistanceModifier>);
	}
} ScriptStruct_Project_Tether_StaticRegisterNativesFResistanceModifier;
	struct Z_Construct_UScriptStruct_FResistanceModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResistanceModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResistanceModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResistanceModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResistanceModifier_Statics::NewProp_multiplier_MetaData[] = {
		{ "Category", "Resistance" },
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResistanceModifier_Statics::NewProp_multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "multiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FResistanceModifier, multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FResistanceModifier_Statics::NewProp_multiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResistanceModifier_Statics::NewProp_multiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResistanceModifier_Statics::NewProp_damageType_MetaData[] = {
		{ "Category", "Resistance" },
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FResistanceModifier_Statics::NewProp_damageType = { UE4CodeGen_Private::EPropertyClass::Object, "damageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FResistanceModifier, damageType), Z_Construct_UClass_UE_DamageType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FResistanceModifier_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResistanceModifier_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResistanceModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResistanceModifier_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResistanceModifier_Statics::NewProp_damageType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResistanceModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
		nullptr,
		&NewStructOps,
		"ResistanceModifier",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FResistanceModifier),
		alignof(FResistanceModifier),
		Z_Construct_UScriptStruct_FResistanceModifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FResistanceModifier_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResistanceModifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FResistanceModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResistanceModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResistanceModifier_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResistanceModifier"), sizeof(FResistanceModifier), Get_Z_Construct_UScriptStruct_FResistanceModifier_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResistanceModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResistanceModifier_CRC() { return 3166665320U; }
class UScriptStruct* FHealInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECT_TETHER_API uint32 Get_Z_Construct_UScriptStruct_FHealInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHealInfo, Z_Construct_UPackage__Script_Project_Tether(), TEXT("HealInfo"), sizeof(FHealInfo), Get_Z_Construct_UScriptStruct_FHealInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHealInfo(FHealInfo::StaticStruct, TEXT("/Script/Project_Tether"), TEXT("HealInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Project_Tether_StaticRegisterNativesFHealInfo
{
	FScriptStruct_Project_Tether_StaticRegisterNativesFHealInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HealInfo")),new UScriptStruct::TCppStructOps<FHealInfo>);
	}
} ScriptStruct_Project_Tether_StaticRegisterNativesFHealInfo;
	struct Z_Construct_UScriptStruct_FHealInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHealInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHealInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHealInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
		nullptr,
		&NewStructOps,
		"HealInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FHealInfo),
		alignof(FHealInfo),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHealInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHealInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHealInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHealInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HealInfo"), sizeof(FHealInfo), Get_Z_Construct_UScriptStruct_FHealInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHealInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHealInfo_CRC() { return 2273387680U; }
class UScriptStruct* FDamageInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECT_TETHER_API uint32 Get_Z_Construct_UScriptStruct_FDamageInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageInfo, Z_Construct_UPackage__Script_Project_Tether(), TEXT("DamageInfo"), sizeof(FDamageInfo), Get_Z_Construct_UScriptStruct_FDamageInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDamageInfo(FDamageInfo::StaticStruct, TEXT("/Script/Project_Tether"), TEXT("DamageInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Project_Tether_StaticRegisterNativesFDamageInfo
{
	FScriptStruct_Project_Tether_StaticRegisterNativesFDamageInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DamageInfo")),new UScriptStruct::TCppStructOps<FDamageInfo>);
	}
} ScriptStruct_Project_Tether_StaticRegisterNativesFDamageInfo;
	struct Z_Construct_UScriptStruct_FDamageInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDamageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
		nullptr,
		&NewStructOps,
		"DamageInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FDamageInfo),
		alignof(FDamageInfo),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDamageInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDamageInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DamageInfo"), sizeof(FDamageInfo), Get_Z_Construct_UScriptStruct_FDamageInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDamageInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDamageInfo_CRC() { return 2749624473U; }
	void UVitalsComponent::StaticRegisterNativesUVitalsComponent()
	{
		UClass* Class = UVitalsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DealDamage", &UVitalsComponent::execDealDamage },
			{ "GetHealth", &UVitalsComponent::execGetHealth },
			{ "Heal", &UVitalsComponent::execHeal },
			{ "HealAll", &UVitalsComponent::execHealAll },
			{ "KillImmediately", &UVitalsComponent::execKillImmediately },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics
	{
		struct VitalsComponent_eventDealDamage_Parms
		{
			FDamageInfo damageInfo;
			bool shouldDot;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_shouldDot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldDot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_damageInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VitalsComponent_eventDealDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VitalsComponent_eventDealDamage_Parms), &Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::NewProp_shouldDot_SetBit(void* Obj)
	{
		((VitalsComponent_eventDealDamage_Parms*)Obj)->shouldDot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::NewProp_shouldDot = { UE4CodeGen_Private::EPropertyClass::Bool, "shouldDot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VitalsComponent_eventDealDamage_Parms), &Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::NewProp_shouldDot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::NewProp_damageInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "damageInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VitalsComponent_eventDealDamage_Parms, damageInfo), Z_Construct_UScriptStruct_FDamageInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::NewProp_shouldDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::NewProp_damageInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_shouldDot", "true" },
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalsComponent, "DealDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VitalsComponent_eventDealDamage_Parms), Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVitalsComponent_DealDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVitalsComponent_DealDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalsComponent_GetHealth_Statics
	{
		struct VitalsComponent_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVitalsComponent_GetHealth_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VitalsComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalsComponent_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalsComponent_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalsComponent_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalsComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalsComponent, "GetHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VitalsComponent_eventGetHealth_Parms), Z_Construct_UFunction_UVitalsComponent_GetHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVitalsComponent_GetHealth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVitalsComponent_GetHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVitalsComponent_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVitalsComponent_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVitalsComponent_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalsComponent_Heal_Statics
	{
		struct VitalsComponent_eventHeal_Parms
		{
			FHealInfo info;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_info;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVitalsComponent_Heal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VitalsComponent_eventHeal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitalsComponent_Heal_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VitalsComponent_eventHeal_Parms), &Z_Construct_UFunction_UVitalsComponent_Heal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitalsComponent_Heal_Statics::NewProp_info = { UE4CodeGen_Private::EPropertyClass::Struct, "info", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VitalsComponent_eventHeal_Parms, info), Z_Construct_UScriptStruct_FHealInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalsComponent_Heal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalsComponent_Heal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalsComponent_Heal_Statics::NewProp_info,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalsComponent_Heal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalsComponent_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalsComponent, "Heal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VitalsComponent_eventHeal_Parms), Z_Construct_UFunction_UVitalsComponent_Heal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVitalsComponent_Heal_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVitalsComponent_Heal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVitalsComponent_Heal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVitalsComponent_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVitalsComponent_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalsComponent_HealAll_Statics
	{
		struct VitalsComponent_eventHealAll_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVitalsComponent_HealAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VitalsComponent_eventHealAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitalsComponent_HealAll_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VitalsComponent_eventHealAll_Parms), &Z_Construct_UFunction_UVitalsComponent_HealAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalsComponent_HealAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalsComponent_HealAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalsComponent_HealAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalsComponent_HealAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalsComponent, "HealAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VitalsComponent_eventHealAll_Parms), Z_Construct_UFunction_UVitalsComponent_HealAll_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVitalsComponent_HealAll_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVitalsComponent_HealAll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVitalsComponent_HealAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVitalsComponent_HealAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVitalsComponent_HealAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics
	{
		struct VitalsComponent_eventKillImmediately_Parms
		{
			FDamageInfo damageInfo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_damageInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VitalsComponent_eventKillImmediately_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VitalsComponent_eventKillImmediately_Parms), &Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::NewProp_damageInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "damageInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VitalsComponent_eventKillImmediately_Parms, damageInfo), Z_Construct_UScriptStruct_FDamageInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::NewProp_damageInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVitalsComponent, "KillImmediately", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VitalsComponent_eventKillImmediately_Parms), Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVitalsComponent_KillImmediately()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVitalsComponent_KillImmediately_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVitalsComponent_NoRegister()
	{
		return UVitalsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVitalsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resistanceModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_resistanceModifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_resistanceModifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVitalsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVitalsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVitalsComponent_DealDamage, "DealDamage" }, // 98246344
		{ &Z_Construct_UFunction_UVitalsComponent_GetHealth, "GetHealth" }, // 3101722339
		{ &Z_Construct_UFunction_UVitalsComponent_Heal, "Heal" }, // 1007949346
		{ &Z_Construct_UFunction_UVitalsComponent_HealAll, "HealAll" }, // 2056964407
		{ &Z_Construct_UFunction_UVitalsComponent_KillImmediately, "KillImmediately" }, // 3579657607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Core/Components/VitalsComponent.h" },
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalsComponent_Statics::NewProp_resistanceModifiers_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVitalsComponent_Statics::NewProp_resistanceModifiers = { UE4CodeGen_Private::EPropertyClass::Array, "resistanceModifiers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UVitalsComponent, resistanceModifiers), METADATA_PARAMS(Z_Construct_UClass_UVitalsComponent_Statics::NewProp_resistanceModifiers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVitalsComponent_Statics::NewProp_resistanceModifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVitalsComponent_Statics::NewProp_resistanceModifiers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "resistanceModifiers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FResistanceModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVitalsComponent_Statics::NewProp_status_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Public/Core/Components/VitalsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVitalsComponent_Statics::NewProp_status = { UE4CodeGen_Private::EPropertyClass::Byte, "status", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UVitalsComponent, status), Z_Construct_UEnum_Project_Tether_Status, METADATA_PARAMS(Z_Construct_UClass_UVitalsComponent_Statics::NewProp_status_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVitalsComponent_Statics::NewProp_status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVitalsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalsComponent_Statics::NewProp_resistanceModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalsComponent_Statics::NewProp_resistanceModifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalsComponent_Statics::NewProp_status,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVitalsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVitalsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVitalsComponent_Statics::ClassParams = {
		&UVitalsComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UVitalsComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVitalsComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVitalsComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVitalsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVitalsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVitalsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVitalsComponent, 4235827863);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVitalsComponent(Z_Construct_UClass_UVitalsComponent, &UVitalsComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UVitalsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVitalsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
