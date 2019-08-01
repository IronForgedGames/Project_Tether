// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Entity/Group.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroup() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UGroup_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UGroup();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UGroup_GetName();
// End Cross Module References
	void UGroup::StaticRegisterNativesUGroup()
	{
		UClass* Class = UGroup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetName", &UGroup::execGetName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGroup_GetName_Statics
	{
		struct Group_eventGetName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGroup_GetName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Group_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroup_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroup_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroup_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Public/Core/Entity/Group.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroup_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroup, "GetName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Group_eventGetName_Parms), Z_Construct_UFunction_UGroup_GetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGroup_GetName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroup_GetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGroup_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroup_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroup_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGroup_NoRegister()
	{
		return UGroup::StaticClass();
	}
	struct Z_Construct_UClass_UGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGroup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroup_GetName, "GetName" }, // 766947644
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Entity/Group.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Entity/Group.h" },
		{ "ToolTip", "Used to identify groups in a game. I.e Heros, Villians, NPC's ect.." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroup_Statics::NewProp_groupName_MetaData[] = {
		{ "Category", "Group Properties" },
		{ "ModuleRelativePath", "Public/Core/Entity/Group.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGroup_Statics::NewProp_groupName = { UE4CodeGen_Private::EPropertyClass::Str, "groupName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UGroup, groupName), METADATA_PARAMS(Z_Construct_UClass_UGroup_Statics::NewProp_groupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGroup_Statics::NewProp_groupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroup_Statics::NewProp_groupName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGroup_Statics::ClassParams = {
		&UGroup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGroup_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGroup, 2522469260);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGroup(Z_Construct_UClass_UGroup, &UGroup::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
