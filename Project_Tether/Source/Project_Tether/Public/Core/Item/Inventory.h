// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/Core/Item/Item.h"
#include "Public/Core/Item/ItemCategory.h"
#include "UObject/NoExportTypes.h"
#include "Inventory.generated.h"

class UItem;
class UItemCategory;

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FSlot
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float quantity;
	
	UPROPERTY(EditAnywhere, Category = "Inventory")
	TSubclassOf<UItemCategory> category;
	
	UPROPERTY(EditAnywhere, Category = "Inventory")
	TSubclassOf<UItem> item;

	bool operator == (const FSlot& other) const
	{
		return this->item == other.item;
	}
};

FORCEINLINE uint32 GetTypeHash(const FSlot& other)
{
	return FCrc::MemCrc_DEPRECATED(&other, sizeof(FSlot));
}

UCLASS(Blueprintable)
class PROJECT_TETHER_API UInventory : public UObject
{
	GENERATED_BODY()

	UInventory();
	
protected:
	UPROPERTY(EditAnywhere, Category = "Inventory")
	TArray<FSlot> database;

public:
	TArray<FSlot> GetDatabase() { return database; }

	FSlot GetSlot(TSubclassOf<UItem> item);
	TArray<FSlot> GetSlots(TSubclassOf<UItemCategory> Category);
	float GetQuantity(TSubclassOf<UItem> item);

	float Add(TSubclassOf<UItem> item, float amount = 1.f);
	float Subtract(TSubclassOf<UItem> item, float amount = 1.f);
};

