// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether/Public/Implementation/Gameplay/PlayerController/Components/DashComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDashComponent() {}
// Cross Module References
	PROJECT_TETHER_API UFunction* Z_Construct_UDelegateFunction_Project_Tether_DashEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Project_Tether();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UDashComponent_NoRegister();
	PROJECT_TETHER_API UClass* Z_Construct_UClass_UDashComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UDashComponent_StartDash();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROJECT_TETHER_API UFunction* Z_Construct_UFunction_UDashComponent_StopDash();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Project_Tether_DashEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Project_Tether_DashEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Project_Tether_DashEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Project_Tether, "DashEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Project_Tether_DashEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Project_Tether_DashEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Project_Tether_DashEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Project_Tether_DashEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UDashComponent::StaticRegisterNativesUDashComponent()
	{
		UClass* Class = UDashComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartDash", &UDashComponent::execStartDash },
			{ "StopDash", &UDashComponent::execStopDash },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDashComponent_StartDash_Statics
	{
		struct DashComponent_eventStartDash_Parms
		{
			FVector currentVelocity;
			bool shouldRotate;
		};
		static void NewProp_shouldRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldRotate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currentVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDashComponent_StartDash_Statics::NewProp_shouldRotate_SetBit(void* Obj)
	{
		((DashComponent_eventStartDash_Parms*)Obj)->shouldRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDashComponent_StartDash_Statics::NewProp_shouldRotate = { UE4CodeGen_Private::EPropertyClass::Bool, "shouldRotate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DashComponent_eventStartDash_Parms), &Z_Construct_UFunction_UDashComponent_StartDash_Statics::NewProp_shouldRotate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDashComponent_StartDash_Statics::NewProp_currentVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "currentVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DashComponent_eventStartDash_Parms, currentVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDashComponent_StartDash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDashComponent_StartDash_Statics::NewProp_shouldRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDashComponent_StartDash_Statics::NewProp_currentVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDashComponent_StartDash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDashComponent_StartDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDashComponent, "StartDash", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(DashComponent_eventStartDash_Parms), Z_Construct_UFunction_UDashComponent_StartDash_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDashComponent_StartDash_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDashComponent_StartDash_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDashComponent_StartDash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDashComponent_StartDash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDashComponent_StartDash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDashComponent_StopDash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDashComponent_StopDash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDashComponent_StopDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDashComponent, "StopDash", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDashComponent_StopDash_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDashComponent_StopDash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDashComponent_StopDash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDashComponent_StopDash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDashComponent_NoRegister()
	{
		return UDashComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDashComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dashStoppedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_dashStoppedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dashStartedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_dashStartedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDashComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDashComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDashComponent_StartDash, "StartDash" }, // 4262424293
		{ &Z_Construct_UFunction_UDashComponent_StopDash, "StopDash" }, // 1172590134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDashComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Implementation/Gameplay/PlayerController/Components/DashComponent.h" },
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/DashComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDashComponent_Statics::NewProp_dashStoppedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDashComponent_Statics::NewProp_dashStoppedEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "dashStoppedEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UDashComponent, dashStoppedEvent), Z_Construct_UDelegateFunction_Project_Tether_DashEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDashComponent_Statics::NewProp_dashStoppedEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::NewProp_dashStoppedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDashComponent_Statics::NewProp_dashStartedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Implementation/Gameplay/PlayerController/Components/DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDashComponent_Statics::NewProp_dashStartedEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "dashStartedEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UDashComponent, dashStartedEvent), Z_Construct_UDelegateFunction_Project_Tether_DashEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDashComponent_Statics::NewProp_dashStartedEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::NewProp_dashStartedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDashComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashComponent_Statics::NewProp_dashStoppedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashComponent_Statics::NewProp_dashStartedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDashComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDashComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDashComponent_Statics::ClassParams = {
		&UDashComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UDashComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDashComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDashComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDashComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDashComponent, 3575078644);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDashComponent(Z_Construct_UClass_UDashComponent, &UDashComponent::StaticClass, TEXT("/Script/Project_Tether"), TEXT("UDashComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDashComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
