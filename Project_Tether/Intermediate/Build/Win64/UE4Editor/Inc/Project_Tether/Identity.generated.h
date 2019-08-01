// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIdentity;
#ifdef PROJECT_TETHER_Identity_generated_h
#error "Identity.generated.h already included, missing '#pragma once' in Identity.h"
#endif
#define PROJECT_TETHER_Identity_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDecendantOf) \
	{ \
		P_GET_OBJECT(UIdentity,Z_Param_ancestor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDecendantOf(Z_Param_ancestor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAncestorOf) \
	{ \
		P_GET_OBJECT(UIdentity,Z_Param_decendant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAncestorOf(Z_Param_decendant); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDecendantOf) \
	{ \
		P_GET_OBJECT(UIdentity,Z_Param_ancestor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDecendantOf(Z_Param_ancestor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAncestorOf) \
	{ \
		P_GET_OBJECT(UIdentity,Z_Param_decendant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAncestorOf(Z_Param_decendant); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIdentity(); \
	friend struct Z_Construct_UClass_UIdentity_Statics; \
public: \
	DECLARE_CLASS(UIdentity, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UIdentity)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUIdentity(); \
	friend struct Z_Construct_UClass_UIdentity_Statics; \
public: \
	DECLARE_CLASS(UIdentity, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UIdentity)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIdentity(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIdentity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIdentity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIdentity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIdentity(UIdentity&&); \
	NO_API UIdentity(const UIdentity&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIdentity(UIdentity&&); \
	NO_API UIdentity(const UIdentity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIdentity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIdentity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIdentity)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_PRIVATE_PROPERTY_OFFSET
#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_16_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Entity_Identity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
