// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStatType;
struct FStatModifier;
class UIdentity;
#ifdef PROJECT_TETHER_StatComponent_generated_h
#error "StatComponent.generated.h already included, missing '#pragma once' in StatComponent.h"
#endif
#define PROJECT_TETHER_StatComponent_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatModifier_Statics; \
	static class UScriptStruct* StaticStruct();


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStat_Statics; \
	static class UScriptStruct* StaticStruct();


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_91_DELEGATE \
struct _Script_Project_Tether_eventModifierEvent_Parms \
{ \
	UStatType* statType; \
	FStatModifier statModifier; \
}; \
static inline void FModifierEvent_DelegateWrapper(const FMulticastScriptDelegate& ModifierEvent, UStatType* statType, FStatModifier statModifier) \
{ \
	_Script_Project_Tether_eventModifierEvent_Parms Parms; \
	Parms.statType=statType; \
	Parms.statModifier=statModifier; \
	ModifierEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_16_DELEGATE \
struct _Script_Project_Tether_eventStatChangedEvent_Parms \
{ \
	UStatType* statType; \
}; \
static inline void FStatChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& StatChangedEvent, UStatType* statType) \
{ \
	_Script_Project_Tether_eventStatChangedEvent_Parms Parms; \
	Parms.statType=statType; \
	StatChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_RPC_WRAPPERS \
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
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetToMin(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToMax) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetToMax(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinValue) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetMinValue(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxValue) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetMaxValue(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Subtract(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllModifiers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllModifiers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllModifiersForStat) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllModifiersForStat(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveModifier) \
	{ \
		P_GET_OBJECT(UIdentity,Z_Param_source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveModifier(Z_Param_source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddModifier) \
	{ \
		P_GET_STRUCT(FStatModifier,Z_Param_mod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddModifier(Z_Param_mod); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Add(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetValue(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinValue) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMinValue(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxValue) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxValue(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetValue(Z_Param_type); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
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
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetToMin(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToMax) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetToMax(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinValue) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetMinValue(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxValue) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetMaxValue(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Subtract(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllModifiers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllModifiers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllModifiersForStat) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllModifiersForStat(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveModifier) \
	{ \
		P_GET_OBJECT(UIdentity,Z_Param_source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveModifier(Z_Param_source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddModifier) \
	{ \
		P_GET_STRUCT(FStatModifier,Z_Param_mod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddModifier(Z_Param_mod); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Add(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetValue(Z_Param_type,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinValue) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMinValue(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxValue) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxValue(Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_GET_OBJECT(UStatType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetValue(Z_Param_type); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatComponent(); \
	friend struct Z_Construct_UClass_UStatComponent_Statics; \
public: \
	DECLARE_CLASS(UStatComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UStatComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUStatComponent(); \
	friend struct Z_Construct_UClass_UStatComponent_Statics; \
public: \
	DECLARE_CLASS(UStatComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UStatComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_STANDARD_CONSTRUCTORS \
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


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatComponent(UStatComponent&&); \
	NO_API UStatComponent(const UStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__stats() { return STRUCT_OFFSET(UStatComponent, stats); }


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_93_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Components_Stats_StatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
