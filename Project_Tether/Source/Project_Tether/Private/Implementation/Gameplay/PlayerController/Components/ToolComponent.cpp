// Fill out your copyright notice in the Description page of Project Settings.

#include "ToolComponent.h"
#include "TopDown_E_Character.h"
#include "Tool.h"
#include "Public/Core/Item/InventoryComponent.h"

UToolComponent::UToolComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UToolComponent::BeginPlay()
{
	Super::BeginPlay();

	playerInventory = Cast<UInventoryComponent>(GetOwner()->GetComponentByClass(UInventoryComponent::StaticClass()));

	equippedWeapons.Add(FHandedness::RightHanded, FToolData());
	equippedWeapons.Add(FHandedness::LeftHanded, FToolData());
	equippedWeapons.Add(FHandedness::TwoHanded, FToolData());

	equippedArmor.Add(FArmorSlot::Head, FToolData());
	equippedArmor.Add(FArmorSlot::Torso, FToolData());
	equippedArmor.Add(FArmorSlot::Arms, FToolData());
	equippedArmor.Add(FArmorSlot::Legs, FToolData());

	for (auto& _item : defaultWeapons)
	{
		AddTool(CreateToolInstance(_item));
	}

	for (auto& _armor : defaultArmor)
	{
		nudeArmor.Add(_armor.Key, CreateToolInstance(_armor.Value));
	}
}

void UToolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

int UToolComponent::GetCurrentPowerRating()
{
	return 0;
}

FToolData UToolComponent::CreateToolInstance(UTool* toolBase)
{
	FToolData _result = FToolData();
	_result.toolBase = toolBase;
	_result.power = 100.f; // TODO : update this
	

	return _result;
}

bool UToolComponent::AddTool(FToolData newTool)
{
	if (newTool.toolBase == nullptr)
	{
		return false;
	}

	if (newTool.toolBase->classType != nullptr/* && newTool.toolBase->classType == classType*/)
	{
		if (newTool.toolBase->usageType == FUsageType::Armor)
		{
			armor.Add(newTool);
			toolAdded.Broadcast(newTool);

			if(playerInventory != nullptr && newTool.toolBase->item != NULL)
			{
				playerInventory->Add(newTool.toolBase->item);
			}
			return true;
		}
		else if(newTool.toolBase->usageType == FUsageType::Weapon)
		{
			weapons.Add(newTool);
			toolAdded.Broadcast(newTool);

			if (playerInventory != nullptr && newTool.toolBase->item != NULL)
			{
				playerInventory->Add(newTool.toolBase->item);
			}
			return true;
		}
	}
	return false;
}

bool UToolComponent::RemoveTool(FToolData toolToRemove)
{
	if (toolToRemove.toolBase->usageType == FUsageType::Armor)
	{
		if (armor.Contains(toolToRemove))
		{
			if (equippedArmor[toolToRemove.toolBase->armorSlot] == toolToRemove)
			{
				UnequipArmor(toolToRemove);
			}

			armor.Remove(toolToRemove);
			toolRemoved.Broadcast(toolToRemove);
			if (playerInventory != nullptr && toolToRemove.toolBase->item != NULL)
			{
				playerInventory->Subtract(toolToRemove.toolBase->item);
			}
			return true;
		}
	}
	else if (toolToRemove.toolBase->usageType == FUsageType::Weapon)
	{
		if (weapons.Contains(toolToRemove))
		{
			if (equippedWeapons[toolToRemove.toolBase->handedness] == toolToRemove)
			{
				UnequipWeapon(toolToRemove);
			}

			weapons.Remove(toolToRemove);
			toolRemoved.Broadcast(toolToRemove);
			if (playerInventory != nullptr && toolToRemove.toolBase->item != NULL)
			{
				playerInventory->Subtract(toolToRemove.toolBase->item);
			}
			return true;
		}
	}
	return false;
}

FToolData UToolComponent::EquipDefaultWeapon(FHandedness hand)
{
	if (weapons.Num() > 0)
	{
		for (auto& _item : weapons)
		{
			if (_item.toolBase->handedness == hand)
			{
				return EquipWeapon(_item);
			}
		}
	}

	return FToolData();
}

FToolData UToolComponent::EquipDefaultArmor()
{
	return FToolData();
}

