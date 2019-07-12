// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_TETHER_Group_generated_h
#error "Group.generated.h already included, missing '#pragma once' in Group.h"
#endif
#define PROJECT_TETHER_Group_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetName(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetName(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroup(); \
	friend struct Z_Construct_UClass_UGroup_Statics; \
public: \
	DECLARE_CLASS(UGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UGroup)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGroup(); \
	friend struct Z_Construct_UClass_UGroup_Statics; \
public: \
	DECLARE_CLASS(UGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UGroup)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroup(UGroup&&); \
	NO_API UGroup(const UGroup&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroup(UGroup&&); \
	NO_API UGroup(const UGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGroup)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__groupName() { return STRUCT_OFFSET(UGroup, groupName); }


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_14_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Entity_Group_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
