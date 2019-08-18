// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDown_E_Character() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_ATopDown_E_Character_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_ATopDown_E_Character();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_AE_Character();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_ATopDown_E_Character_EndFocus();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_ATopDown_E_Character_FocusTick();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_ATopDown_E_Character_GetFocused();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_ATopDown_E_Character_StartFocus();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UState_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UDashComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UEvadeComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UPlayerComboComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UAnimBPHook_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UStateComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UVitalsComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UStatComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ATopDown_E_Character::StaticRegisterNativesATopDown_E_Character()
	{
		UClass* Class = ATopDown_E_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndFocus", &ATopDown_E_Character::execEndFocus },
			{ "FocusTick", &ATopDown_E_Character::execFocusTick },
			{ "GetFocused", &ATopDown_E_Character::execGetFocused },
			{ "StartFocus", &ATopDown_E_Character::execStartFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATopDown_E_Character_EndFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDown_E_Character_EndFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDown_E_Character_EndFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDown_E_Character, "EndFocus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDown_E_Character_EndFocus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATopDown_E_Character_EndFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDown_E_Character_EndFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDown_E_Character_EndFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDown_E_Character_FocusTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDown_E_Character_FocusTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDown_E_Character_FocusTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDown_E_Character, "FocusTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDown_E_Character_FocusTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATopDown_E_Character_FocusTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDown_E_Character_FocusTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDown_E_Character_FocusTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics
	{
		struct TopDown_E_Character_eventGetFocused_Parms
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
	void Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TopDown_E_Character_eventGetFocused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TopDown_E_Character_eventGetFocused_Parms), &Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
		{ "ToolTip", "used for calculating direction and rotating the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDown_E_Character, "GetFocused", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TopDown_E_Character_eventGetFocused_Parms), Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDown_E_Character_GetFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDown_E_Character_GetFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDown_E_Character_StartFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDown_E_Character_StartFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDown_E_Character_StartFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDown_E_Character, "StartFocus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDown_E_Character_StartFocus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATopDown_E_Character_StartFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDown_E_Character_StartFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDown_E_Character_StartFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATopDown_E_Character_NoRegister()
	{
		return ATopDown_E_Character::StaticClass();
	}
	struct Z_Construct_UClass_ATopDown_E_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_focusRotateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_focusRotateSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_focusStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_focusStates;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_focusStates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dashComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dashComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_evadeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_evadeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_comboComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_comboComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animHook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animHook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stateComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_stateComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventoryComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventoryComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vitalsComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_vitalsComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toolComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_toolComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_statComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_springArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_springArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDown_E_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AE_Character,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATopDown_E_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATopDown_E_Character_EndFocus, "EndFocus" }, // 473562587
		{ &Z_Construct_UFunction_ATopDown_E_Character_FocusTick, "FocusTick" }, // 1124891972
		{ &Z_Construct_UFunction_ATopDown_E_Character_GetFocused, "GetFocused" }, // 4163560516
		{ &Z_Construct_UFunction_ATopDown_E_Character_StartFocus, "StartFocus" }, // 344405304
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
		{ "ToolTip", "A simple top down controller used to prototype the player character" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_focusRotateSpeed_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_focusRotateSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "focusRotateSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, focusRotateSpeed), METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_focusRotateSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_focusRotateSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_focusStates_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_focusStates = { UE4CodeGen_Private::EPropertyClass::Array, "focusStates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, focusStates), METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_focusStates_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_focusStates_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_focusStates_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "focusStates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_dashComponent_MetaData[] = {
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_dashComponent = { UE4CodeGen_Private::EPropertyClass::Object, "dashComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, dashComponent), Z_Construct_UClass_UDashComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_dashComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_dashComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_evadeComponent_MetaData[] = {
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_evadeComponent = { UE4CodeGen_Private::EPropertyClass::Object, "evadeComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, evadeComponent), Z_Construct_UClass_UEvadeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_evadeComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_evadeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_comboComponent_MetaData[] = {
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_comboComponent = { UE4CodeGen_Private::EPropertyClass::Object, "comboComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, comboComponent), Z_Construct_UClass_UPlayerComboComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_comboComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_comboComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_animHook_MetaData[] = {
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_animHook = { UE4CodeGen_Private::EPropertyClass::Object, "animHook", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, animHook), Z_Construct_UClass_UAnimBPHook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_animHook_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_animHook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_stateComponent_MetaData[] = {
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_stateComponent = { UE4CodeGen_Private::EPropertyClass::Object, "stateComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, stateComponent), Z_Construct_UClass_UStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_stateComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_stateComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_inventoryComponent_MetaData[] = {
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_inventoryComponent = { UE4CodeGen_Private::EPropertyClass::Object, "inventoryComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, inventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_inventoryComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_inventoryComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_vitalsComponent_MetaData[] = {
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_vitalsComponent = { UE4CodeGen_Private::EPropertyClass::Object, "vitalsComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, vitalsComponent), Z_Construct_UClass_UVitalsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_vitalsComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_vitalsComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_toolComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_toolComponent = { UE4CodeGen_Private::EPropertyClass::Object, "toolComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, toolComponent), Z_Construct_UClass_UToolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_toolComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_toolComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_statComponent_MetaData[] = {
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_statComponent = { UE4CodeGen_Private::EPropertyClass::Object, "statComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, statComponent), Z_Construct_UClass_UStatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_statComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_statComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_camera = { UE4CodeGen_Private::EPropertyClass::Object, "camera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_springArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_springArm = { UE4CodeGen_Private::EPropertyClass::Object, "springArm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ATopDown_E_Character, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_springArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_springArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDown_E_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_focusRotateSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_focusStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_focusStates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_dashComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_evadeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_comboComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_animHook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_stateComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_inventoryComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_vitalsComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_toolComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_statComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDown_E_Character_Statics::NewProp_springArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDown_E_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDown_E_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopDown_E_Character_Statics::ClassParams = {
		&ATopDown_E_Character::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATopDown_E_Character_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATopDown_E_Character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATopDown_E_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDown_E_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopDown_E_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopDown_E_Character, 26632391);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopDown_E_Character(Z_Construct_UClass_ATopDown_E_Character, &ATopDown_E_Character::StaticClass, TEXT("/Script/Project_Tether"), TEXT("ATopDown_E_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDown_E_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
