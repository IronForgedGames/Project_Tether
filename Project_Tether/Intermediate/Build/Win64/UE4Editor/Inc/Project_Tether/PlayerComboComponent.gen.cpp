// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerComboComponent() {}
// Cross Module References
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UPlayerComboComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UPlayerComboComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UPlayerComboComponent_OnInputRecieved();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UPlayerComboComponent_SetAnimations();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UPlayerComboComponent::StaticRegisterNativesUPlayerComboComponent()
	{
		UClass* Class = UPlayerComboComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInputRecieved", &UPlayerComboComponent::execOnInputRecieved },
			{ "SetAnimations", &UPlayerComboComponent::execSetAnimations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerComboComponent_OnInputRecieved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerComboComponent_OnInputRecieved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerComboComponent_OnInputRecieved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerComboComponent, "OnInputRecieved", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerComboComponent_OnInputRecieved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPlayerComboComponent_OnInputRecieved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerComboComponent_OnInputRecieved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerComboComponent_OnInputRecieved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics
	{
		struct PlayerComboComponent_eventSetAnimations_Parms
		{
			TArray<UAnimMontage*> animations;
			int32 blendspaceIndex;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_blendspaceIndex;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_animations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::NewProp_blendspaceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "blendspaceIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerComboComponent_eventSetAnimations_Parms, blendspaceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::NewProp_animations = { UE4CodeGen_Private::EPropertyClass::Array, "animations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerComboComponent_eventSetAnimations_Parms, animations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::NewProp_animations_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "animations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::NewProp_blendspaceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::NewProp_animations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::NewProp_animations_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_blendspaceIndex", "0" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerComboComponent, "SetAnimations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlayerComboComponent_eventSetAnimations_Parms), Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerComboComponent_SetAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerComboComponent_SetAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerComboComponent_NoRegister()
	{
		return UPlayerComboComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerComboComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerComboComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerComboComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerComboComponent_OnInputRecieved, "OnInputRecieved" }, // 2066940419
		{ &Z_Construct_UFunction_UPlayerComboComponent_SetAnimations, "SetAnimations" }, // 4175481664
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerComboComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerComboComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerComboComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerComboComponent_Statics::ClassParams = {
		&UPlayerComboComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerComboComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerComboComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerComboComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerComboComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerComboComponent, 2476728419);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerComboComponent(Z_Construct_UClass_UPlayerComboComponent, &UPlayerComboComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UPlayerComboComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerComboComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
