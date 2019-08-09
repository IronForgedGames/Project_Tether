// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemCategory;
class UItem;
class UInventory;
#ifdef PROJECT_TETHER_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define PROJECT_TETHER_InventoryComponent_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItems) \
	{ \
		P_GET_OBJECT(UItemCategory,Z_Param_category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UItem*>*)Z_Param__Result=P_THIS->GetItems(Z_Param_category); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetQuantity) \
	{ \
		P_GET_OBJECT(UItem,Z_Param_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetQuantity(Z_Param_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract) \
	{ \
		P_GET_OBJECT(UItem,Z_Param_item); \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->Subtract(Z_Param_item,Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd) \
	{ \
		P_GET_OBJECT(UItem,Z_Param_item); \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->Add(Z_Param_item,Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UInventory**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItems) \
	{ \
		P_GET_OBJECT(UItemCategory,Z_Param_category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UItem*>*)Z_Param__Result=P_THIS->GetItems(Z_Param_category); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetQuantity) \
	{ \
		P_GET_OBJECT(UItem,Z_Param_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetQuantity(Z_Param_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtract) \
	{ \
		P_GET_OBJECT(UItem,Z_Param_item); \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->Subtract(Z_Param_item,Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdd) \
	{ \
		P_GET_OBJECT(UItem,Z_Param_item); \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->Add(Z_Param_item,Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UInventory**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__slots() { return STRUCT_OFFSET(UInventoryComponent, slots); }


#define Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_15_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Item_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
