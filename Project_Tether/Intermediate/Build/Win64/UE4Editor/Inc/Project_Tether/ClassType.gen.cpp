// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Core/Class/ClassType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassType() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UClassType_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UClassType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UClassType_GetClassName();
// End Cross Module References
	void UClassType::StaticRegisterNativesUClassType()
	{
		UClass* Class = UClassType::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClassName", &UClassType::execGetClassName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClassType_GetClassName_Statics
	{
		struct ClassType_eventGetClassName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UClassType_GetClassName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ClassType_eventGetClassName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClassType_GetClassName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClassType_GetClassName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClassType_GetClassName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Class/ClassType.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClassType_GetClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClassType, "GetClassName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ClassType_eventGetClassName_Parms), Z_Construct_UFunction_UClassType_GetClassName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UClassType_GetClassName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClassType_GetClassName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UClassType_GetClassName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClassType_GetClassName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClassType_GetClassName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClassType_NoRegister()
	{
		return UClassType::StaticClass();
	}
	struct Z_Construct_UClass_UClassType_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_className_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_className;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClassType_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClassType_GetClassName, "GetClassName" }, // 3673141087
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Class/ClassType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Class/ClassType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassType_Statics::NewProp_className_MetaData[] = {
		{ "Category", "Class" },
		{ "ModuleRelativePath", "Public/Core/Class/ClassType.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UClassType_Statics::NewProp_className = { UE4CodeGen_Private::EPropertyClass::Str, "className", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UClassType, className), METADATA_PARAMS(Z_Construct_UClass_UClassType_Statics::NewProp_className_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClassType_Statics::NewProp_className_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClassType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassType_Statics::NewProp_className,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClassType_Statics::ClassParams = {
		&UClassType::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UClassType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UClassType_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UClassType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClassType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClassType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClassType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClassType, 2589993507);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClassType(Z_Construct_UClass_UClassType, &UClassType::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UClassType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
