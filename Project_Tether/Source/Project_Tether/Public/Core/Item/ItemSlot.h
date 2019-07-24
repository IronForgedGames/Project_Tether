// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Public/Core/Item/Item.h"
#include "ItemSlot.generated.h"

class UItem;

/**
 * 
 */
UCLASS(EditInlineNew, Blueprintable)
class PROJECT_TETHER_API UItemSlot : public UObject
{
	GENERATED_BODY()

public:
	UItemSlot();
	UItemSlot(TSubclassOf<UItem> item, int quantity);

public:
	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<UItem> item;
	
	UPROPERTY(EditAnywhere)
	int quantity;
};
