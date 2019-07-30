// Fill out your copyright notice in the Description page of Project Settings.

#include "ToolComponent.h"
#include "TopDown_E_Character.h"
#include "Tool.h"

UToolComponent::UToolComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UToolComponent::BeginPlay()
{
	Super::BeginPlay();

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

UTool * UToolComponent::CreateToolInstance(TSubclassOf<UTool> toolBase)
{
	UTool* _result = NewObject<UTool>();
	UTool* _base = toolBase->GetDefaultObject<UTool>();

	_result->mesh = _base->mesh;
	_result->toolName = _base->toolName;
	_result->rarity = _base->rarity;
	_result->item = _base->item;
	_result->classType = _base->classType;
	
	_result->usageType = _base->usageType;
	_result->weaponType = _base->weaponType;
	_result->armorSlot = _base->armorSlot;
	_result->handedness = _base->handedness;

	return _result;
}

bool UToolComponent::AddTool(UTool * newTool)
{
	if (newTool->classType != nullptr && newTool->classType == classType)
	{
		if (newTool->usageType == UsageType::Armor)
		{
			if (!armor.Contains(newTool))
			{
				armor.Add(newTool);
				return true;
			}
		}
		else if(newTool->usageType == UsageType::Weapon)
		{
			if (!weapons.Contains(newTool))
			{
				weapons.Add(newTool);
				return true;
			}
		}
	}
	return false;
}

bool UToolComponent::RemoveTool(UTool * toolToRemove)
{
	if (toolToRemove->usageType == UsageType::Armor)
	{
		if (armor.Contains(toolToRemove))
		{
			if (equippedArmor[toolToRemove->armorSlot] == toolToRemove)
			{
				UnequipArmor(toolToRemove);
			}

			armor.Remove(toolToRemove);
			return true;
		}
	}
	else if (toolToRemove->usageType == UsageType::Weapon)
	{
		if (weapons.Contains(toolToRemove))
		{
			if (equippedWeapons[toolToRemove->handedness] == toolToRemove)
			{
				UnequipWeapon(toolToRemove);
			}

			weapons.Remove(toolToRemove);
			return true;
		}
	}
	return false;
}

UTool * UToolComponent::EquipWeapon(UTool * weapon)
{
	if (weapon->classType != classType)
	{
		return nullptr;
	}

	if (weapon == nullptr)
	{
		return nullptr;
	}

	if (weapon->usageType != UsageType::Weapon)
	{
		return nullptr;
	}

	if (!weapons.Contains(weapon))
	{
		return nullptr;
	}

	if (weapon->handedness == Handedness::TwoHanded)
	{
		UnequipWeapon(equippedWeapons[Handedness::TwoHanded]);
		UnequipWeapon(equippedWeapons[Handedness::LeftHanded]);
		UnequipWeapon(equippedWeapons[Handedness::RightHanded]);

		equippedWeapons[Handedness::TwoHanded] = weapon;
	}
	else if(weapon->handedness == Handedness::RightHanded)
	{
		UnequipWeapon(equippedWeapons[Handedness::TwoHanded]);
		UnequipWeapon(equippedWeapons[Handedness::RightHanded]);

		equippedWeapons[Handedness::RightHanded] = weapon;
	}
	else if(weapon->handedness == Handedness::LeftHanded)
	{
		UnequipWeapon(equippedWeapons[Handedness::TwoHanded]);
		UnequipWeapon(equippedWeapons[Handedness::LeftHanded]);

		equippedWeapons[Handedness::LeftHanded] = weapon;
	}

	return weapon;
}

UTool * UToolComponent::UnequipWeapon(UTool * weapon)
{
	if (weapon == nullptr)
	{
		return nullptr;
	}

	if (weapon->usageType != UsageType::Weapon)
	{
		return nullptr;
	}

	if (!weapons.Contains(weapon))
	{
		return nullptr;
	}


	equippedWeapons[weapon->handedness] = nullptr;
	return weapon;
}

UTool * UToolComponent::EquipArmor(UTool * armor)
{
	if (armor->classType != classType)
	{
		return nullptr;
	}

	if (armor == nullptr)
	{
		return nullptr;
	}

	if (armor->usageType != UsageType::Armor)
	{
		return nullptr;
	}

	if (!this->armor.Contains(armor))
	{
		return nullptr;
	}

	if (equippedArmor[armor->armorSlot] != nullptr || equippedArmor[armor->armorSlot] != nudeArmor[armor->armorSlot])
	{
		UnequipArmor(equippedArmor[armor->armorSlot]);
		equippedArmor[armor->armorSlot] = armor;
	}

	return nullptr;
}

UTool * UToolComponent::UnequipArmor(UTool * armor)
{
	if (armor == nullptr)
	{
		return nullptr;
	}

	if (armor->usageType != UsageType::Armor)
	{
		return nullptr;
	}

	if (!this->armor.Contains(armor))
	{
		return nullptr;
	}

	equippedArmor[armor->armorSlot] = nullptr;

	return nullptr;
}

UTool * UToolComponent::SwapWeapons(int direction, Handedness hand)
{
	return nullptr;
}

UTool * UToolComponent::SwapArmor(int direction, ArmorSlot slot)
{
	return nullptr;
}