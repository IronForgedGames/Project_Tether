// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Components/Stats/StatComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatComponent() {}
// Cross Module References
	PROJECT_TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FStat();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UStatType_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UStatComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UStatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStatComponent_GetMaxValue();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStatComponent_GetMinValue();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStatComponent_GetStat();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStatComponent_GetValue();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStatComponent_ResetAll();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStatComponent_ResetValue();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStatComponent_SetMaxValue();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStatComponent_SetMinValue();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStatComponent_SetToMin();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStatComponent_SetValue();
// End Cross Module References
class UScriptStruct* FStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECT_TETHER_API uint32 Get_Z_Construct_UScriptStruct_FStat_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStat, Z_Construct_UPackage__Script_Project_Tether(), TEXT("Stat"), sizeof(FStat), Get_Z_Construct_UScriptStruct_FStat_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStat(FStat::StaticStruct, TEXT("/Script/Project_Tether"), TEXT("Stat"), false, nullptr, nullptr);
static struct FScriptStruct_Project_Tether_StaticRegisterNativesFStat
{
	FScriptStruct_Project_Tether_StaticRegisterNativesFStat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Stat")),new UScriptStruct::TCppStructOps<FStat>);
	}
} ScriptStruct_Project_Tether_StaticRegisterNativesFStat;
	struct Z_Construct_UScriptStruct_FStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_statType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStat_Statics::NewProp_currentAmount_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStat_Statics::NewProp_currentAmount = { UE4CodeGen_Private::EPropertyClass::Float, "currentAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStat, currentAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FStat_Statics::NewProp_currentAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStat_Statics::NewProp_currentAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStat_Statics::NewProp_maxAmount_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStat_Statics::NewProp_maxAmount = { UE4CodeGen_Private::EPropertyClass::Float, "maxAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStat, maxAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FStat_Statics::NewProp_maxAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStat_Statics::NewProp_maxAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStat_Statics::NewProp_minAmount_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStat_Statics::NewProp_minAmount = { UE4CodeGen_Private::EPropertyClass::Float, "minAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStat, minAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FStat_Statics::NewProp_minAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStat_Statics::NewProp_minAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStat_Statics::NewProp_statType_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStat_Statics::NewProp_statType = { UE4CodeGen_Private::EPropertyClass::Class, "statType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(FStat, statType), Z_Construct_UClass_UStatType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FStat_Statics::NewProp_statType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStat_Statics::NewProp_statType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStat_Statics::NewProp_currentAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStat_Statics::NewProp_maxAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStat_Statics::NewProp_minAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStat_Statics::NewProp_statType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
		nullptr,
		&NewStructOps,
		"Stat",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FStat),
		alignof(FStat),
		Z_Construct_UScriptStruct_FStat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStat_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStat_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStat_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Stat"), sizeof(FStat), Get_Z_Construct_UScriptStruct_FStat_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStat_CRC() { return 2646629338U; }
	void UStatComponent::StaticRegisterNativesUStatComponent()
	{
		UClass* Class = UStatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxValue", &UStatComponent::execGetMaxValue },
			{ "GetMinValue", &UStatComponent::execGetMinValue },
			{ "GetStat", &UStatComponent::execGetStat },
			{ "GetValue", &UStatComponent::execGetValue },
			{ "ResetAll", &UStatComponent::execResetAll },
			{ "ResetValue", &UStatComponent::execResetValue },
			{ "SetMaxValue", &UStatComponent::execSetMaxValue },
			{ "SetMinValue", &UStatComponent::execSetMinValue },
			{ "SetToMin", &UStatComponent::execSetToMin },
			{ "SetValue", &UStatComponent::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics
	{
		struct StatComponent_eventGetMaxValue_Parms
		{
			TSubclassOf<UStatType>  type;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StatComponent_eventGetMaxValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(StatComponent_eventGetMaxValue_Parms, type), Z_Construct_UClass_UStatType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatComponent, "GetMaxValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StatComponent_eventGetMaxValue_Parms), Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatComponent_GetMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatComponent_GetMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatComponent_GetMinValue_Statics
	{
		struct StatComponent_eventGetMinValue_Parms
		{
			TSubclassOf<UStatType>  type;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_GetMinValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StatComponent_eventGetMinValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStatComponent_GetMinValue_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(StatComponent_eventGetMinValue_Parms, type), Z_Construct_UClass_UStatType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_GetMinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetMinValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetMinValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatComponent_GetMinValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_GetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatComponent, "GetMinValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StatComponent_eventGetMinValue_Parms), Z_Construct_UFunction_UStatComponent_GetMinValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetMinValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatComponent_GetMinValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatComponent_GetMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatComponent_GetMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatComponent_GetStat_Statics
	{
		struct StatComponent_eventGetStat_Parms
		{
			TSubclassOf<UStatType>  type;
			FStat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StatComponent_eventGetStat_Parms, ReturnValue), Z_Construct_UScriptStruct_FStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(StatComponent_eventGetStat_Parms, type), Z_Construct_UClass_UStatType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_GetStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetStat_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatComponent_GetStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_GetStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatComponent, "GetStat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StatComponent_eventGetStat_Parms), Z_Construct_UFunction_UStatComponent_GetStat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetStat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatComponent_GetStat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatComponent_GetStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatComponent_GetStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatComponent_GetValue_Statics
	{
		struct StatComponent_eventGetValue_Parms
		{
			TSubclassOf<UStatType>  type;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_GetValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StatComponent_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStatComponent_GetValue_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(StatComponent_eventGetValue_Parms, type), Z_Construct_UClass_UStatType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_GetValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatComponent_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatComponent, "GetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StatComponent_eventGetValue_Parms), Z_Construct_UFunction_UStatComponent_GetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatComponent_GetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatComponent_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatComponent_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatComponent_ResetAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatComponent_ResetAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_ResetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatComponent, "ResetAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatComponent_ResetAll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_ResetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatComponent_ResetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatComponent_ResetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatComponent_ResetValue_Statics
	{
		struct StatComponent_eventResetValue_Parms
		{
			TSubclassOf<UStatType>  type;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_ResetValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StatComponent_eventResetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStatComponent_ResetValue_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(StatComponent_eventResetValue_Parms, type), Z_Construct_UClass_UStatType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_ResetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_ResetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_ResetValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatComponent_ResetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_ResetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatComponent, "ResetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StatComponent_eventResetValue_Parms), Z_Construct_UFunction_UStatComponent_ResetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_ResetValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatComponent_ResetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_ResetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatComponent_ResetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatComponent_ResetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics
	{
		struct StatComponent_eventSetMaxValue_Parms
		{
			TSubclassOf<UStatType>  type;
			float value;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StatComponent_eventSetMaxValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatComponent_eventSetMaxValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(StatComponent_eventSetMaxValue_Parms, type), Z_Construct_UClass_UStatType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatComponent, "SetMaxValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StatComponent_eventSetMaxValue_Parms), Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatComponent_SetMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatComponent_SetMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatComponent_SetMinValue_Statics
	{
		struct StatComponent_eventSetMinValue_Parms
		{
			TSubclassOf<UStatType>  type;
			float value;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StatComponent_eventSetMinValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatComponent_eventSetMinValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(StatComponent_eventSetMinValue_Parms, type), Z_Construct_UClass_UStatType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatComponent, "SetMinValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StatComponent_eventSetMinValue_Parms), Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatComponent_SetMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatComponent_SetMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatComponent_SetToMin_Statics
	{
		struct StatComponent_eventSetToMin_Parms
		{
			TSubclassOf<UStatType>  type;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_SetToMin_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StatComponent_eventSetToMin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStatComponent_SetToMin_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(StatComponent_eventSetToMin_Parms, type), Z_Construct_UClass_UStatType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_SetToMin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_SetToMin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_SetToMin_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatComponent_SetToMin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_SetToMin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatComponent, "SetToMin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StatComponent_eventSetToMin_Parms), Z_Construct_UFunction_UStatComponent_SetToMin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_SetToMin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatComponent_SetToMin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_SetToMin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatComponent_SetToMin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatComponent_SetToMin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatComponent_SetValue_Statics
	{
		struct StatComponent_eventSetValue_Parms
		{
			TSubclassOf<UStatType>  type;
			float value;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_SetValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StatComponent_eventSetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_SetValue_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatComponent_eventSetValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStatComponent_SetValue_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(StatComponent_eventSetValue_Parms, type), Z_Construct_UClass_UStatType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_SetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_SetValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_SetValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatComponent_SetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatComponent, "SetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StatComponent_eventSetValue_Parms), Z_Construct_UFunction_UStatComponent_SetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_SetValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatComponent_SetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatComponent_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatComponent_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStatComponent_NoRegister()
	{
		return UStatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_stats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stats_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatComponent_GetMaxValue, "GetMaxValue" }, // 1162109833
		{ &Z_Construct_UFunction_UStatComponent_GetMinValue, "GetMinValue" }, // 2413643383
		{ &Z_Construct_UFunction_UStatComponent_GetStat, "GetStat" }, // 1208102290
		{ &Z_Construct_UFunction_UStatComponent_GetValue, "GetValue" }, // 3941772766
		{ &Z_Construct_UFunction_UStatComponent_ResetAll, "ResetAll" }, // 807572928
		{ &Z_Construct_UFunction_UStatComponent_ResetValue, "ResetValue" }, // 1559366892
		{ &Z_Construct_UFunction_UStatComponent_SetMaxValue, "SetMaxValue" }, // 2102263676
		{ &Z_Construct_UFunction_UStatComponent_SetMinValue, "SetMinValue" }, // 1986609788
		{ &Z_Construct_UFunction_UStatComponent_SetToMin, "SetToMin" }, // 2160278460
		{ &Z_Construct_UFunction_UStatComponent_SetValue, "SetValue" }, // 134064431
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Core/Components/Stats/StatComponent.h" },
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatComponent_Statics::NewProp_stats_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Core/Components/Stats/StatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_stats = { UE4CodeGen_Private::EPropertyClass::Array, "stats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UStatComponent, stats), METADATA_PARAMS(Z_Construct_UClass_UStatComponent_Statics::NewProp_stats_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatComponent_Statics::NewProp_stats_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_stats_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "stats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_stats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_stats_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatComponent_Statics::ClassParams = {
		&UStatComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UStatComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UStatComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStatComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatComponent, 1983221329);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatComponent(Z_Construct_UClass_UStatComponent, &UStatComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UStatComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
