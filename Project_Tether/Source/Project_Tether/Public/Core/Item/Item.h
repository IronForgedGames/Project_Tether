// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

class UItemCategory;

/**
 * 
 */
UCLASS(Blueprintable)
class PROJECT_TETHER_API UItem : public UObject
{
	GENERATED_BODY()

	UItem();
	
protected:
	UPROPERTY(EditAnywhere, Category = "Item")
	float value; // monetary value
	
	UPROPERTY(EditAnywhere, Category = "Item")
	FString name; // name of the item

	UPROPERTY(EditAnywhere, Category = "Item")
	TSubclassOf<UItemCategory> category; // what is this? Consumable, weapon?

public:
	float GetValue() { return value; }
	FString GetName() { return name; }
	TSubclassOf<UItemCategory> GetCategory() { return category; }
};
