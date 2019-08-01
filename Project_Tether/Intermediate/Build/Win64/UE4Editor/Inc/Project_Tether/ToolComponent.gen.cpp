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
	PROJECT_TETHER_API UFunction* Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FToolData();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UTool_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_AddTool();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_CreateToolInstance();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_EquipArmor();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_EquipDefaultArmor();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_EquipWeapon();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_RemoveTool();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_SwapArmor();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_FArmorSlot();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_SwapWeapons();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_FHandedness();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_UnequipArmor();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_UnequipWeapon();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UPlayerClassType_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics
	{
		struct _Script_Project_Tether_eventToolEventSigniture_Parms
		{
			FToolData tool;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics::NewProp_tool = { UE4CodeGen_Private::EPropertyClass::Struct, "tool", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Project_Tether_eventToolEventSigniture_Parms, tool), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics::NewProp_tool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Project_Tether, "ToolEventSigniture__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Project_Tether_eventToolEventSigniture_Parms), Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_power_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_power;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toolBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_toolBase;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolData_Statics::NewProp_power_MetaData[] = {
		{ "Category", "ToolData" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToolData_Statics::NewProp_power = { UE4CodeGen_Private::EPropertyClass::Float, "power", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FToolData, power), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_power_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_power_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolData_Statics::NewProp_toolBase_MetaData[] = {
		{ "Category", "ToolData" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FToolData_Statics::NewProp_toolBase = { UE4CodeGen_Private::EPropertyClass::Object, "toolBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FToolData, toolBase), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_toolBase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolData_Statics::NewProp_toolBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolData_Statics::NewProp_power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolData_Statics::NewProp_toolBase,
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
	uint32 Get_Z_Construct_UScriptStruct_FToolData_CRC() { return 3481176607U; }
	void UToolComponent::StaticRegisterNativesUToolComponent()
	{
		UClass* Class = UToolComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTool", &UToolComponent::execAddTool },
			{ "CreateToolInstance", &UToolComponent::execCreateToolInstance },
			{ "EquipArmor", &UToolComponent::execEquipArmor },
			{ "EquipDefaultArmor", &UToolComponent::execEquipDefaultArmor },
			{ "EquipDefaultWeapon", &UToolComponent::execEquipDefaultWeapon },
			{ "EquipWeapon", &UToolComponent::execEquipWeapon },
			{ "RemoveTool", &UToolComponent::execRemoveTool },
			{ "SwapArmor", &UToolComponent::execSwapArmor },
			{ "SwapWeapons", &UToolComponent::execSwapWeapons },
			{ "UnequipArmor", &UToolComponent::execUnequipArmor },
			{ "UnequipWeapon", &UToolComponent::execUnequipWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToolComponent_AddTool_Statics
	{
		struct ToolComponent_eventAddTool_Parms
		{
			FToolData newTool;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newTool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UToolComponent_AddTool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ToolComponent_eventAddTool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolComponent_AddTool_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ToolComponent_eventAddTool_Parms), &Z_Construct_UFunction_UToolComponent_AddTool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_AddTool_Statics::NewProp_newTool = { UE4CodeGen_Private::EPropertyClass::Struct, "newTool", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventAddTool_Parms, newTool), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_AddTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_AddTool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_AddTool_Statics::NewProp_newTool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_AddTool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_AddTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "AddTool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventAddTool_Parms), Z_Construct_UFunction_UToolComponent_AddTool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_AddTool_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_AddTool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_AddTool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_AddTool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_AddTool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics
	{
		struct ToolComponent_eventCreateToolInstance_Parms
		{
			UTool* toolBase;
			FToolData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_toolBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventCreateToolInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::NewProp_toolBase = { UE4CodeGen_Private::EPropertyClass::Object, "toolBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventCreateToolInstance_Parms, toolBase), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::NewProp_toolBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "CreateToolInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventCreateToolInstance_Parms), Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_CreateToolInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolComponent_EquipArmor_Statics
	{
		struct ToolComponent_eventEquipArmor_Parms
		{
			FToolData armor;
			FToolData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_armor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventEquipArmor_Parms, ReturnValue), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::NewProp_armor = { UE4CodeGen_Private::EPropertyClass::Struct, "armor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventEquipArmor_Parms, armor), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::NewProp_armor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "EquipArmor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventEquipArmor_Parms), Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_EquipArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolComponent_EquipDefaultArmor_Statics
	{
		struct ToolComponent_eventEquipDefaultArmor_Parms
		{
			FToolData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_EquipDefaultArmor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventEquipDefaultArmor_Parms, ReturnValue), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_EquipDefaultArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_EquipDefaultArmor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_EquipDefaultArmor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_EquipDefaultArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "EquipDefaultArmor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventEquipDefaultArmor_Parms), Z_Construct_UFunction_UToolComponent_EquipDefaultArmor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_EquipDefaultArmor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_EquipDefaultArmor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_EquipDefaultArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_EquipDefaultArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_EquipDefaultArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon_Statics
	{
		struct ToolComponent_eventEquipDefaultWeapon_Parms
		{
			FToolData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventEquipDefaultWeapon_Parms, ReturnValue), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "EquipDefaultWeapon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventEquipDefaultWeapon_Parms), Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics
	{
		struct ToolComponent_eventEquipWeapon_Parms
		{
			FToolData weapon;
			FToolData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventEquipWeapon_Parms, ReturnValue), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::NewProp_weapon = { UE4CodeGen_Private::EPropertyClass::Struct, "weapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventEquipWeapon_Parms, weapon), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::NewProp_weapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "EquipWeapon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventEquipWeapon_Parms), Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_EquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolComponent_RemoveTool_Statics
	{
		struct ToolComponent_eventRemoveTool_Parms
		{
			FToolData toolToRemove;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_toolToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ToolComponent_eventRemoveTool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ToolComponent_eventRemoveTool_Parms), &Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::NewProp_toolToRemove = { UE4CodeGen_Private::EPropertyClass::Struct, "toolToRemove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventRemoveTool_Parms, toolToRemove), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::NewProp_toolToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "RemoveTool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventRemoveTool_Parms), Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_RemoveTool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolComponent_SwapArmor_Statics
	{
		struct ToolComponent_eventSwapArmor_Parms
		{
			int32 direction;
			TEnumAsByte<FArmorSlot> slot;
			FToolData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventSwapArmor_Parms, ReturnValue), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::NewProp_slot = { UE4CodeGen_Private::EPropertyClass::Byte, "slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventSwapArmor_Parms, slot), Z_Construct_UEnum_Project_Tether_FArmorSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::NewProp_direction = { UE4CodeGen_Private::EPropertyClass::Int, "direction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventSwapArmor_Parms, direction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
		{ "ToolTip", "direction is up or down by 1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "SwapArmor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventSwapArmor_Parms), Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_SwapArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics
	{
		struct ToolComponent_eventSwapWeapons_Parms
		{
			int32 direction;
			TEnumAsByte<FHandedness> hand;
			FToolData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_hand;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventSwapWeapons_Parms, ReturnValue), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::NewProp_hand = { UE4CodeGen_Private::EPropertyClass::Byte, "hand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventSwapWeapons_Parms, hand), Z_Construct_UEnum_Project_Tether_FHandedness, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::NewProp_direction = { UE4CodeGen_Private::EPropertyClass::Int, "direction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventSwapWeapons_Parms, direction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::NewProp_hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "SwapWeapons", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventSwapWeapons_Parms), Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_SwapWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics
	{
		struct ToolComponent_eventUnequipArmor_Parms
		{
			FToolData armor;
			FToolData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_armor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventUnequipArmor_Parms, ReturnValue), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::NewProp_armor = { UE4CodeGen_Private::EPropertyClass::Struct, "armor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventUnequipArmor_Parms, armor), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::NewProp_armor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "UnequipArmor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventUnequipArmor_Parms), Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_UnequipArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics
	{
		struct ToolComponent_eventUnequipWeapon_Parms
		{
			FToolData weapon;
			FToolData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventUnequipWeapon_Parms, ReturnValue), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::NewProp_weapon = { UE4CodeGen_Private::EPropertyClass::Struct, "weapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventUnequipWeapon_Parms, weapon), Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::NewProp_weapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolComponent, "UnequipWeapon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolComponent_eventUnequipWeapon_Parms), Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolComponent_UnequipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UToolComponent_NoRegister()
	{
		return UToolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UToolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_weapons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_weapons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_armorUeqipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_armorUeqipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_armorEqipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_armorEqipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponUeqipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_weaponUeqipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponEqipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_weaponEqipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toolRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_toolRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toolAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_toolAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_maxSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_maxSize_Key_KeyProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxSize_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponInventoryMaxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_weaponInventoryMaxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_defaultArmor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_defaultArmor_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_defaultArmor_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultWeapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_defaultWeapons;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_defaultWeapons_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_defaultWeapons_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_classType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_classType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToolComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolComponent_AddTool, "AddTool" }, // 1210612913
		{ &Z_Construct_UFunction_UToolComponent_CreateToolInstance, "CreateToolInstance" }, // 1567834496
		{ &Z_Construct_UFunction_UToolComponent_EquipArmor, "EquipArmor" }, // 3693782157
		{ &Z_Construct_UFunction_UToolComponent_EquipDefaultArmor, "EquipDefaultArmor" }, // 1334423276
		{ &Z_Construct_UFunction_UToolComponent_EquipDefaultWeapon, "EquipDefaultWeapon" }, // 119957393
		{ &Z_Construct_UFunction_UToolComponent_EquipWeapon, "EquipWeapon" }, // 3996227483
		{ &Z_Construct_UFunction_UToolComponent_RemoveTool, "RemoveTool" }, // 3453642121
		{ &Z_Construct_UFunction_UToolComponent_SwapArmor, "SwapArmor" }, // 2466180671
		{ &Z_Construct_UFunction_UToolComponent_SwapWeapons, "SwapWeapons" }, // 2384822436
		{ &Z_Construct_UFunction_UToolComponent_UnequipArmor, "UnequipArmor" }, // 2182813053
		{ &Z_Construct_UFunction_UToolComponent_UnequipWeapon, "UnequipWeapon" }, // 2201938223
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_weapons_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_weapons = { UE4CodeGen_Private::EPropertyClass::Array, "weapons", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UToolComponent, weapons), METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_weapons_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_weapons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_weapons_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "weapons", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FToolData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_armorUeqipped_MetaData[] = {
		{ "Category", "Tool Events" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_armorUeqipped = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "armorUeqipped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UToolComponent, armorUeqipped), Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_armorUeqipped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_armorUeqipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_armorEqipped_MetaData[] = {
		{ "Category", "Tool Events" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_armorEqipped = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "armorEqipped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UToolComponent, armorEqipped), Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_armorEqipped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_armorEqipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponUeqipped_MetaData[] = {
		{ "Category", "Tool Events" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponUeqipped = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "weaponUeqipped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UToolComponent, weaponUeqipped), Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponUeqipped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponUeqipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponEqipped_MetaData[] = {
		{ "Category", "Tool Events" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponEqipped = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "weaponEqipped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UToolComponent, weaponEqipped), Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponEqipped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponEqipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_toolRemoved_MetaData[] = {
		{ "Category", "Tool Events" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_toolRemoved = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "toolRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UToolComponent, toolRemoved), Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_toolRemoved_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_toolRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_toolAdded_MetaData[] = {
		{ "Category", "Tool Events" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_toolAdded = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "toolAdded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UToolComponent, toolAdded), Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_toolAdded_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_toolAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_maxSize_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_maxSize = { UE4CodeGen_Private::EPropertyClass::Map, "maxSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UToolComponent, maxSize), METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_maxSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_maxSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_maxSize_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "maxSize_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_Project_Tether_FArmorSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_maxSize_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "maxSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponInventoryMaxSize_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
		{ "ToolTip", "nude" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponInventoryMaxSize = { UE4CodeGen_Private::EPropertyClass::Int, "weaponInventoryMaxSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UToolComponent, weaponInventoryMaxSize), METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponInventoryMaxSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponInventoryMaxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor = { UE4CodeGen_Private::EPropertyClass::Map, "defaultArmor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UToolComponent, defaultArmor), METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "defaultArmor_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_Project_Tether_FArmorSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "defaultArmor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons = { UE4CodeGen_Private::EPropertyClass::Map, "defaultWeapons", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UToolComponent, defaultWeapons), METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "defaultWeapons_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_Project_Tether_FHandedness, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "defaultWeapons", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_classType_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_classType = { UE4CodeGen_Private::EPropertyClass::Object, "classType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UToolComponent, classType), Z_Construct_UClass_UPlayerClassType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_classType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_classType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_weapons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_weapons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_armorUeqipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_armorEqipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponUeqipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponEqipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_toolRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_toolAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_maxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_maxSize_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_maxSize_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_weaponInventoryMaxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_classType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToolComponent_Statics::ClassParams = {
		&UToolComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UToolComponent, 4092427489);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToolComponent(Z_Construct_UClass_UToolComponent, &UToolComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UToolComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
