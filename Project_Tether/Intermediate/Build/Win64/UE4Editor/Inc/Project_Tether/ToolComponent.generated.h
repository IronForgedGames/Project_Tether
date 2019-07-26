// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_TETHER_ToolComponent_generated_h
#error "ToolComponent.generated.h already included, missing '#pragma once' in ToolComponent.h"
#endif
#define PROJECT_TETHER_ToolComponent_generated_h

#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FToolData_Statics; \
	static class UScriptStruct* StaticStruct();


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_RPC_WRAPPERS
#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolComponent(); \
	friend struct Z_Construct_UClass_UToolComponent_Statics; \
public: \
	DECLARE_CLASS(UToolComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UToolComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUToolComponent(); \
	friend struct Z_Construct_UClass_UToolComponent_Statics; \
public: \
	DECLARE_CLASS(UToolComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UToolComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_STANDARD_CONSTRUCTORS \
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


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolComponent(UToolComponent&&); \
	NO_API UToolComponent(const UToolComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToolComponent)


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__weaponDatabase() { return STRUCT_OFFSET(UToolComponent, weaponDatabase); } \
	FORCEINLINE static uint32 __PPO__armorDatabase() { return STRUCT_OFFSET(UToolComponent, armorDatabase); }


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_77_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Implementation_Gameplay_PlayerController_Components_ToolComponent_h


#define FOREACH_ENUM_ARMORSLOT(op) \
	op(None) \
	op(Head) \
	op(Torso) \
	op(Arms) \
	op(Legs) 
#define FOREACH_ENUM_RARITY(op) \
	op(Common) \
	op(Uncommon) \
	op(Rare) \
	op(Legendary) \
	op(Epic) 
#define FOREACH_ENUM_USAGETYPE(op) \
	op(Weapon) \
	op(Armor) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