FToolData UToolComponent::EquipWeapon(FToolData weapon)
{
	if (weapon.toolBase == nullptr)
	{
		return FToolData();
	}

	if (weapon.toolBase->usageType != FUsageType::Weapon)
	{
		return FToolData();
	}

	if (!weapons.Contains(weapon))
	{
		return FToolData();
	}

	if (weapon.toolBase->handedness == FHandedness::TwoHanded)
	{
		UnequipWeapon(equippedWeapons[FHandedness::TwoHanded]);
		UnequipWeapon(equippedWeapons[FHandedness::LeftHanded]);
		UnequipWeapon(equippedWeapons[FHandedness::RightHanded]);

		equippedWeapons[FHandedness::TwoHanded] = weapon;
	}

	else if (weapon.toolBase->handedness == FHandedness::RightHanded)
	{
		UnequipWeapon(equippedWeapons[FHandedness::TwoHanded]);
		UnequipWeapon(equippedWeapons[FHandedness::RightHanded]);

		equippedWeapons[FHandedness::RightHanded] = weapon;
	}
	else if (weapon.toolBase->handedness == FHandedness::LeftHanded)
	{
		UnequipWeapon(equippedWeapons[FHandedness::TwoHanded]);
		UnequipWeapon(equippedWeapons[FHandedness::LeftHanded]);
		
		equippedWeapons[FHandedness::LeftHanded] = weapon;
	}
	
	weaponEqipped.Broadcast(weapon);
	return weapon;
}

FToolData UToolComponent::UnequipWeapon(FToolData weapon)
{
	if (weapon.toolBase == nullptr)
	{
		return FToolData();
	}

	if (weapon.toolBase->usageType != FUsageType::Weapon)
	{
		return FToolData();
	}

	if (!weapons.Contains(weapon))
	{
		return FToolData();
	}

	equippedWeapons[weapon.toolBase->handedness] = FToolData();
	weaponUeqipped.Broadcast(weapon);
	return weapon;
}

FToolData UToolComponent::EquipArmor(FToolData armorToEquip)
{
	if (armorToEquip.toolBase->classType != classType)
	{
		return FToolData();
	}

	if (armorToEquip.toolBase->usageType != FUsageType::Armor)
	{
		return FToolData();
	}

	if (!this->armor.Contains(armorToEquip))
	{
		return FToolData();
	}

	if (equippedArmor[armorToEquip.toolBase->armorSlot] != nudeArmor[armorToEquip.toolBase->armorSlot])
	{
		UnequipArmor(equippedArmor[armorToEquip.toolBase->armorSlot]);
		equippedArmor[armorToEquip.toolBase->armorSlot] = armorToEquip;
		armorEqipped.Broadcast(armorToEquip);
	}

	return FToolData();
}

FToolData UToolComponent::UnequipArmor(FToolData armorToUnequip)
{
	if (armorToUnequip.toolBase == nullptr)
	{
		return FToolData();
	}

	if (armorToUnequip.toolBase->usageType != FUsageType::Armor)
	{
		return FToolData();
	}

	if (!this->armor.Contains(armorToUnequip))
	{
		return FToolData();
	}

	equippedArmor[armorToUnequip.toolBase->armorSlot] = FToolData();
	armorUeqipped.Broadcast(armorToUnequip);
	return FToolData();
}

FToolData UToolComponent::SwapWeapons(FHandedness hand, int direction)
{
	FToolData _current = equippedWeapons[hand];
	
	if (_current.toolBase == nullptr)
	{
		return FToolData();
	}
	
	for (int i = 0; i < weapons.Num(); i++)
	{
		FToolData* _currentInteration = &weapons[i];

		if (_currentInteration->toolBase == _current.toolBase)
		{
			int _next = i + (1 * direction);

			if (_next >= weapons.Num())
			{
				_next = 0;
			}
			else if(_next < 0)
			{
				_next = weapons.Num() - 1;
			}
			
			while (&weapons[_next] != _currentInteration)
			{
				if (weapons[_next].toolBase->handedness == hand)
				{
					return EquipWeapon(weapons[_next]);
				}
				_next += 1 * direction;
				
				if (_next >= weapons.Num())
				{
					_next = 0;
				}
				else if (_next < 0)
				{
					_next = weapons.Num() - 1;
				}
			}
		}
	}
	
	return FToolData();
}

FToolData UToolComponent::SwapArmor(FArmorSlot slot, int direction)
{
	FToolData _current = equippedArmor[slot];

	if (_current.toolBase == nullptr)
	{
		return FToolData();
	}

	for (int i = 0; i < armor.Num(); i++)
	{
		FToolData* _currentInteration = &armor[i];

		if (_currentInteration->toolBase == _current.toolBase)
		{
			int _next = i + (1 * direction);

			if (_next >= armor.Num())
			{
				_next = 0;
			}
			else if (_next < 0)
			{
				_next = armor.Num() - 1;
			}

			while (&armor[_next] != _currentInteration)
			{
				if (armor[_next].toolBase->armorSlot == slot)
				{
					return EquipArmor(armor[_next]);
				}
				_next += 1 * direction;

				if (_next >= armor.Num())
				{
					_next = 0;
				}
				else if (_next < 0)
				{
					_next = armor.Num() - 1;
				}
			}
		}
	}
	return FToolData();
}