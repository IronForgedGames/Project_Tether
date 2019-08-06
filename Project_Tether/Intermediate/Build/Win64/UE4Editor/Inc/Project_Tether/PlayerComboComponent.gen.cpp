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
	PROJECT_TETHER_API UFunction* Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UPlayerComboComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UPlayerComboComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UPlayerComboComponent_OnCanTransition();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UPlayerComboComponent_OnInputRecieved();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UPlayerComboComponent_SetAnimations();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature_Statics
	{
		struct _Script_Project_Tether_eventAttackComboEventSignature_Parms
		{
			UAnimMontage* montage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature_Statics::NewProp_montage = { UE4CodeGen_Private::EPropertyClass::Object, "montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Project_Tether_eventAttackComboEventSignature_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Project_Tether, "AttackComboEventSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Project_Tether_eventAttackComboEventSignature_Parms), Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UPlayerComboComponent::StaticRegisterNativesUPlayerComboComponent()
	{
		UClass* Class = UPlayerComboComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCanTransition", &UPlayerComboComponent::execOnCanTransition },
			{ "OnInputRecieved", &UPlayerComboComponent::execOnInputRecieved },
			{ "OnMontageEnded", &UPlayerComboComponent::execOnMontageEnded },
			{ "OnMontageHit", &UPlayerComboComponent::execOnMontageHit },
			{ "SetAnimations", &UPlayerComboComponent::execSetAnimations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerComboComponent_OnCanTransition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerComboComponent_OnCanTransition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h" },
		{ "ToolTip", "should be called from blueprint as well as montage ended" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerComboComponent_OnCanTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerComboComponent, "OnCanTransition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerComboComponent_OnCanTransition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPlayerComboComponent_OnCanTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerComboComponent_OnCanTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerComboComponent_OnCanTransition_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded_Statics
	{
		struct PlayerComboComponent_eventOnMontageEnded_Parms
		{
			UAnimMontage* montage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded_Statics::NewProp_montage = { UE4CodeGen_Private::EPropertyClass::Object, "montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerComboComponent_eventOnMontageEnded_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerComboComponent, "OnMontageEnded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlayerComboComponent_eventOnMontageEnded_Parms), Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit_Statics
	{
		struct PlayerComboComponent_eventOnMontageHit_Parms
		{
			UAnimMontage* montage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit_Statics::NewProp_montage = { UE4CodeGen_Private::EPropertyClass::Object, "montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerComboComponent_eventOnMontageHit_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerComboComponent, "OnMontageHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlayerComboComponent_eventOnMontageHit_Parms), Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackHitEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_attackHitEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackEndedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_attackEndedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackStartedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_attackStartedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerComboComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerComboComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerComboComponent_OnCanTransition, "OnCanTransition" }, // 3378632478
		{ &Z_Construct_UFunction_UPlayerComboComponent_OnInputRecieved, "OnInputRecieved" }, // 2066940419
		{ &Z_Construct_UFunction_UPlayerComboComponent_OnMontageEnded, "OnMontageEnded" }, // 3309741893
		{ &Z_Construct_UFunction_UPlayerComboComponent_OnMontageHit, "OnMontageHit" }, // 659159951
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackHitEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackHitEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "attackHitEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UPlayerComboComponent, attackHitEvent), Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackHitEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackHitEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackEndedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackEndedEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "attackEndedEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UPlayerComboComponent, attackEndedEvent), Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackEndedEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackEndedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackStartedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackStartedEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "attackStartedEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UPlayerComboComponent, attackStartedEvent), Z_Construct_UDelegateFunction_Project_Tether_AttackComboEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackStartedEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackStartedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerComboComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackHitEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackEndedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerComboComponent_Statics::NewProp_attackStartedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerComboComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerComboComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerComboComponent_Statics::ClassParams = {
		&UPlayerComboComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UPlayerComboComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPlayerComboComponent_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UPlayerComboComponent, 2619058728);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerComboComponent(Z_Construct_UClass_UPlayerComboComponent, &UPlayerComboComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UPlayerComboComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerComboComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
