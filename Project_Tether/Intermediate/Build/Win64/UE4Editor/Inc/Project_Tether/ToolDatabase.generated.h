// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayerClassType;
class UTool;
#ifdef PROJECT_TETHER_ToolDatabase_generated_h
#error "ToolDatabase.generated.h already included, missing '#pragma once' in ToolDatabase.h"
#endif
#define PROJECT_TETHER_ToolDatabase_generated_h

#define Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FToolDataKey_Statics; \
	static class UScriptStruct* StaticStruct();


#define Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FToolDataSlot_Statics; \
	static class UScriptStruct* StaticStruct();


#define Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomToolSimpleByRarity) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_rarity); \
		P_GET_OBJECT(UPlayerClassType,Z_Param_playerClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTool**)Z_Param__Result=P_THIS->GetRandomToolSimpleByRarity(FRarity(Z_Param_rarity),Z_Param_playerClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetToolsOfClassTypeAndRarity) \
	{ \
		P_GET_OBJECT(UPlayerClassType,Z_Param_playerClass); \
		P_GET_PROPERTY(UByteProperty,Z_Param_rarity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UTool*>*)Z_Param__Result=P_THIS->GetToolsOfClassTypeAndRarity(Z_Param_playerClass,FRarity(Z_Param_rarity)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetToolsOfClassType) \
	{ \
		P_GET_OBJECT(UPlayerClassType,Z_Param_playerClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UTool*>*)Z_Param__Result=P_THIS->GetToolsOfClassType(Z_Param_playerClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetToolsOfRarity) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_rarity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UTool*>*)Z_Param__Result=P_THIS->GetToolsOfRarity(FRarity(Z_Param_rarity)); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomToolSimpleByRarity) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_rarity); \
		P_GET_OBJECT(UPlayerClassType,Z_Param_playerClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTool**)Z_Param__Result=P_THIS->GetRandomToolSimpleByRarity(FRarity(Z_Param_rarity),Z_Param_playerClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetToolsOfClassTypeAndRarity) \
	{ \
		P_GET_OBJECT(UPlayerClassType,Z_Param_playerClass); \
		P_GET_PROPERTY(UByteProperty,Z_Param_rarity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UTool*>*)Z_Param__Result=P_THIS->GetToolsOfClassTypeAndRarity(Z_Param_playerClass,FRarity(Z_Param_rarity)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetToolsOfClassType) \
	{ \
		P_GET_OBJECT(UPlayerClassType,Z_Param_playerClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UTool*>*)Z_Param__Result=P_THIS->GetToolsOfClassType(Z_Param_playerClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetToolsOfRarity) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_rarity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UTool*>*)Z_Param__Result=P_THIS->GetToolsOfRarity(FRarity(Z_Param_rarity)); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolDatabase(); \
	friend struct Z_Construct_UClass_UToolDatabase_Statics; \
public: \
	DECLARE_CLASS(UToolDatabase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UToolDatabase)


#define Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUToolDatabase(); \
	friend struct Z_Construct_UClass_UToolDatabase_Statics; \
public: \
	DECLARE_CLASS(UToolDatabase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UToolDatabase)


#define Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolDatabase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolDatabase(UToolDatabase&&); \
	NO_API UToolDatabase(const UToolDatabase&); \
public:


#define Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolDatabase(UToolDatabase&&); \
	NO_API UToolDatabase(const UToolDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToolDatabase)


#define Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__database() { return STRUCT_OFFSET(UToolDatabase, database); }


#define Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_46_PROLOG
#define Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_INCLASS \
	Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Private_Core_Tools_ToolDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
