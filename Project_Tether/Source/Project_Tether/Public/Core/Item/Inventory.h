// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/Core/Item/Item.h"
#include "Public/Core/Item/ItemCategory.h"
#include "Engine/DataAsset.h"
#include "Inventory.generated.h"

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FSlot
{
	GENERATED_USTRUCT_BODY()

	FSlot() {}
	FSlot(UItem* item, int amount, int maxAmount, bool unlimitedSpace = true)
	{
		this->item = item;
		this->quantity = amount;
		this->maxAmount = maxAmount;
		this->unlimitedSpace = unlimitedSpace;

		this->category = item->category;
	}

	static int const defaultMaxAmount = 100;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float quantity;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	UItemCategory* category;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	UItem* item;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	bool unlimitedSpace;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	int maxAmount;

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
class PROJECT_TETHER_API UInventory : public UDataAsset
{
	GENERATED_BODY()

	UInventory();

protected:
	UPROPERTY(EditAnywhere)
	TArray<FSlot> slots;

public:
	UFUNCTION(BlueprintCallable)
	int Add(UItem* item, int amount = 1);

	UFUNCTION(BlueprintCallable)
	int Subtract(UItem* item, int amount = 1);

	UFUNCTION(BlueprintCallable)
	int GetQuantity(UItem* item);

	UFUNCTION(BlueprintCallable)
	TArray<UItem*> GetItems(UItemCategory* category);

	TArray<FSlot*> GetSlots(UItemCategory* category);
};

