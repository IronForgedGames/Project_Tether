// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTool;
#ifdef PROJECT_TETHER_TopDown_E_Character_generated_h
#error "TopDown_E_Character.generated.h already included, missing '#pragma once' in TopDown_E_Character.h"
#endif
#define PROJECT_TETHER_TopDown_E_Character_generated_h

#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPTRTool) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_testtool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTool**)Z_Param__Result=P_THIS->GetPTRTool(Z_Param_testtool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetFocused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFocusTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FocusTick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFocus(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPTRTool) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_testtool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTool**)Z_Param__Result=P_THIS->GetPTRTool(Z_Param_testtool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetFocused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFocusTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FocusTick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFocus(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDown_E_Character(); \
	friend struct Z_Construct_UClass_ATopDown_E_Character_Statics; \
public: \
	DECLARE_CLASS(ATopDown_E_Character, AE_Character, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(ATopDown_E_Character)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_INCLASS \
private: \
	static void StaticRegisterNativesATopDown_E_Character(); \
	friend struct Z_Construct_UClass_ATopDown_E_Character_Statics; \
public: \
	DECLARE_CLASS(ATopDown_E_Character, AE_Character, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(ATopDown_E_Character)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopDown_E_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopDown_E_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDown_E_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDown_E_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDown_E_Character(ATopDown_E_Character&&); \
	NO_API ATopDown_E_Character(const ATopDown_E_Character&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDown_E_Character(ATopDown_E_Character&&); \
	NO_API ATopDown_E_Character(const ATopDown_E_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDown_E_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDown_E_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDown_E_Character)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__springArm() { return STRUCT_OFFSET(ATopDown_E_Character, springArm); } \
	FORCEINLINE static uint32 __PPO__camera() { return STRUCT_OFFSET(ATopDown_E_Character, camera); } \
	FORCEINLINE static uint32 __PPO__toolComponent() { return STRUCT_OFFSET(ATopDown_E_Character, toolComponent); } \
	FORCEINLINE static uint32 __PPO__tool() { return STRUCT_OFFSET(ATopDown_E_Character, tool); }


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_21_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_TopDown_E_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
