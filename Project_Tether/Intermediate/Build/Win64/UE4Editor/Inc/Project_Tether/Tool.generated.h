// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UWeaponType;
class UItem;
#ifdef PROJECT_TETHER_Tool_generated_h
#error "Tool.generated.h already included, missing '#pragma once' in Tool.h"
#endif
#define PROJECT_TETHER_Tool_generated_h

#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnimAlt_2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UAnimMontage> >*)Z_Param__Result=P_THIS->GetAnimAlt_2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimAlt_1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UAnimMontage> >*)Z_Param__Result=P_THIS->GetAnimAlt_1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStandardAnims) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UAnimMontage> >*)Z_Param__Result=P_THIS->GetStandardAnims(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeaponType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UWeaponType> *)Z_Param__Result=P_THIS->GetWeaponType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UItem> *)Z_Param__Result=P_THIS->GetItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRarity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<Rarity>*)Z_Param__Result=P_THIS->GetRarity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArmorSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ArmorSlot>*)Z_Param__Result=P_THIS->GetArmorSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUsage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<UsageType>*)Z_Param__Result=P_THIS->GetUsage(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimAlt_2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UAnimMontage> >*)Z_Param__Result=P_THIS->GetAnimAlt_2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimAlt_1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UAnimMontage> >*)Z_Param__Result=P_THIS->GetAnimAlt_1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStandardAnims) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UAnimMontage> >*)Z_Param__Result=P_THIS->GetStandardAnims(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeaponType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UWeaponType> *)Z_Param__Result=P_THIS->GetWeaponType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UItem> *)Z_Param__Result=P_THIS->GetItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRarity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<Rarity>*)Z_Param__Result=P_THIS->GetRarity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArmorSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ArmorSlot>*)Z_Param__Result=P_THIS->GetArmorSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUsage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<UsageType>*)Z_Param__Result=P_THIS->GetUsage(); \
		P_NATIVE_END; \
	}


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTool(); \
	friend struct Z_Construct_UClass_UTool_Statics; \
public: \
	DECLARE_CLASS(UTool, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UTool)


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUTool(); \
	friend struct Z_Construct_UClass_UTool_Statics; \
public: \
	DECLARE_CLASS(UTool, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project_Tether"), NO_API) \
	DECLARE_SERIALIZER(UTool)


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_STANDARD_CONSTRUCTORS \
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


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTool(UTool&&); \
	NO_API UTool(const UTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTool)


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__usageType() { return STRUCT_OFFSET(UTool, usageType); } \
	FORCEINLINE static uint32 __PPO__rarity() { return STRUCT_OFFSET(UTool, rarity); } \
	FORCEINLINE static uint32 __PPO__item() { return STRUCT_OFFSET(UTool, item); } \
	FORCEINLINE static uint32 __PPO__classType() { return STRUCT_OFFSET(UTool, classType); } \
	FORCEINLINE static uint32 __PPO__weaponType() { return STRUCT_OFFSET(UTool, weaponType); } \
	FORCEINLINE static uint32 __PPO__armorSlot() { return STRUCT_OFFSET(UTool, armorSlot); }


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_43_PROLOG
#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_RPC_WRAPPERS \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_INCLASS \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_PRIVATE_PROPERTY_OFFSET \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_INCLASS_NO_PURE_DECLS \
	Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Tether_Source_Project_Tether_Public_Core_Tools_Tool_h


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
