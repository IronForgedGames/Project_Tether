// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryComponent.h"
#include "ItemSlot.h"
#include "Item.h"


// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

int UInventoryComponent::Add(TSubclassOf<UItem> item, int amount)
{
	for (int _i = 0; _i < slots.Num(); _i++)
	{
		UItemSlot* _slot = &slots[_i];

		if (_slot->item == item)
		{
			_slot->quantity += amount;
			return _slot->quantity;
		}
	}

	slots.Add(UItemSlot(item, amount));
	return amount;
}

