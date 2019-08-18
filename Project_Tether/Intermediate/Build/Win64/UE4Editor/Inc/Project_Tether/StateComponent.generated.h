// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UState;
#ifdef PROJECT_TETHER_StateComponent_generated_h
#error "StateComponent.generated.h already included, missing '#pragma once' in StateComponent.h"
#endif
#define PROJECT_TETHER_StateComponent_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateSlot_Statics; \
	static class UScriptStruct* StaticStruct();


#define Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_27_DELEGATE \
struct _Script_Project_Tether_eventStateEvent_Parms \
{ \
	UState* state; \
	bool status; \
}; \
static inline void FStateEvent_DelegateWrapper(const FMulticastScriptDelegate& StateEvent, UState* state, bool status) \
{ \
	_Script_Project_Tether_eventStateEvent_Parms Parms; \
	Parms.state=state; \
	Parms.status=status ? true : false; \
	StateEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetStateFalse) \
	{ \
		P_GET_OBJECT(UState,Z_Param_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStateFalse(Z_Param_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStateTrue) \
	{ \
		P_GET_OBJECT(UState,Z_Param_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStateTrue(Z_Param_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnyStatFalse) \
	{ \
		P_GET_TARRAY(UState*,Z_Param_statesToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AnyStatFalse(Z_Param_statesToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnyStateTrue) \
	{ \
		P_GET_TARRAY(UState*,Z_Param_statesToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AnyStateTrue(Z_Param_statesToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetState) \
	{ \
		P_GET_OBJECT(UState,Z_Param_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetState(Z_Param_state); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStateFalse) \
	{ \
		P_GET_OBJECT(UState,Z_Param_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStateFalse(Z_Param_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStateTrue) \
	{ \
		P_GET_OBJECT(UState,Z_Param_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStateTrue(Z_Param_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnyStatFalse) \
	{ \
		P_GET_TARRAY(UState*,Z_Param_statesToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AnyStatFalse(Z_Param_statesToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnyStateTrue) \
	{ \
		P_GET_TARRAY(UState*,Z_Param_statesToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AnyStateTrue(Z_Param_statesToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetState) \
	{ \
		P_GET_OBJECT(UState,Z_Param_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetState(Z_Param_state); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateComponent(); \
	friend struct Z_Construct_UClass_UStateComponent_Statics; \
public: \
	DECLARE_CLASS(UStateComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UStateComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUStateComponent(); \
	friend struct Z_Construct_UClass_UStateComponent_Statics; \
public: \
	DECLARE_CLASS(UStateComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UStateComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateComponent(UStateComponent&&); \
	NO_API UStateComponent(const UStateComponent&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateComponent(UStateComponent&&); \
	NO_API UStateComponent(const UStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_PRIVATE_PROPERTY_OFFSET
#define Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_29_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Components_StateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
