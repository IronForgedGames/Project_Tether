
#include "InventoryComponent.h"
#include "Item.h"
#include "ItemCategory.h"

// test
#include "Runtime/Engine/Classes/Components/MeshComponent.h"


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

int UInventoryComponent::Add(UItem* item, int amount)
{
	for (int _i = 0; _i < slots.Num(); _i++)
	{
		FSlot* _slot = &slots[_i];

		if (_slot->item == item)
		{
			_slot->quantity += amount;
			if (_slot->quantity >= _slot->maxAmount && !_slot->unlimitedSpace)
			{
				_slot->quantity = _slot->maxAmount;
			}
			return _slot->quantity;
		}
	}

	slots.Add(FSlot(item, amount, FSlot::defaultMaxAmount));
	return amount;
}

int UInventoryComponent::Subtract(UItem* item, int amount)
{
	for (int _i = 0; _i < slots.Num(); _i++)
	{
		FSlot* _slot = &slots[_i];
		if (_slot->item == item)
		{
			_slot->quantity -= amount;
			if (_slot->quantity <= 0)
			{
				_slot->quantity = 0;
			}
			return _slot->quantity;
		}
	}
	return 0;
}

int UInventoryComponent::GetQuantity(UItem* item)
{
	for (int _i = 0; _i < slots.Num(); _i++)
	{
		FSlot* _slot = &slots[_i];
		if (_slot->item == item)
		{
			return _slot->quantity;
		}
	}
	return 0;
}

TArray<FSlot*> UInventoryComponent::GetSlots(UItemCategory* category)
{
	TArray<FSlot*> _result = TArray<FSlot*>();
	
	for (int _i = 0; _i < slots.Num(); _i++)
	{
		FSlot* _slot = &slots[_i];
		if (_slot->category == category)
		{
			_result.Add(_slot);
		}
	}

	return _result;
}

TArray<UItem*> UInventoryComponent::GetItems(UItemCategory* category)
{
	TArray<UItem*> _result = TArray<UItem*>();

	for (int i = 0; i < slots.Num(); i++)
	{
		if (slots[i].category == category)
		{
			_result.Add(slots[i].item);
		}
	}

	return _result;
}