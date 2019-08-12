// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef PROJECT_TETHER_EvadeComponent_generated_h
#error "EvadeComponent.generated.h already included, missing '#pragma once' in EvadeComponent.h"
#endif
#define PROJECT_TETHER_EvadeComponent_generated_h

#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_10_DELEGATE \
static inline void FEvadeEvent_DelegateWrapper(const FMulticastScriptDelegate& EvadeEvent) \
{ \
	EvadeEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndEvade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndEvade(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartEvade) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_currentVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartEvade(Z_Param_currentVelocity); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndEvade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndEvade(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartEvade) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_currentVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartEvade(Z_Param_currentVelocity); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEvadeComponent(); \
	friend struct Z_Construct_UClass_UEvadeComponent_Statics; \
public: \
	DECLARE_CLASS(UEvadeComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UEvadeComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEvadeComponent(); \
	friend struct Z_Construct_UClass_UEvadeComponent_Statics; \
public: \
	DECLARE_CLASS(UEvadeComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UEvadeComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEvadeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEvadeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvadeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvadeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvadeComponent(UEvadeComponent&&); \
	NO_API UEvadeComponent(const UEvadeComponent&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvadeComponent(UEvadeComponent&&); \
	NO_API UEvadeComponent(const UEvadeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvadeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvadeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEvadeComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_12_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_EvadeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
