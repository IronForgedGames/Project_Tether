// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectMacros.h"
#include "VitalsComponent.generated.h"

class UIdentity;
class UStatComponent;
class UE_DamageType;
class UStatType;

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FDamageInfo
{
	GENERATED_USTRUCT_BODY()

	FDamageInfo(){}
	FDamageInfo(AActor* damageOwner, UIdentity* source, UE_DamageType* damageType, float amount, 
		bool isDOT = false, bool canStack = false, float damagePerTick = 0.f, float tickInterval = 0.f, float duration = 0.f)
	{
		this->damageOwner = damageOwner;
		this->source = source;
		this->damageType = damageType;
		this->amount = amount;

		this->isDOT = isDOT;
		this->canStack = canStack;
		this->damagePerTick = damagePerTick;
		this->tickInterval = tickInterval;
	}

	UE_DamageType* damageType;
	AActor* damageOwner;
	UIdentity* source;
	float amount;

	bool isDOT = false;
	bool canStack = false;
	float damagePerTick = 0.f;
	float tickInterval = 0.f;
	float duration = 0.f;

	float currentTime;
	float currentIntervalTime = 0.f;

	bool operator == (const FDamageInfo& other) const
	{
		return damageOwner == other.damageOwner;
	}
};

FORCEINLINE uint32 GetTypeHash(const FDamageInfo& other)
{
	return FCrc::MemCrc_DEPRECATED(&other, sizeof(FDamageInfo));
}

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FHealInfo
{
	GENERATED_USTRUCT_BODY();

	FHealInfo(){}
	FHealInfo(AActor* healOwner, UIdentity* source, float amount,
		bool isHOT = false, bool canStack = false, float healPerTick = 0.f, float tickInterval = 0.f, float duration = 0.f)
	{
		this->healOwner = healOwner;
		this->source = source;
		this->amount = amount;

		this->isHOT = isHOT;
		this->canStack = canStack;
		this->healPerTick = healPerTick;
		this->tickInterval = tickInterval;
		this->duration = duration;
	}

	AActor* healOwner;
	UIdentity* source;
	float amount;

	bool isHOT = false;
	bool canStack = false;
	float healPerTick = 0.f;
	float tickInterval = 0.f;
	float duration = 0.f;

	float currentTime = 0.f;
	float currentIntervalTime = 0.f;

	bool operator == (const FHealInfo& other) const
	{
		return healOwner == other.healOwner;
	}
};

FORCEINLINE uint32 GetTypeHash(const FHealInfo& other)
{
	return FCrc::MemCrc_DEPRECATED(&other, sizeof(FHealInfo));
}

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FResistanceModifier
{
	GENERATED_USTRUCT_BODY();

public:
	UPROPERTY(EditAnywhere, Category = "Resistance")
	UE_DamageType* damageType;

	UPROPERTY(EditAnywhere, Category = "Resistance")
	float multiplier;
};

UENUM()
enum Status
{
	Alive UMETA(DisplayName = "Alive"),
	Dead UMETA(DisplayName = "Dead")
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UVitalsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UVitalsComponent();

protected:
	virtual void BeginPlay() override;

	UStatComponent* statComponent;
	
	bool isInitialized = false;

	UStatType* healthStat;

	UPROPERTY(EditAnywhere, Category = "Status")
	TEnumAsByte<Status> status;
	
	UPROPERTY(EditAnywhere, Category = "Status")
	TArray<FResistanceModifier> resistanceModifiers;

	TArray<FDamageInfo> dots; // damage over time infos
	TArray<FHealInfo> hots; // heal over time infos

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Evaluate();
	void DamageOverTimeTick(float deltaTime);
	void HealOverTimeTick(float deltaTime);
	float ApplyResistance(FDamageInfo damageInfo);

	UFUNCTION(BlueprintCallable)
	bool DealDamage(FDamageInfo damageInfo, bool shouldDot = true);
	
	UFUNCTION(BlueprintCallable)
	bool KillImmediately(FDamageInfo damageInfo);

	UFUNCTION(BlueprintCallable)
	bool Heal(FHealInfo info);
	
	UFUNCTION(BlueprintCallable)
	bool HealAll();

	UFUNCTION(BlueprintCallable)
	float GetHealth();

private:
	float DealDamage(float amount); // used only internally
	float Heal(float amount); // used only internally
};
