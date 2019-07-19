// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectMacros.h"
#include "StatComponent.generated.h"

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FStat
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Stats")
	TSubclassOf<UStatType> statType;
	
	UPROPERTY(EditAnywhere, Category = "Stats")
	float minAmount;

	UPROPERTY(EditAnywhere, Category = "Stats")
	float maxAmount;
	
	UPROPERTY(EditAnywhere, Category = "Stats")
	float currentAmount;
};

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

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	FStat GetStat(TSubclassOf<UStatType> type);
	
	UFUNCTION(BlueprintCallable)
	float GetValue(TSubclassOf<UStatType> type);

	UFUNCTION(BlueprintCallable)
	float GetMaxValue(TSubclassOf<UStatType> type);

	UFUNCTION(BlueprintCallable)
	float GetMinValue(TSubclassOf<UStatType> type);

	UFUNCTION(BlueprintCallable)
	float SetValue(TSubclassOf<UStatType> type, float value);
	
	UFUNCTION(BlueprintCallable)
	float SetMaxValue(TSubclassOf<UStatType> type, float value);

	UFUNCTION(BlueprintCallable)
	float SetMinValue(TSubclassOf<UStatType> type, float value);
	
	UFUNCTION(BlueprintCallable)
	float ResetValue(TSubclassOf<UStatType> type);
	
	UFUNCTION(BlueprintCallable)
	float SetToMin(TSubclassOf<UStatType> type);

	UFUNCTION(BlueprintCallable)
	void ResetAll();
};
