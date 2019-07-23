// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHealInfo;
struct FDamageInfo;
#ifdef PROJECT_TETHER_VitalsComponent_generated_h
#error "VitalsComponent.generated.h already included, missing '#pragma once' in VitalsComponent.h"
#endif
#define PROJECT_TETHER_VitalsComponent_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResistanceModifier_Statics; \
	static class UScriptStruct* StaticStruct();


#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHealInfo_Statics; \
	static class UScriptStruct* StaticStruct();


#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDamageInfo_Statics; \
	static class UScriptStruct* StaticStruct();


#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHealAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HealAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_STRUCT(FHealInfo,Z_Param_info); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Heal(Z_Param_info); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKillImmediately) \
	{ \
		P_GET_STRUCT(FDamageInfo,Z_Param_damageInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->KillImmediately(Z_Param_damageInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDealDamage) \
	{ \
		P_GET_STRUCT(FDamageInfo,Z_Param_damageInfo); \
		P_GET_UBOOL(Z_Param_shouldDot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DealDamage(Z_Param_damageInfo,Z_Param_shouldDot); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHealAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HealAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_STRUCT(FHealInfo,Z_Param_info); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Heal(Z_Param_info); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKillImmediately) \
	{ \
		P_GET_STRUCT(FDamageInfo,Z_Param_damageInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->KillImmediately(Z_Param_damageInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDealDamage) \
	{ \
		P_GET_STRUCT(FDamageInfo,Z_Param_damageInfo); \
		P_GET_UBOOL(Z_Param_shouldDot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DealDamage(Z_Param_damageInfo,Z_Param_shouldDot); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVitalsComponent(); \
	friend struct Z_Construct_UClass_UVitalsComponent_Statics; \
public: \
	DECLARE_CLASS(UVitalsComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UVitalsComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_INCLASS \
private: \
	static void StaticRegisterNativesUVitalsComponent(); \
	friend struct Z_Construct_UClass_UVitalsComponent_Statics; \
public: \
	DECLARE_CLASS(UVitalsComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UVitalsComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVitalsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVitalsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVitalsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVitalsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVitalsComponent(UVitalsComponent&&); \
	NO_API UVitalsComponent(const UVitalsComponent&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVitalsComponent(UVitalsComponent&&); \
	NO_API UVitalsComponent(const UVitalsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVitalsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVitalsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVitalsComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__status() { return STRUCT_OFFSET(UVitalsComponent, status); } \
	FORCEINLINE static uint32 __PPO__resistanceModifiers() { return STRUCT_OFFSET(UVitalsComponent, resistanceModifiers); }


#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_125_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Components_VitalsComponent_h


#define FOREACH_ENUM_STATUS(op) \
	op(Alive) \
	op(Dead) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
