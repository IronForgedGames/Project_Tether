// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_TETHER_Tool_generated_h
#error "Tool.generated.h already included, missing '#pragma once' in Tool.h"
#endif
#define PROJECT_TETHER_Tool_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_RPC_WRAPPERS
#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTool(); \
	friend struct Z_Construct_UClass_UTool_Statics; \
public: \
	DECLARE_CLASS(UTool, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UTool)


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUTool(); \
	friend struct Z_Construct_UClass_UTool_Statics; \
public: \
	DECLARE_CLASS(UTool, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UTool)


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTool(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTool(UTool&&); \
	NO_API UTool(const UTool&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTool(UTool&&); \
	NO_API UTool(const UTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTool)


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_PRIVATE_PROPERTY_OFFSET
#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_51_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h


#define FOREACH_ENUM_HANDEDNESS(op) \
	op(TwoHanded) \
	op(RightHanded) \
	op(LeftHanded) 
#define FOREACH_ENUM_ARMORSLOT(op) \
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
