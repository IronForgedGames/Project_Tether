// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventory;
class UEntityManager;
#ifdef PROJECT_TETHER_E_GameInstance_generated_h
#error "E_GameInstance.generated.h already included, missing '#pragma once' in E_GameInstance.h"
#endif
#define PROJECT_TETHER_E_GameInstance_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UInventory**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEntityManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEntityManager**)Z_Param__Result=P_THIS->GetEntityManager(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UInventory**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEntityManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEntityManager**)Z_Param__Result=P_THIS->GetEntityManager(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUE_GameInstance(); \
	friend struct Z_Construct_UClass_UE_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UE_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UE_GameInstance)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUE_GameInstance(); \
	friend struct Z_Construct_UClass_UE_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UE_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UE_GameInstance)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UE_GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UE_GameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UE_GameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UE_GameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UE_GameInstance(UE_GameInstance&&); \
	NO_API UE_GameInstance(const UE_GameInstance&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UE_GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UE_GameInstance(UE_GameInstance&&); \
	NO_API UE_GameInstance(const UE_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UE_GameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UE_GameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UE_GameInstance)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__inventory() { return STRUCT_OFFSET(UE_GameInstance, inventory); }


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_14_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Entity_E_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
