// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef PROJECT_TETHER_PlayerComboComponent_generated_h
#error "PlayerComboComponent.generated.h already included, missing '#pragma once' in PlayerComboComponent.h"
#endif
#define PROJECT_TETHER_PlayerComboComponent_generated_h

#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAnimations) \
	{ \
		P_GET_TARRAY(UAnimMontage*,Z_Param_animations); \
		P_GET_PROPERTY(UIntProperty,Z_Param_blendspaceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimations(Z_Param_animations,Z_Param_blendspaceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInputRecieved) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInputRecieved(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAnimations) \
	{ \
		P_GET_TARRAY(UAnimMontage*,Z_Param_animations); \
		P_GET_PROPERTY(UIntProperty,Z_Param_blendspaceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimations(Z_Param_animations,Z_Param_blendspaceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInputRecieved) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInputRecieved(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerComboComponent(); \
	friend struct Z_Construct_UClass_UPlayerComboComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerComboComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UPlayerComboComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerComboComponent(); \
	friend struct Z_Construct_UClass_UPlayerComboComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerComboComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UPlayerComboComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerComboComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerComboComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerComboComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerComboComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerComboComponent(UPlayerComboComponent&&); \
	NO_API UPlayerComboComponent(const UPlayerComboComponent&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerComboComponent(UPlayerComboComponent&&); \
	NO_API UPlayerComboComponent(const UPlayerComboComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerComboComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerComboComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerComboComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_10_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_PlayerComboComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
