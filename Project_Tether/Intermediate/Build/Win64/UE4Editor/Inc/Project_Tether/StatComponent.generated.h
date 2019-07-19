// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStatType;
struct FStat;
#ifdef PROJECT_TETHER_StatComponent_generated_h
#error "StatComponent.generated.h already included, missing '#pragma once' in StatComponent.h"
#endif
#define PROJECT_TETHER_StatComponent_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStat_Statics; \
	static class UScriptStruct* StaticStruct();


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToMin) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetToMin(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ResetValue(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetMinValue(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetMaxValue(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetValue(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMinValue(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxValue(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetValue(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStat) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStat*)Z_Param__Result=P_THIS->GetStat(Z_Param_type); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToMin) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetToMin(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ResetValue(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetMinValue(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetMaxValue(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetValue(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMinValue(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxValue(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetValue(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStat) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FStat*)Z_Param__Result=P_THIS->GetStat(Z_Param_type); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatComponent(); \
	friend struct Z_Construct_UClass_UStatComponent_Statics; \
public: \
	DECLARE_CLASS(UStatComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UStatComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUStatComponent(); \
	friend struct Z_Construct_UClass_UStatComponent_Statics; \
public: \
	DECLARE_CLASS(UStatComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UStatComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatComponent(UStatComponent&&); \
	NO_API UStatComponent(const UStatComponent&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatComponent(UStatComponent&&); \
	NO_API UStatComponent(const UStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__stats() { return STRUCT_OFFSET(UStatComponent, stats); }


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_29_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
