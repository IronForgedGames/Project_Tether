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


	// set up the default weapons
	for (auto& _item : defaultWeapons)
	{
		AddTool(CreateToolInstance(_item.Value));
	}

	if (weapons.Num() > 0)
	{
		EquipWeapon(weapons[0]);
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
	// average of all tools
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
	if (newTool.toolBase->classType != nullptr && newTool.toolBase->classType == classType)
	{
		if (newTool.toolBase->usageType == FUsageType::Armor)
		{
			if (!armor.Contains(newTool))
			{
				armor.Add(newTool);
				toolAdded.Broadcast(newTool);

				if(playerInventory != nullptr && newTool.toolBase->item != NULL)
				{
					playerInventory->Add(newTool.toolBase->item);
				}
				return true;
			}
		}
		else if(newTool.toolBase->usageType == FUsageType::Weapon)
		{
			if (!weapons.Contains(newTool))
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

FToolData UToolComponent::EquipWeapon(FToolData weapon)
{
	if (weapon.toolBase->classType != classType)
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

FToolData UToolComponent::EquipArmor(FToolData armor)
{
	if (armor.toolBase->classType != classType)
	{
		return FToolData();
	}

	if (armor.toolBase->usageType != FUsageType::Armor)
	{
		return FToolData();
	}

	if (!this->armor.Contains(armor))
	{
		return FToolData();
	}

	if (equippedArmor[armor.toolBase->armorSlot] != nudeArmor[armor.toolBase->armorSlot])
	{
		UnequipArmor(equippedArmor[armor.toolBase->armorSlot]);
		equippedArmor[armor.toolBase->armorSlot] = armor;
		armorEqipped.Broadcast(armor);
	}

	return FToolData();
}

FToolData UToolComponent::UnequipArmor(FToolData armor)
{
	if (armor.toolBase->usageType != FUsageType::Armor)
	{
		return FToolData();
	}

	if (!this->armor.Contains(armor))
	{
		return FToolData();
	}

	equippedArmor[armor.toolBase->armorSlot] = FToolData();
	armorUeqipped.Broadcast(armor);
	return FToolData();
}

FToolData UToolComponent::SwapWeapons(int direction, FHandedness hand)
{
	return FToolData();
}

FToolData UToolComponent::SwapArmor(int direction, FArmorSlot slot)
{
	return FToolData();
}