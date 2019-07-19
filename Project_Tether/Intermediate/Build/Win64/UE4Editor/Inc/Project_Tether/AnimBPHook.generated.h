// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_TETHER_AnimBPHook_generated_h
#error "AnimBPHook.generated.h already included, missing '#pragma once' in AnimBPHook.h"
#endif
#define PROJECT_TETHER_AnimBPHook_generated_h

#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFocusFalse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFocusFalse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFocusTrue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFocusTrue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFocusFalse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFocusFalse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFocusTrue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFocusTrue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimBPHook(); \
	friend struct Z_Construct_UClass_UAnimBPHook_Statics; \
public: \
	DECLARE_CLASS(UAnimBPHook, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UAnimBPHook)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBPHook(); \
	friend struct Z_Construct_UClass_UAnimBPHook_Statics; \
public: \
	DECLARE_CLASS(UAnimBPHook, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UAnimBPHook)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimBPHook(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBPHook) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimBPHook); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBPHook); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimBPHook(UAnimBPHook&&); \
	NO_API UAnimBPHook(const UAnimBPHook&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimBPHook(UAnimBPHook&&); \
	NO_API UAnimBPHook(const UAnimBPHook&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimBPHook); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBPHook); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimBPHook)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_PRIVATE_PROPERTY_OFFSET
#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_12_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_AnimBPHook_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
