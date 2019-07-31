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
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolDatabase_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UToolDatabase();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UToolDatabase_GetRandomToolSimpleByRarity();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UTool_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UPlayerClassType_NoRegister();
	PROJECT_TETHER_API UEnum* Z_Construct_UEnum_Project_Tether_FRarity();
// End Cross Module References
	void UToolDatabase::StaticRegisterNativesUToolDatabase()
	{
		UClass* Class = UToolDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomToolSimpleByRarity", &UToolDatabase::execGetRandomToolSimpleByRarity },
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EpicTools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EpicTools;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EpicTools_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegendaryTools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LegendaryTools;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LegendaryTools_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RareTools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RareTools;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RareTools_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnCommonTools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnCommonTools;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnCommonTools_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonTools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CommonTools;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommonTools_Inner;
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
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolDatabase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Tools/ToolDatabase.h" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolDatabase_Statics::NewProp_EpicTools_MetaData[] = {
		{ "Category", "ToolDatabase" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_EpicTools = { UE4CodeGen_Private::EPropertyClass::Array, "EpicTools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UToolDatabase, EpicTools), METADATA_PARAMS(Z_Construct_UClass_UToolDatabase_Statics::NewProp_EpicTools_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolDatabase_Statics::NewProp_EpicTools_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_EpicTools_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "EpicTools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolDatabase_Statics::NewProp_LegendaryTools_MetaData[] = {
		{ "Category", "ToolDatabase" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_LegendaryTools = { UE4CodeGen_Private::EPropertyClass::Array, "LegendaryTools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UToolDatabase, LegendaryTools), METADATA_PARAMS(Z_Construct_UClass_UToolDatabase_Statics::NewProp_LegendaryTools_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolDatabase_Statics::NewProp_LegendaryTools_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_LegendaryTools_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LegendaryTools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolDatabase_Statics::NewProp_RareTools_MetaData[] = {
		{ "Category", "ToolDatabase" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_RareTools = { UE4CodeGen_Private::EPropertyClass::Array, "RareTools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UToolDatabase, RareTools), METADATA_PARAMS(Z_Construct_UClass_UToolDatabase_Statics::NewProp_RareTools_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolDatabase_Statics::NewProp_RareTools_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_RareTools_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "RareTools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolDatabase_Statics::NewProp_UnCommonTools_MetaData[] = {
		{ "Category", "ToolDatabase" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_UnCommonTools = { UE4CodeGen_Private::EPropertyClass::Array, "UnCommonTools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UToolDatabase, UnCommonTools), METADATA_PARAMS(Z_Construct_UClass_UToolDatabase_Statics::NewProp_UnCommonTools_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolDatabase_Statics::NewProp_UnCommonTools_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_UnCommonTools_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "UnCommonTools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolDatabase_Statics::NewProp_CommonTools_MetaData[] = {
		{ "Category", "ToolDatabase" },
		{ "ModuleRelativePath", "Private/Core/Tools/ToolDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_CommonTools = { UE4CodeGen_Private::EPropertyClass::Array, "CommonTools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UToolDatabase, CommonTools), METADATA_PARAMS(Z_Construct_UClass_UToolDatabase_Statics::NewProp_CommonTools_MetaData, ARRAY_COUNT(Z_Construct_UClass_UToolDatabase_Statics::NewProp_CommonTools_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolDatabase_Statics::NewProp_CommonTools_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CommonTools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_EpicTools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_EpicTools_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_LegendaryTools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_LegendaryTools_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_RareTools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_RareTools_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_UnCommonTools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_UnCommonTools_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_CommonTools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolDatabase_Statics::NewProp_CommonTools_Inner,
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
	IMPLEMENT_CLASS(UToolDatabase, 1402556600);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToolDatabase(Z_Construct_UClass_UToolDatabase, &UToolDatabase::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UToolDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
