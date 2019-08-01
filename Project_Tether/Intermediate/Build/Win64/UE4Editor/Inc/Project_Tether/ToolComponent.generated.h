// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FToolData;
class UTool;
#ifdef PROJECT_TETHER_ToolComponent_generated_h
#error "ToolComponent.generated.h already included, missing '#pragma once' in ToolComponent.h"
#endif
#define PROJECT_TETHER_ToolComponent_generated_h

#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FToolData_Statics; \
	static class UScriptStruct* StaticStruct();


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_43_DELEGATE \
struct _Script_Project_Tether_eventToolEventSigniture_Parms \
{ \
	FToolData tool; \
}; \
static inline void FToolEventSigniture_DelegateWrapper(const FMulticastScriptDelegate& ToolEventSigniture, FToolData tool) \
{ \
	_Script_Project_Tether_eventToolEventSigniture_Parms Parms; \
	Parms.tool=tool; \
	ToolEventSigniture.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwapArmor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_direction); \
		P_GET_PROPERTY(UByteProperty,Z_Param_slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->SwapArmor(Z_Param_direction,FArmorSlot(Z_Param_slot)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwapWeapons) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_direction); \
		P_GET_PROPERTY(UByteProperty,Z_Param_hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->SwapWeapons(Z_Param_direction,FHandedness(Z_Param_hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnequipArmor) \
	{ \
		P_GET_STRUCT(FToolData,Z_Param_armor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->UnequipArmor(Z_Param_armor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipArmor) \
	{ \
		P_GET_STRUCT(FToolData,Z_Param_armor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->EquipArmor(Z_Param_armor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnequipWeapon) \
	{ \
		P_GET_STRUCT(FToolData,Z_Param_weapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->UnequipWeapon(Z_Param_weapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipWeapon) \
	{ \
		P_GET_STRUCT(FToolData,Z_Param_weapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->EquipWeapon(Z_Param_weapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipDefaultArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->EquipDefaultArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipDefaultWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->EquipDefaultWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTool) \
	{ \
		P_GET_STRUCT(FToolData,Z_Param_toolToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveTool(Z_Param_toolToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTool) \
	{ \
		P_GET_STRUCT(FToolData,Z_Param_newTool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddTool(Z_Param_newTool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateToolInstance) \
	{ \
		P_GET_OBJECT(UTool,Z_Param_toolBase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->CreateToolInstance(Z_Param_toolBase); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwapArmor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_direction); \
		P_GET_PROPERTY(UByteProperty,Z_Param_slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->SwapArmor(Z_Param_direction,FArmorSlot(Z_Param_slot)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwapWeapons) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_direction); \
		P_GET_PROPERTY(UByteProperty,Z_Param_hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->SwapWeapons(Z_Param_direction,FHandedness(Z_Param_hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnequipArmor) \
	{ \
		P_GET_STRUCT(FToolData,Z_Param_armor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->UnequipArmor(Z_Param_armor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipArmor) \
	{ \
		P_GET_STRUCT(FToolData,Z_Param_armor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->EquipArmor(Z_Param_armor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnequipWeapon) \
	{ \
		P_GET_STRUCT(FToolData,Z_Param_weapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->UnequipWeapon(Z_Param_weapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipWeapon) \
	{ \
		P_GET_STRUCT(FToolData,Z_Param_weapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->EquipWeapon(Z_Param_weapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipDefaultArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->EquipDefaultArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipDefaultWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->EquipDefaultWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTool) \
	{ \
		P_GET_STRUCT(FToolData,Z_Param_toolToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveTool(Z_Param_toolToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTool) \
	{ \
		P_GET_STRUCT(FToolData,Z_Param_newTool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddTool(Z_Param_newTool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateToolInstance) \
	{ \
		P_GET_OBJECT(UTool,Z_Param_toolBase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FToolData*)Z_Param__Result=P_THIS->CreateToolInstance(Z_Param_toolBase); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolComponent(); \
	friend struct Z_Construct_UClass_UToolComponent_Statics; \
public: \
	DECLARE_CLASS(UToolComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UToolComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUToolComponent(); \
	friend struct Z_Construct_UClass_UToolComponent_Statics; \
public: \
	DECLARE_CLASS(UToolComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UToolComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolComponent(UToolComponent&&); \
	NO_API UToolComponent(const UToolComponent&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolComponent(UToolComponent&&); \
	NO_API UToolComponent(const UToolComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToolComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__classType() { return STRUCT_OFFSET(UToolComponent, classType); } \
	FORCEINLINE static uint32 __PPO__defaultWeapons() { return STRUCT_OFFSET(UToolComponent, defaultWeapons); } \
	FORCEINLINE static uint32 __PPO__defaultArmor() { return STRUCT_OFFSET(UToolComponent, defaultArmor); } \
	FORCEINLINE static uint32 __PPO__weaponInventoryMaxSize() { return STRUCT_OFFSET(UToolComponent, weaponInventoryMaxSize); } \
	FORCEINLINE static uint32 __PPO__maxSize() { return STRUCT_OFFSET(UToolComponent, maxSize); } \
	FORCEINLINE static uint32 __PPO__toolAdded() { return STRUCT_OFFSET(UToolComponent, toolAdded); } \
	FORCEINLINE static uint32 __PPO__toolRemoved() { return STRUCT_OFFSET(UToolComponent, toolRemoved); } \
	FORCEINLINE static uint32 __PPO__weaponEqipped() { return STRUCT_OFFSET(UToolComponent, weaponEqipped); } \
	FORCEINLINE static uint32 __PPO__weaponUeqipped() { return STRUCT_OFFSET(UToolComponent, weaponUeqipped); } \
	FORCEINLINE static uint32 __PPO__armorEqipped() { return STRUCT_OFFSET(UToolComponent, armorEqipped); } \
	FORCEINLINE static uint32 __PPO__armorUeqipped() { return STRUCT_OFFSET(UToolComponent, armorUeqipped); } \
	FORCEINLINE static uint32 __PPO__weapons() { return STRUCT_OFFSET(UToolComponent, weapons); }


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_45_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
