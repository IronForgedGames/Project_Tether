// Fill out your copyright notice in the Description page of Project Settings.

#include "Inventory.h"
#include "Public/Core/Item/Item.h"
#include "Public/Core/Item/ItemCategory.h"

UInventory::UInventory()
{
}

int UInventory::Add(UItem* item, int amount)
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

int UInventory::Subtract(UItem* item, int amount)
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

int UInventory::GetQuantity(UItem* item)
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

TArray<FSlot*> UInventory::GetSlots(UItemCategory* category)
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

TArray<UItem*> UInventory::GetItems(UItemCategory* category)
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