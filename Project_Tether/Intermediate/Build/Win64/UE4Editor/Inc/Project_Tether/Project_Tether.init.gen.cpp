// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_Tether_init() {}
	PROJECT_TETHER_API UFunction* Z_Construct_UDelegateFunction_Project_Tether_StatChangedEvent__DelegateSignature();
	PROJECT_TETHER_API UFunction* Z_Construct_UDelegateFunction_Project_Tether_ModifierEvent__DelegateSignature();
	PROJECT_TETHER_API UFunction* Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature();
	PROJECT_TETHER_API UFunction* Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature();
	PROJECT_TETHER_API UFunction* Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Project_Tether()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Project_Tether_StatChangedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Project_Tether_ModifierEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Project_Tether_EntityEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Project_Tether_ToolEventSigniture__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Project_Tether",
				PKG_CompiledIn | 0x00000000,
				0x8E0CEB55,
				0x8B40E493,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
