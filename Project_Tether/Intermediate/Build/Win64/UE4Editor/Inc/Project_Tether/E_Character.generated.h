// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEntity;
#ifdef PROJECT_TETHER_E_Character_generated_h
#error "E_Character.generated.h already included, missing '#pragma once' in E_Character.h"
#endif
#define PROJECT_TETHER_E_Character_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_RPC_WRAPPERS \
	virtual void OnDeath_Implementation() const; \
 \
	DECLARE_FUNCTION(execOnDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDeath_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEntity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEntity**)Z_Param__Result=P_THIS->GetEntity(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnDeath_Implementation() const; \
 \
	DECLARE_FUNCTION(execOnDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDeath_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEntity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEntity**)Z_Param__Result=P_THIS->GetEntity(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_EVENT_PARMS
#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_CALLBACK_WRAPPERS
#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAE_Character(); \
	friend struct Z_Construct_UClass_AE_Character_Statics; \
public: \
	DECLARE_CLASS(AE_Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(AE_Character)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAE_Character(); \
	friend struct Z_Construct_UClass_AE_Character_Statics; \
public: \
	DECLARE_CLASS(AE_Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(AE_Character)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AE_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AE_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AE_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AE_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AE_Character(AE_Character&&); \
	NO_API AE_Character(const AE_Character&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AE_Character(AE_Character&&); \
	NO_API AE_Character(const AE_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AE_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AE_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AE_Character)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__entity() { return STRUCT_OFFSET(AE_Character, entity); } \
	FORCEINLINE static uint32 __PPO__statComponent() { return STRUCT_OFFSET(AE_Character, statComponent); } \
	FORCEINLINE static uint32 __PPO__vitalsComponent() { return STRUCT_OFFSET(AE_Character, vitalsComponent); }


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_16_PROLOG \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_EVENT_PARMS


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_CALLBACK_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_CALLBACK_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
