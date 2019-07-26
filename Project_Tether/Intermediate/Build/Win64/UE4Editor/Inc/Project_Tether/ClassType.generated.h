// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_TETHER_ClassType_generated_h
#error "ClassType.generated.h already included, missing '#pragma once' in ClassType.h"
#endif
#define PROJECT_TETHER_ClassType_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetClassName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetClassName(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetClassName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetClassName(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClassType(); \
	friend struct Z_Construct_UClass_UClassType_Statics; \
public: \
	DECLARE_CLASS(UClassType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UClassType)


#define Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUClassType(); \
	friend struct Z_Construct_UClass_UClassType_Statics; \
public: \
	DECLARE_CLASS(UClassType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UClassType)


#define Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClassType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClassType(UClassType&&); \
	NO_API UClassType(const UClassType&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClassType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClassType(UClassType&&); \
	NO_API UClassType(const UClassType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassType); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassType)


#define Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__className() { return STRUCT_OFFSET(UClassType, className); }


#define Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_13_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Class_ClassType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
