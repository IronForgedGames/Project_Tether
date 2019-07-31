// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Item.generated.h"

class UItemCategory;

/**
 * Identitfier for items
 */
UCLASS(Blueprintable)
class PROJECT_TETHER_API UItem : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	int value; 
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	FString name; 

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	UItemCategory* category; 
};
