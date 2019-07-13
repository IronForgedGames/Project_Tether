// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
class UGroup;
class UIdentity;
#ifdef PROJECT_TETHER_Entity_generated_h
#error "Entity.generated.h already included, missing '#pragma once' in Entity.h"
#endif
#define PROJECT_TETHER_Entity_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=P_THIS->GetId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGroup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UGroup> *)Z_Param__Result=P_THIS->GetGroup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIdentity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UIdentity> *)Z_Param__Result=P_THIS->GetIdentity(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=P_THIS->GetId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGroup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UGroup> *)Z_Param__Result=P_THIS->GetGroup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIdentity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UIdentity> *)Z_Param__Result=P_THIS->GetIdentity(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntity(); \
	friend struct Z_Construct_UClass_UEntity_Statics; \
public: \
	DECLARE_CLASS(UEntity, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UEntity)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEntity(); \
	friend struct Z_Construct_UClass_UEntity_Statics; \
public: \
	DECLARE_CLASS(UEntity, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UEntity)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEntity(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEntity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEntity(UEntity&&); \
	NO_API UEntity(const UEntity&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEntity(UEntity&&); \
	NO_API UEntity(const UEntity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEntity)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__identity() { return STRUCT_OFFSET(UEntity, identity); } \
	FORCEINLINE static uint32 __PPO__id() { return STRUCT_OFFSET(UEntity, id); }


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_12_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Entity_Entity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
