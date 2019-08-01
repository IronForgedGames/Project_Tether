// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Entity/Identity.h"
#include "Public/Core/Components/Stats/StatType.h"
#include "ObjectMacros.h"
#include "StatComponent.generated.h"

class UIdentity;
class UStatType;
struct FStatModifier;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatChangedEvent, UStatType*, statType);

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FStat
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = "Stats")
	UStatType* statType;
	
	UPROPERTY(EditAnywhere, Category = "Stats")
	float minAmount;

	UPROPERTY(EditAnywhere, Category = "Stats")
	float maxAmount;
	
	UPROPERTY(EditAnywhere, Category = "Stats")
	float currentAmount;

	TArray<FStatModifier> modifiers;

	bool operator == (const FStat& other) const
	{
		return statType == other.statType;
	}
};

FORCEINLINE uint32 GetTypeHash(const FStat& other)
{
	return FCrc::MemCrc_DEPRECATED(&other, sizeof(FStat));
}

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FStatModifier
{
	GENERATED_USTRUCT_BODY()

	FStatModifier(){}
	FStatModifier(UStatType* statType, UIdentity* source,
		bool canStack = false, bool usePercentage = false, float percentage = 0.f, float amount = 0.f, float duration = 0.f, bool indefinite = false)
	{
		this->statType = statType;
		this->source = source;
		this->canStack = canStack;
		this->usePercentage = false;
		this->percentage = percentage;
		this->amount = amount;
		this->duration = duration;
		this->indefinite = indefinite;
	}

	UStatType* statType;
	UIdentity* source;

	bool canStack = false;
	bool usePercentage = false;
	
	float percentage = 0.f;
	float amount = 0.f;
	float duration = 0.f;
	bool indefinite = false;

	float currentTime = 0.f;

	bool operator == (const FStatModifier& other) const
	{
		return source == other.source;
	}
};

FORCEINLINE uint32 GetTypeHash(const FStatModifier& other)
{
	return FCrc::MemCrc_DEPRECATED(&other, sizeof(FStatModifier));
}

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FModifierEvent, UStatType*, statType, FStatModifier, statModifier);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UStatComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Stats")
	TArray <FStat> stats;

	void TickModifiers(float deltaTime);
	float GetModifiedAmount(FStat* stat);

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable)
	FStatChangedEvent statChangedEvent;

	UPROPERTY(BlueprintAssignable)
	FModifierEvent modifierAddedEvent;
	
	UPROPERTY(BlueprintAssignable)
	FModifierEvent modifierRemovedEvent;

	FStat* GetStat(UStatType* type);

	UFUNCTION(BlueprintCallable)
	float GetValue(UStatType* type);

	UFUNCTION(BlueprintCallable)
	float GetMaxValue(UStatType* type);

	UFUNCTION(BlueprintCallable)
	float GetMinValue(UStatType* type);

	UFUNCTION(BlueprintCallable)
	float SetValue(UStatType* type, float value);

	UFUNCTION(BlueprintCallable)
	float Add(UStatType* type, float value);

	UFUNCTION(BlueprintCallable)
	bool AddModifier(FStatModifier mod);

	UFUNCTION(BlueprintCallable)
	void RemoveModifier(UIdentity* source);

	UFUNCTION(BlueprintCallable)
	void RemoveAllModifiersForStat(UStatType* type);

	UFUNCTION(BlueprintCallable)
	void RemoveAllModifiers();
	
	UFUNCTION(BlueprintCallable)
	float Subtract(UStatType* type, float value);
	
	UFUNCTION(BlueprintCallable)
	float SetMaxValue(UStatType* type, float value);

	UFUNCTION(BlueprintCallable)
	float SetMinValue(UStatType* type, float value);
	
	UFUNCTION(BlueprintCallable)
	float SetToMax(UStatType* type);
	
	UFUNCTION(BlueprintCallable)
	float SetToMin(UStatType* type);

	UFUNCTION(BlueprintCallable)
	void ResetAll();
};
