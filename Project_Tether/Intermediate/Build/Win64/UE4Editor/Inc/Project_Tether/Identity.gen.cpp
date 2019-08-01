// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Entity/Identity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdentity() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UIdentity_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UIdentity();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UIdentity_IsAncestorOf();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UIdentity_IsDecendantOf();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UGroup_NoRegister();
// End Cross Module References
	void UIdentity::StaticRegisterNativesUIdentity()
	{
		UClass* Class = UIdentity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAncestorOf", &UIdentity::execIsAncestorOf },
			{ "IsDecendantOf", &UIdentity::execIsDecendantOf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics
	{
		struct Identity_eventIsAncestorOf_Parms
		{
			UIdentity* decendant;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_decendant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Identity_eventIsAncestorOf_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Identity_eventIsAncestorOf_Parms), &Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::NewProp_decendant = { UE4CodeGen_Private::EPropertyClass::Object, "decendant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Identity_eventIsAncestorOf_Parms, decendant), Z_Construct_UClass_UIdentity_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::NewProp_decendant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIdentity, "IsAncestorOf", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Identity_eventIsAncestorOf_Parms), Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIdentity_IsAncestorOf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIdentity_IsAncestorOf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics
	{
		struct Identity_eventIsDecendantOf_Parms
		{
			UIdentity* ancestor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ancestor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Identity_eventIsDecendantOf_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Identity_eventIsDecendantOf_Parms), &Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::NewProp_ancestor = { UE4CodeGen_Private::EPropertyClass::Object, "ancestor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Identity_eventIsDecendantOf_Parms, ancestor), Z_Construct_UClass_UIdentity_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::NewProp_ancestor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIdentity, "IsDecendantOf", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Identity_eventIsDecendantOf_Parms), Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIdentity_IsDecendantOf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIdentity_IsDecendantOf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIdentity_NoRegister()
	{
		return UIdentity::StaticClass();
	}
	struct Z_Construct_UClass_UIdentity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_actorBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdentity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIdentity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIdentity_IsAncestorOf, "IsAncestorOf" }, // 2420969422
		{ &Z_Construct_UFunction_UIdentity_IsDecendantOf, "IsDecendantOf" }, // 3091951842
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdentity_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Entity/Identity.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
		{ "ToolTip", "Class used to identify entities" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdentity_Statics::NewProp_actorBlueprint_MetaData[] = {
		{ "Category", "Identity" },
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIdentity_Statics::NewProp_actorBlueprint = { UE4CodeGen_Private::EPropertyClass::Class, "actorBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000015, 1, nullptr, STRUCT_OFFSET(UIdentity, actorBlueprint), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UIdentity_Statics::NewProp_actorBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIdentity_Statics::NewProp_actorBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdentity_Statics::NewProp_group_MetaData[] = {
		{ "Category", "Identity" },
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIdentity_Statics::NewProp_group = { UE4CodeGen_Private::EPropertyClass::Object, "group", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UIdentity, group), Z_Construct_UClass_UGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIdentity_Statics::NewProp_group_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIdentity_Statics::NewProp_group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdentity_Statics::NewProp_parent_MetaData[] = {
		{ "Category", "Identity" },
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIdentity_Statics::NewProp_parent = { UE4CodeGen_Private::EPropertyClass::Object, "parent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UIdentity, parent), Z_Construct_UClass_UIdentity_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIdentity_Statics::NewProp_parent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIdentity_Statics::NewProp_parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdentity_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Identity" },
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIdentity_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UIdentity, name), METADATA_PARAMS(Z_Construct_UClass_UIdentity_Statics::NewProp_name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIdentity_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdentity_Statics::NewProp_actorBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdentity_Statics::NewProp_group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdentity_Statics::NewProp_parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdentity_Statics::NewProp_name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdentity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdentity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIdentity_Statics::ClassParams = {
		&UIdentity::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UIdentity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UIdentity_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UIdentity_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIdentity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIdentity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIdentity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIdentity, 2152997316);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIdentity(Z_Construct_UClass_UIdentity, &UIdentity::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UIdentity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIdentity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
