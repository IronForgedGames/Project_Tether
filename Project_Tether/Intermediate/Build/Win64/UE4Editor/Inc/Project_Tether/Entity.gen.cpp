// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Entity/Entity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntity() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UEntity_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UEntity();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UEntity_GetGroup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UGroup_NoRegister();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UEntity_GetId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UEntity_GetIdentity();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UIdentity_NoRegister();
// End Cross Module References
	void UEntity::StaticRegisterNativesUEntity()
	{
		UClass* Class = UEntity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGroup", &UEntity::execGetGroup },
			{ "GetId", &UEntity::execGetId },
			{ "GetIdentity", &UEntity::execGetIdentity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEntity_GetGroup_Statics
	{
		struct Entity_eventGetGroup_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEntity_GetGroup_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(Entity_eventGetGroup_Parms, ReturnValue), Z_Construct_UClass_UGroup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntity_GetGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntity_GetGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEntity_GetGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Entity" },
		{ "ModuleRelativePath", "Public/Core/Entity/Entity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntity_GetGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntity, "GetGroup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Entity_eventGetGroup_Parms), Z_Construct_UFunction_UEntity_GetGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEntity_GetGroup_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEntity_GetGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEntity_GetGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEntity_GetGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEntity_GetGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEntity_GetId_Statics
	{
		struct Entity_eventGetId_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEntity_GetId_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Entity_eventGetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntity_GetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntity_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEntity_GetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Entity" },
		{ "ModuleRelativePath", "Public/Core/Entity/Entity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntity_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntity, "GetId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Entity_eventGetId_Parms), Z_Construct_UFunction_UEntity_GetId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEntity_GetId_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEntity_GetId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEntity_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEntity_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEntity_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEntity_GetIdentity_Statics
	{
		struct Entity_eventGetIdentity_Parms
		{
			TSubclassOf<UIdentity>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEntity_GetIdentity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(Entity_eventGetIdentity_Parms, ReturnValue), Z_Construct_UClass_UIdentity_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntity_GetIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntity_GetIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEntity_GetIdentity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Entity" },
		{ "ModuleRelativePath", "Public/Core/Entity/Entity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntity_GetIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntity, "GetIdentity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Entity_eventGetIdentity_Parms), Z_Construct_UFunction_UEntity_GetIdentity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEntity_GetIdentity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEntity_GetIdentity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEntity_GetIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEntity_GetIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEntity_GetIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEntity_NoRegister()
	{
		return UEntity::StaticClass();
	}
	struct Z_Construct_UClass_UEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_identity_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_identity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEntity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEntity_GetGroup, "GetGroup" }, // 3584848344
		{ &Z_Construct_UFunction_UEntity_GetId, "GetId" }, // 1494947103
		{ &Z_Construct_UFunction_UEntity_GetIdentity, "GetIdentity" }, // 3382574719
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntity_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Core/Entity/Entity.h" },
		{ "ModuleRelativePath", "Public/Core/Entity/Entity.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntity_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Entity" },
		{ "ModuleRelativePath", "Public/Core/Entity/Entity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEntity_Statics::NewProp_id = { UE4CodeGen_Private::EPropertyClass::Struct, "id", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UEntity, id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UEntity_Statics::NewProp_id_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEntity_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntity_Statics::NewProp_identity_MetaData[] = {
		{ "Category", "Entity" },
		{ "ModuleRelativePath", "Public/Core/Entity/Entity.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEntity_Statics::NewProp_identity = { UE4CodeGen_Private::EPropertyClass::Class, "identity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UEntity, identity), Z_Construct_UClass_UIdentity_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEntity_Statics::NewProp_identity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEntity_Statics::NewProp_identity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntity_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntity_Statics::NewProp_identity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEntity_Statics::ClassParams = {
		&UEntity::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UEntity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEntity_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEntity_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEntity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEntity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEntity, 1781244441);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEntity(Z_Construct_UClass_UEntity, &UEntity::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UEntity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEntity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
