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
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UTool_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_AddTool();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_CreateToolInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_EquipArmor();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_EquipWeapon();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_RemoveTool();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_SwapArmor();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_ArmorSlot();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_SwapWeapons();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_Handedness();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_UnequipArmor();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolComponent_UnequipWeapon();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UClassType_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics
	{
		struct _Script_Project_Tether_eventToolEventSigniture_Parms
		{
			UTool* tool;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature_Statics::NewProp_tool = { UE4CodeGen_Private::EPropertyClass::Object, "tool", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Project_Tether_eventToolEventSigniture_Parms, tool), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	void UToolComponent::StaticRegisterNativesUToolComponent()
	{
		UClass* Class = UToolComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTool", &UToolComponent::execAddTool },
			{ "CreateToolInstance", &UToolComponent::execCreateToolInstance },
			{ "EquipArmor", &UToolComponent::execEquipArmor },
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
			UTool* newTool;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newTool;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_AddTool_Statics::NewProp_newTool = { UE4CodeGen_Private::EPropertyClass::Object, "newTool", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventAddTool_Parms, newTool), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
			TSubclassOf<UTool>  toolBase;
			UTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_toolBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventCreateToolInstance_Parms, ReturnValue), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UToolComponent_CreateToolInstance_Statics::NewProp_toolBase = { UE4CodeGen_Private::EPropertyClass::Class, "toolBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventCreateToolInstance_Parms, toolBase), Z_Construct_UClass_UTool_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
			UTool* armor;
			UTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_armor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventEquipArmor_Parms, ReturnValue), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_EquipArmor_Statics::NewProp_armor = { UE4CodeGen_Private::EPropertyClass::Object, "armor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventEquipArmor_Parms, armor), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	struct Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics
	{
		struct ToolComponent_eventEquipWeapon_Parms
		{
			UTool* weapon;
			UTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventEquipWeapon_Parms, ReturnValue), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_EquipWeapon_Statics::NewProp_weapon = { UE4CodeGen_Private::EPropertyClass::Object, "weapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventEquipWeapon_Parms, weapon), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
			UTool* toolToRemove;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_toolToRemove;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_RemoveTool_Statics::NewProp_toolToRemove = { UE4CodeGen_Private::EPropertyClass::Object, "toolToRemove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventRemoveTool_Parms, toolToRemove), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
			TEnumAsByte<ArmorSlot> slot;
			UTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventSwapArmor_Parms, ReturnValue), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolComponent_SwapArmor_Statics::NewProp_slot = { UE4CodeGen_Private::EPropertyClass::Byte, "slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventSwapArmor_Parms, slot), Z_Construct_UEnum_Project_Tether_ArmorSlot, METADATA_PARAMS(nullptr, 0) };
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
			TEnumAsByte<Handedness> hand;
			UTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_hand;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventSwapWeapons_Parms, ReturnValue), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolComponent_SwapWeapons_Statics::NewProp_hand = { UE4CodeGen_Private::EPropertyClass::Byte, "hand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventSwapWeapons_Parms, hand), Z_Construct_UEnum_Project_Tether_Handedness, METADATA_PARAMS(nullptr, 0) };
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
			UTool* armor;
			UTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_armor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventUnequipArmor_Parms, ReturnValue), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_UnequipArmor_Statics::NewProp_armor = { UE4CodeGen_Private::EPropertyClass::Object, "armor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventUnequipArmor_Parms, armor), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
			UTool* weapon;
			UTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventUnequipWeapon_Parms, ReturnValue), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolComponent_UnequipWeapon_Statics::NewProp_weapon = { UE4CodeGen_Private::EPropertyClass::Object, "weapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolComponent_eventUnequipWeapon_Parms, weapon), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nudeArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_nudeArmor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_nudeArmor_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nudeArmor_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_defaultArmor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_defaultArmor_Key_KeyProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_defaultArmor_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultWeapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_defaultWeapons;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_defaultWeapons_Key_KeyProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_defaultWeapons_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_classType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_classType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToolComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolComponent_AddTool, "AddTool" }, // 3187467761
		{ &Z_Construct_UFunction_UToolComponent_CreateToolInstance, "CreateToolInstance" }, // 2990112617
		{ &Z_Construct_UFunction_UToolComponent_EquipArmor, "EquipArmor" }, // 1928930455
		{ &Z_Construct_UFunction_UToolComponent_EquipWeapon, "EquipWeapon" }, // 1315436161
		{ &Z_Construct_UFunction_UToolComponent_RemoveTool, "RemoveTool" }, // 2343426989
		{ &Z_Construct_UFunction_UToolComponent_SwapArmor, "SwapArmor" }, // 2622817575
		{ &Z_Construct_UFunction_UToolComponent_SwapWeapons, "SwapWeapons" }, // 3000338919
		{ &Z_Construct_UFunction_UToolComponent_UnequipArmor, "UnequipArmor" }, // 464645405
		{ &Z_Construct_UFunction_UToolComponent_UnequipWeapon, "UnequipWeapon" }, // 2056877797
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_maxSize_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "maxSize_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_Project_Tether_ArmorSlot, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_nudeArmor_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
		{ "ToolTip", "nude" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_nudeArmor = { UE4CodeGen_Private::EPropertyClass::Map, "nudeArmor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UToolComponent, nudeArmor), METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_nudeArmor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_nudeArmor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_nudeArmor_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "nudeArmor_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_Project_Tether_ArmorSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_nudeArmor_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "nudeArmor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor = { UE4CodeGen_Private::EPropertyClass::Map, "defaultArmor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UToolComponent, defaultArmor), METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "defaultArmor_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_Project_Tether_ArmorSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultArmor_ValueProp = { UE4CodeGen_Private::EPropertyClass::Class, "defaultArmor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000001, 1, nullptr, 1, Z_Construct_UClass_UTool_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons = { UE4CodeGen_Private::EPropertyClass::Map, "defaultWeapons", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UToolComponent, defaultWeapons), METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "defaultWeapons_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_Project_Tether_Handedness, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_defaultWeapons_ValueProp = { UE4CodeGen_Private::EPropertyClass::Class, "defaultWeapons", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000001, 1, nullptr, 1, Z_Construct_UClass_UTool_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolComponent_Statics::NewProp_classType_MetaData[] = {
		{ "Category", "ToolComponent" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UToolComponent_Statics::NewProp_classType = { UE4CodeGen_Private::EPropertyClass::Class, "classType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UToolComponent, classType), Z_Construct_UClass_UClassType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UToolComponent_Statics::NewProp_classType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolComponent_Statics::NewProp_classType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolComponent_Statics::PropPointers[] = {
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_nudeArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_nudeArmor_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolComponent_Statics::NewProp_nudeArmor_ValueProp,
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
	IMPLEMENT_CLASS(UToolComponent, 3803174126);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToolComponent(Z_Construct_UClass_UToolComponent, &UToolComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UToolComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
