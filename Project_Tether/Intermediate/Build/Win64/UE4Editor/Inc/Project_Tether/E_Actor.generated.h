// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEntity;
#ifdef PROJECT_TETHER_E_Actor_generated_h
#error "E_Actor.generated.h already included, missing '#pragma once' in E_Actor.h"
#endif
#define PROJECT_TETHER_E_Actor_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEntity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEntity**)Z_Param__Result=P_THIS->GetEntity(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEntity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEntity**)Z_Param__Result=P_THIS->GetEntity(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAE_Actor(); \
	friend struct Z_Construct_UClass_AE_Actor_Statics; \
public: \
	DECLARE_CLASS(AE_Actor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(AE_Actor)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAE_Actor(); \
	friend struct Z_Construct_UClass_AE_Actor_Statics; \
public: \
	DECLARE_CLASS(AE_Actor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(AE_Actor)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AE_Actor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AE_Actor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AE_Actor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AE_Actor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AE_Actor(AE_Actor&&); \
	NO_API AE_Actor(const AE_Actor&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AE_Actor(AE_Actor&&); \
	NO_API AE_Actor(const AE_Actor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AE_Actor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AE_Actor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AE_Actor)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__entity() { return STRUCT_OFFSET(AE_Actor, entity); }


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_12_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Actor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
