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

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FStat
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = "Stats")
	TSubclassOf<UStatType> statType;
	
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
	FStatModifier(TSubclassOf<UStatType> statType, TSubclassOf<UIdentity> source,
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

	TSubclassOf<UStatType> statType;
	TSubclassOf<UIdentity> source;

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

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Stats")
	TArray <FStat> stats;

	void TickModifiers(float deltaTime);
	float GetModifiedAmount(FStat* stat);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//UFUNCTION(BlueprintCallable)
	FStat* GetStat(TSubclassOf<UStatType> type);
	
	UFUNCTION(BlueprintCallable)
	float GetValue(TSubclassOf<UStatType> type);

	UFUNCTION(BlueprintCallable)
	float GetMaxValue(TSubclassOf<UStatType> type);

	UFUNCTION(BlueprintCallable)
	float GetMinValue(TSubclassOf<UStatType> type);

	UFUNCTION(BlueprintCallable)
	float SetValue(TSubclassOf<UStatType> type, float value);

	UFUNCTION(BlueprintCallable)
	float Add(TSubclassOf<UStatType> type, float value);

	UFUNCTION(BlueprintCallable)
	bool AddModifier(FStatModifier mod);

	UFUNCTION(BlueprintCallable)
	void RemoveModifier(TSubclassOf<UIdentity> source);

	UFUNCTION(BlueprintCallable)
	void RemoveAllModifiersForStat(TSubclassOf<UStatType> type);

	UFUNCTION(BlueprintCallable)
	void RemoveAllModifiers();
	
	UFUNCTION(BlueprintCallable)
	float Subtract(TSubclassOf<UStatType> type, float value);
	
	UFUNCTION(BlueprintCallable)
	float SetMaxValue(TSubclassOf<UStatType> type, float value);

	UFUNCTION(BlueprintCallable)
	float SetMinValue(TSubclassOf<UStatType> type, float value);
	
	UFUNCTION(BlueprintCallable)
	float SetToMax(TSubclassOf<UStatType> type);
	
	UFUNCTION(BlueprintCallable)
	float SetToMin(TSubclassOf<UStatType> type);

	UFUNCTION(BlueprintCallable)
	void ResetAll();
};
