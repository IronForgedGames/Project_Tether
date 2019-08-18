// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef PROJECT_TETHER_DashComponent_generated_h
#error "DashComponent.generated.h already included, missing '#pragma once' in DashComponent.h"
#endif
#define PROJECT_TETHER_DashComponent_generated_h

#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_9_DELEGATE \
static inline void FDashEvent_DelegateWrapper(const FMulticastScriptDelegate& DashEvent) \
{ \
	DashEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopDash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartDash) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_currentVelocity); \
		P_GET_UBOOL(Z_Param_shouldRotate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartDash(Z_Param_currentVelocity,Z_Param_shouldRotate); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopDash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartDash) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_currentVelocity); \
		P_GET_UBOOL(Z_Param_shouldRotate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartDash(Z_Param_currentVelocity,Z_Param_shouldRotate); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDashComponent(); \
	friend struct Z_Construct_UClass_UDashComponent_Statics; \
public: \
	DECLARE_CLASS(UDashComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UDashComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDashComponent(); \
	friend struct Z_Construct_UClass_UDashComponent_Statics; \
public: \
	DECLARE_CLASS(UDashComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UDashComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDashComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDashComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDashComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDashComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDashComponent(UDashComponent&&); \
	NO_API UDashComponent(const UDashComponent&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDashComponent(UDashComponent&&); \
	NO_API UDashComponent(const UDashComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDashComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDashComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDashComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__dashStartedEvent() { return STRUCT_OFFSET(UDashComponent, dashStartedEvent); } \
	FORCEINLINE static uint32 __PPO__dashStoppedEvent() { return STRUCT_OFFSET(UDashComponent, dashStoppedEvent); }


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_11_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_DashComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
