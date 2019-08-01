// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Private/Core/Tools/ToolDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolDatabase() {}
// Cross Module References
	PROJECT_TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FToolDataKey();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_FRarity();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UPlayerClassType_NoRegister();
	PROJECT_TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FToolDataSlot();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UTool_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolDatabase_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolDatabase();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity();
// End Cross Module References
class UScriptStruct* FToolDataKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECT_TETHER_API uint32 Get_Z_Construct_UScriptStruct_FToolDataKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolDataKey, Z_Construct_UPackage__Script_Project_Tether(), TEXT("ToolDataKey"), sizeof(FToolDataKey), Get_Z_Construct_UScriptStruct_FToolDataKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FToolDataKey(FToolDataKey::StaticStruct, TEXT("/Script/Project_Tether"), TEXT("ToolDataKey"), false, nullptr, nullptr);
static struct FScriptStruct_Project_Tether_StaticRegisterNativesFToolDataKey
{
	FScriptStruct_Project_Tether_StaticRegisterNativesFToolDataKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ToolDataKey")),new UScriptStruct::TCppStructOps<FToolDataKey>);
	}
} ScriptStruct_Project_Tether_StaticRegisterNativesFToolDataKey;
	struct Z_Construct_UScriptStruct_FToolDataKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolDataKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToolDataKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolDataKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolDataKey_Statics::NewProp_rarity_MetaData[] = {
		{ "Category", "ToolDataKey" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolDataKey_Statics::NewProp_rarity = { UE4CodeGen_Private::EPropertyClass::Byte, "rarity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FToolDataKey, rarity), Z_Construct_UEnum_Project_Tether_FRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolDataKey_Statics::NewProp_rarity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDataKey_Statics::NewProp_rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolDataKey_Statics::NewProp_playerClass_MetaData[] = {
		{ "Category", "ToolDataKey" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FToolDataKey_Statics::NewProp_playerClass = { UE4CodeGen_Private::EPropertyClass::Object, "playerClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FToolDataKey, playerClass), Z_Construct_UClass_UPlayerClassType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolDataKey_Statics::NewProp_playerClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDataKey_Statics::NewProp_playerClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolDataKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolDataKey_Statics::NewProp_rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolDataKey_Statics::NewProp_playerClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolDataKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
		nullptr,
		&NewStructOps,
		"ToolDataKey",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FToolDataKey),
		alignof(FToolDataKey),
		Z_Construct_UScriptStruct_FToolDataKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDataKey_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToolDataKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDataKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToolDataKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FToolDataKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ToolDataKey"), sizeof(FToolDataKey), Get_Z_Construct_UScriptStruct_FToolDataKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FToolDataKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FToolDataKey_CRC() { return 1431535285U; }
class UScriptStruct* FToolDataSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECT_TETHER_API uint32 Get_Z_Construct_UScriptStruct_FToolDataSlot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolDataSlot, Z_Construct_UPackage__Script_Project_Tether(), TEXT("ToolDataSlot"), sizeof(FToolDataSlot), Get_Z_Construct_UScriptStruct_FToolDataSlot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FToolDataSlot(FToolDataSlot::StaticStruct, TEXT("/Script/Project_Tether"), TEXT("ToolDataSlot"), false, nullptr, nullptr);
static struct FScriptStruct_Project_Tether_StaticRegisterNativesFToolDataSlot
{
	FScriptStruct_Project_Tether_StaticRegisterNativesFToolDataSlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ToolDataSlot")),new UScriptStruct::TCppStructOps<FToolDataSlot>);
	}
} ScriptStruct_Project_Tether_StaticRegisterNativesFToolDataSlot;
	struct Z_Construct_UScriptStruct_FToolDataSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tools;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tools_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolDataSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToolDataSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolDataSlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolDataSlot_Statics::NewProp_tools_MetaData[] = {
		{ "Category", "ToolDataSlot" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FToolDataSlot_Statics::NewProp_tools = { UE4CodeGen_Private::EPropertyClass::Array, "tools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FToolDataSlot, tools), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolDataSlot_Statics::NewProp_tools_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDataSlot_Statics::NewProp_tools_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FToolDataSlot_Statics::NewProp_tools_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "tools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolDataSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolDataSlot_Statics::NewProp_tools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolDataSlot_Statics::NewProp_tools_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolDataSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
		nullptr,
		&NewStructOps,
		"ToolDataSlot",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FToolDataSlot),
		alignof(FToolDataSlot),
		Z_Construct_UScriptStruct_FToolDataSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDataSlot_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToolDataSlot_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDataSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToolDataSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FToolDataSlot_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Tether();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ToolDataSlot"), sizeof(FToolDataSlot), Get_Z_Construct_UScriptStruct_FToolDataSlot_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FToolDataSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FToolDataSlot_CRC() { return 1307717552U; }
	void UToolDatabase::StaticRegisterNativesUToolDatabase()
	{
		UClass* Class = UToolDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomToolSimpleByRarity", &UToolDatabase::execGetRandomToolSimpleByRarity },
			{ "GetToolsOfClassType", &UToolDatabase::execGetToolsOfClassType },
			{ "GetToolsOfClassTypeAndRarity", &UToolDatabase::execGetToolsOfClassTypeAndRarity },
			{ "GetToolsOfRarity", &UToolDatabase::execGetToolsOfRarity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics
	{
		struct ToolDatabase_eventGetRandomToolSimpleByRarity_Parms
		{
			TEnumAsByte<FRarity> rarity;
			UPlayerClassType* playerClass;
			UTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolDatabase_eventGetRandomToolSimpleByRarity_Parms, ReturnValue), Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::NewProp_playerClass = { UE4CodeGen_Private::EPropertyClass::Object, "playerClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolDatabase_eventGetRandomToolSimpleByRarity_Parms, playerClass), Z_Construct_UClass_UPlayerClassType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::NewProp_rarity = { UE4CodeGen_Private::EPropertyClass::Byte, "rarity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolDatabase_eventGetRandomToolSimpleByRarity_Parms, rarity), Z_Construct_UEnum_Project_Tether_FRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::NewProp_playerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::NewProp_rarity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolDatabase, "GetRandomToolSimpleByRarity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolDatabase_eventGetRandomToolSimpleByRarity_Parms), Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics
	{
		struct ToolDatabase_eventGetToolsOfClassType_Parms
		{
			UPlayerClassType* playerClass;
			TArray<UTool*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolDatabase_eventGetToolsOfClassType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::NewProp_playerClass = { UE4CodeGen_Private::EPropertyClass::Object, "playerClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolDatabase_eventGetToolsOfClassType_Parms, playerClass), Z_Construct_UClass_UPlayerClassType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::NewProp_playerClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolDatabase, "GetToolsOfClassType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolDatabase_eventGetToolsOfClassType_Parms), Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics
	{
		struct ToolDatabase_eventGetToolsOfClassTypeAndRarity_Parms
		{
			UPlayerClassType* playerClass;
			TEnumAsByte<FRarity> rarity;
			TArray<UTool*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolDatabase_eventGetToolsOfClassTypeAndRarity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::NewProp_rarity = { UE4CodeGen_Private::EPropertyClass::Byte, "rarity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolDatabase_eventGetToolsOfClassTypeAndRarity_Parms, rarity), Z_Construct_UEnum_Project_Tether_FRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::NewProp_playerClass = { UE4CodeGen_Private::EPropertyClass::Object, "playerClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolDatabase_eventGetToolsOfClassTypeAndRarity_Parms, playerClass), Z_Construct_UClass_UPlayerClassType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::NewProp_rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::NewProp_playerClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolDatabase, "GetToolsOfClassTypeAndRarity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolDatabase_eventGetToolsOfClassTypeAndRarity_Parms), Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics
	{
		struct ToolDatabase_eventGetToolsOfRarity_Parms
		{
			TEnumAsByte<FRarity> rarity;
			TArray<UTool*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ToolDatabase_eventGetToolsOfRarity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::NewProp_rarity = { UE4CodeGen_Private::EPropertyClass::Byte, "rarity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ToolDatabase_eventGetToolsOfRarity_Parms, rarity), Z_Construct_UEnum_Project_Tether_FRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::NewProp_rarity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolDatabase, "GetToolsOfRarity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ToolDatabase_eventGetToolsOfRarity_Parms), Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UToolDatabase_NoRegister()
	{
		return UToolDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UToolDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_database_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_database;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_database_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_database_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToolDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity, "GetRandomToolSimpleByRarity" }, // 872083149
		{ &Z_Construct_UFunction_UToolDatabase_GetToolsOfClassType, "GetToolsOfClassType" }, // 568974763
		{ &Z_Construct_UFunction_UToolDatabase_GetToolsOfClassTypeAndRarity, "GetToolsOfClassTypeAndRarity" }, // 2444677773
		{ &Z_Construct_UFunction_UToolDatabase_GetToolsOfRarity, "GetToolsOfRarity" }, // 3599734610
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Tools/ToolDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolDatabase_Statics::NewProp_database_MetaData[] = {
		{ "Category", "ToolDatabase" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_database = { UE4CodeGen_Private::EPropertyClass::Map, "database", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UToolDatabase, database), METADATA_PARAMS(Z_Construct_UClass_UToolDatabase_Statics::NewProp_database_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolDatabase_Statics::NewProp_database_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_database_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "database_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UScriptStruct_FToolDataKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_database_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "database", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FToolDataSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_database,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_database_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_database_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToolDatabase_Statics::ClassParams = {
		&UToolDatabase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UToolDatabase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UToolDatabase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UToolDatabase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UToolDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToolDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToolDatabase, 3627997214);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToolDatabase(Z_Construct_UClass_UToolDatabase, &UToolDatabase::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UToolDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
