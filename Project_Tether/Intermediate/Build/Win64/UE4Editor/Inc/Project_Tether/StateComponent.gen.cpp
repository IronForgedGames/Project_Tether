// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Components/StateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateComponent() {}
// Cross Module References
	PROJECT_TETHER_API UFunction* Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UState_NoRegister();
	PROJECT_TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FStateSlot();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UStateComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStateComponent_AnyStateTrue();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStateComponent_AnyStatFalse();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStateComponent_GetState();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStateComponent_SetStateFalse();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UStateComponent_SetStateTrue();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics
	{
		struct _Script_Project_Tether_eventStateEvent_Parms
		{
			UState* state;
			bool status;
		};
		static void NewProp_status_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_status;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::NewProp_status_SetBit(void* Obj)
	{
		((_Script_Project_Tether_eventStateEvent_Parms*)Obj)->status = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::NewProp_status = { UE4CodeGen_Private::EPropertyClass::Bool, "status", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_Project_Tether_eventStateEvent_Parms), &Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::NewProp_status_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::NewProp_state = { UE4CodeGen_Private::EPropertyClass::Object, "state", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Project_Tether_eventStateEvent_Parms, state), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::NewProp_status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/StateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Project_Tether, "StateEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Project_Tether_eventStateEvent_Parms), Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FStateSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECT_TETHER_API uint32 Get_Z_Construct_UScriptStruct_FStateSlot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateSlot, Z_Construct_UPackage__Script_Project_Tether(), TEXT("StateSlot"), sizeof(FStateSlot), Get_Z_Construct_UScriptStruct_FStateSlot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStateSlot(FStateSlot::StaticStruct, TEXT("/Script/Project_Tether"), TEXT("StateSlot"), false, nullptr, nullptr);
static struct FScriptStruct_Project_Tether_StaticRegisterNativesFStateSlot
{
	FScriptStruct_Project_Tether_StaticRegisterNativesFStateSlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StateSlot")),new UScriptStruct::TCppStructOps<FStateSlot>);
	}
} ScriptStruct_Project_Tether_StaticRegisterNativesFStateSlot;
	struct Z_Construct_UScriptStruct_FStateSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static void NewProp_status_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Components/StateComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateSlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateSlot_Statics::NewProp_status_MetaData[] = {
		{ "Category", "StateSlot" },
		{ "ModuleRelativePath", "Public/Core/Components/StateComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStateSlot_Statics::NewProp_status_SetBit(void* Obj)
	{
		((FStateSlot*)Obj)->status = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateSlot_Statics::NewProp_status = { UE4CodeGen_Private::EPropertyClass::Bool, "status", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStateSlot), &Z_Construct_UScriptStruct_FStateSlot_Statics::NewProp_status_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateSlot_Statics::NewProp_status_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStateSlot_Statics::NewProp_status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateSlot_Statics::NewProp_state_MetaData[] = {
		{ "Category", "StateSlot" },
		{ "ModuleRelativePath", "Public/Core/Components/StateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateSlot_Statics::NewProp_state = { UE4CodeGen_Private::EPropertyClass::Object, "state", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStateSlot, state), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateSlot_Statics::NewProp_state_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStateSlot_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateSlot_Statics::NewProp_status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateSlot_Statics::NewProp_state,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
		nullptr,
		&NewStructOps,
		"StateSlot",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FStateSlot),
		alignof(FStateSlot),
		Z_Construct_UScriptStruct_FStateSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStateSlot_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateSlot_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStateSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStateSlot_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StateSlot"), sizeof(FStateSlot), Get_Z_Construct_UScriptStruct_FStateSlot_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStateSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStateSlot_CRC() { return 1513282954U; }
	void UStateComponent::StaticRegisterNativesUStateComponent()
	{
		UClass* Class = UStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnyStateTrue", &UStateComponent::execAnyStateTrue },
			{ "AnyStatFalse", &UStateComponent::execAnyStatFalse },
			{ "GetState", &UStateComponent::execGetState },
			{ "SetStateFalse", &UStateComponent::execSetStateFalse },
			{ "SetStateTrue", &UStateComponent::execSetStateTrue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics
	{
		struct StateComponent_eventAnyStateTrue_Parms
		{
			TArray<UState*> statesToCheck;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_statesToCheck;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_statesToCheck_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StateComponent_eventAnyStateTrue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StateComponent_eventAnyStateTrue_Parms), &Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::NewProp_statesToCheck = { UE4CodeGen_Private::EPropertyClass::Array, "statesToCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StateComponent_eventAnyStateTrue_Parms, statesToCheck), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::NewProp_statesToCheck_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "statesToCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::NewProp_statesToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::NewProp_statesToCheck_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/StateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateComponent, "AnyStateTrue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StateComponent_eventAnyStateTrue_Parms), Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateComponent_AnyStateTrue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateComponent_AnyStateTrue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics
	{
		struct StateComponent_eventAnyStatFalse_Parms
		{
			TArray<UState*> statesToCheck;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_statesToCheck;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_statesToCheck_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StateComponent_eventAnyStatFalse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StateComponent_eventAnyStatFalse_Parms), &Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::NewProp_statesToCheck = { UE4CodeGen_Private::EPropertyClass::Array, "statesToCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StateComponent_eventAnyStatFalse_Parms, statesToCheck), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::NewProp_statesToCheck_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "statesToCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::NewProp_statesToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::NewProp_statesToCheck_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/StateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateComponent, "AnyStatFalse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StateComponent_eventAnyStatFalse_Parms), Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateComponent_AnyStatFalse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateComponent_AnyStatFalse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateComponent_GetState_Statics
	{
		struct StateComponent_eventGetState_Parms
		{
			UState* state;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStateComponent_GetState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StateComponent_eventGetState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateComponent_GetState_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StateComponent_eventGetState_Parms), &Z_Construct_UFunction_UStateComponent_GetState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateComponent_GetState_Statics::NewProp_state = { UE4CodeGen_Private::EPropertyClass::Object, "state", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StateComponent_eventGetState_Parms, state), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateComponent_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_GetState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_GetState_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_GetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/StateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateComponent_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateComponent, "GetState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StateComponent_eventGetState_Parms), Z_Construct_UFunction_UStateComponent_GetState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_GetState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_GetState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateComponent_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateComponent_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateComponent_SetStateFalse_Statics
	{
		struct StateComponent_eventSetStateFalse_Parms
		{
			UState* state;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateComponent_SetStateFalse_Statics::NewProp_state = { UE4CodeGen_Private::EPropertyClass::Object, "state", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StateComponent_eventSetStateFalse_Parms, state), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateComponent_SetStateFalse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_SetStateFalse_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_SetStateFalse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/StateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateComponent_SetStateFalse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateComponent, "SetStateFalse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StateComponent_eventSetStateFalse_Parms), Z_Construct_UFunction_UStateComponent_SetStateFalse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_SetStateFalse_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_SetStateFalse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_SetStateFalse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateComponent_SetStateFalse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateComponent_SetStateFalse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateComponent_SetStateTrue_Statics
	{
		struct StateComponent_eventSetStateTrue_Parms
		{
			UState* state;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateComponent_SetStateTrue_Statics::NewProp_state = { UE4CodeGen_Private::EPropertyClass::Object, "state", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StateComponent_eventSetStateTrue_Parms, state), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateComponent_SetStateTrue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_SetStateTrue_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_SetStateTrue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/StateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateComponent_SetStateTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateComponent, "SetStateTrue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StateComponent_eventSetStateTrue_Parms), Z_Construct_UFunction_UStateComponent_SetStateTrue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_SetStateTrue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_SetStateTrue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_SetStateTrue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateComponent_SetStateTrue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateComponent_SetStateTrue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStateComponent_NoRegister()
	{
		return UStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_states_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_states;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_states_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stateChangedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_stateChangedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateComponent_AnyStateTrue, "AnyStateTrue" }, // 3303355846
		{ &Z_Construct_UFunction_UStateComponent_AnyStatFalse, "AnyStatFalse" }, // 841803885
		{ &Z_Construct_UFunction_UStateComponent_GetState, "GetState" }, // 454325699
		{ &Z_Construct_UFunction_UStateComponent_SetStateFalse, "SetStateFalse" }, // 2850045428
		{ &Z_Construct_UFunction_UStateComponent_SetStateTrue, "SetStateTrue" }, // 416907573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Core/Components/StateComponent.h" },
		{ "ModuleRelativePath", "Public/Core/Components/StateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateComponent_Statics::NewProp_states_MetaData[] = {
		{ "Category", "StateComponent" },
		{ "ModuleRelativePath", "Public/Core/Components/StateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateComponent_Statics::NewProp_states = { UE4CodeGen_Private::EPropertyClass::Array, "states", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UStateComponent, states), METADATA_PARAMS(Z_Construct_UClass_UStateComponent_Statics::NewProp_states_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStateComponent_Statics::NewProp_states_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateComponent_Statics::NewProp_states_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "states", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStateSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateComponent_Statics::NewProp_stateChangedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Components/StateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStateComponent_Statics::NewProp_stateChangedEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "stateChangedEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010100000080000, 1, nullptr, STRUCT_OFFSET(UStateComponent, stateChangedEvent), Z_Construct_UDelegateFunction_Project_Tether_StateEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStateComponent_Statics::NewProp_stateChangedEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStateComponent_Statics::NewProp_stateChangedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateComponent_Statics::NewProp_states,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateComponent_Statics::NewProp_states_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateComponent_Statics::NewProp_stateChangedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStateComponent_Statics::ClassParams = {
		&UStateComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UStateComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UStateComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStateComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStateComponent, 2614737224);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStateComponent(Z_Construct_UClass_UStateComponent, &UStateComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
