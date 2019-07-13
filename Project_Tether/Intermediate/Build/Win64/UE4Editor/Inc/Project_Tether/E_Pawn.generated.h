// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEntity;
#ifdef PROJECT_TETHER_E_Pawn_generated_h
#error "E_Pawn.generated.h already included, missing '#pragma once' in E_Pawn.h"
#endif
#define PROJECT_TETHER_E_Pawn_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEntity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEntity**)Z_Param__Result=P_THIS->GetEntity(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEntity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEntity**)Z_Param__Result=P_THIS->GetEntity(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAE_Pawn(); \
	friend struct Z_Construct_UClass_AE_Pawn_Statics; \
public: \
	DECLARE_CLASS(AE_Pawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(AE_Pawn)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAE_Pawn(); \
	friend struct Z_Construct_UClass_AE_Pawn_Statics; \
public: \
	DECLARE_CLASS(AE_Pawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(AE_Pawn)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AE_Pawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AE_Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AE_Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AE_Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AE_Pawn(AE_Pawn&&); \
	NO_API AE_Pawn(const AE_Pawn&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AE_Pawn(AE_Pawn&&); \
	NO_API AE_Pawn(const AE_Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AE_Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AE_Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AE_Pawn)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__entity() { return STRUCT_OFFSET(AE_Pawn, entity); }


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_12_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Entity_E_Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
