// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_TETHER_IEntity_generated_h
#error "IEntity.generated.h already included, missing '#pragma once' in IEntity.h"
#endif
#define PROJECT_TETHER_IEntity_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_RPC_WRAPPERS
#define Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECT_TETHER_API UIEntity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIEntity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECT_TETHER_API, UIEntity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIEntity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROJECT_TETHER_API UIEntity(UIEntity&&); \
	PROJECT_TETHER_API UIEntity(const UIEntity&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECT_TETHER_API UIEntity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROJECT_TETHER_API UIEntity(UIEntity&&); \
	PROJECT_TETHER_API UIEntity(const UIEntity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECT_TETHER_API, UIEntity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIEntity); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIEntity)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIEntity(); \
	friend struct Z_Construct_UClass_UIEntity_Statics; \
public: \
	DECLARE_CLASS(UIEntity, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Project_Tether"), PROJECT_TETHER_API) \
	DECLARE_SERIALIZER(UIEntity)


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_GENERATED_UINTERFACE_BODY() \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_GENERATED_UINTERFACE_BODY() \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIEntity() {} \
public: \
	typedef UIEntity UClassType; \
	typedef IIEntity ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIEntity() {} \
public: \
	typedef UIEntity UClassType; \
	typedef IIEntity ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_10_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Entity_IEntity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
