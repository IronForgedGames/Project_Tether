// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "E_GameInstance.generated.h"

class UEntityManager;

/**
 * 
 */
UCLASS()
class PROJECT_TETHER_API UE_GameInstance : public UGameInstance
{
	GENERATED_BODY()
	
protected:
	
	UEntityManager* entityManager; // generated

	UPROPERTY(EditAnywhere)
	UInventory* inventory; // dataasset
	
public:
	UFUNCTION(BlueprintCallable)
	UEntityManager* GetEntityManager();
	
	UFUNCTION(BlueprintCallable)
	UInventory* GetInventory();
	
};
