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
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UIdentity_GetActorBlueprint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UIdentity_GetGroup();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UGroup_NoRegister();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UIdentity_GetName();
// End Cross Module References
	void UIdentity::StaticRegisterNativesUIdentity()
	{
		UClass* Class = UIdentity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorBlueprint", &UIdentity::execGetActorBlueprint },
			{ "GetGroup", &UIdentity::execGetGroup },
			{ "GetName", &UIdentity::execGetName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIdentity_GetActorBlueprint_Statics
	{
		struct Identity_eventGetActorBlueprint_Parms
		{
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UIdentity_GetActorBlueprint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(Identity_eventGetActorBlueprint_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIdentity_GetActorBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIdentity_GetActorBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdentity_GetActorBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIdentity_GetActorBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIdentity, "GetActorBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Identity_eventGetActorBlueprint_Parms), Z_Construct_UFunction_UIdentity_GetActorBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIdentity_GetActorBlueprint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIdentity_GetActorBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIdentity_GetActorBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIdentity_GetActorBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIdentity_GetActorBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIdentity_GetGroup_Statics
	{
		struct Identity_eventGetGroup_Parms
		{
			TSubclassOf<UGroup>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UIdentity_GetGroup_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(Identity_eventGetGroup_Parms, ReturnValue), Z_Construct_UClass_UGroup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIdentity_GetGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIdentity_GetGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdentity_GetGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIdentity_GetGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIdentity, "GetGroup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Identity_eventGetGroup_Parms), Z_Construct_UFunction_UIdentity_GetGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIdentity_GetGroup_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIdentity_GetGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIdentity_GetGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIdentity_GetGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIdentity_GetGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIdentity_GetName_Statics
	{
		struct Identity_eventGetName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIdentity_GetName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Identity_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIdentity_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIdentity_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdentity_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIdentity_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIdentity, "GetName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Identity_eventGetName_Parms), Z_Construct_UFunction_UIdentity_GetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UIdentity_GetName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIdentity_GetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UIdentity_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIdentity_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIdentity_GetName_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdentity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIdentity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIdentity_GetActorBlueprint, "GetActorBlueprint" }, // 2892514363
		{ &Z_Construct_UFunction_UIdentity_GetGroup, "GetGroup" }, // 3737198073
		{ &Z_Construct_UFunction_UIdentity_GetName, "GetName" }, // 521894803
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
		{ "Category", "Group Properties" },
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIdentity_Statics::NewProp_actorBlueprint = { UE4CodeGen_Private::EPropertyClass::Class, "actorBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UIdentity, actorBlueprint), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UIdentity_Statics::NewProp_actorBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIdentity_Statics::NewProp_actorBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdentity_Statics::NewProp_group_MetaData[] = {
		{ "Category", "Group Properties" },
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIdentity_Statics::NewProp_group = { UE4CodeGen_Private::EPropertyClass::Class, "group", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UIdentity, group), Z_Construct_UClass_UGroup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UIdentity_Statics::NewProp_group_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIdentity_Statics::NewProp_group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdentity_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Group Properties" },
		{ "ModuleRelativePath", "Public/Core/Entity/Identity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIdentity_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UIdentity, name), METADATA_PARAMS(Z_Construct_UClass_UIdentity_Statics::NewProp_name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIdentity_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdentity_Statics::NewProp_actorBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdentity_Statics::NewProp_group,
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
	IMPLEMENT_CLASS(UIdentity, 4136563776);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIdentity(Z_Construct_UClass_UIdentity, &UIdentity::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UIdentity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIdentity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
