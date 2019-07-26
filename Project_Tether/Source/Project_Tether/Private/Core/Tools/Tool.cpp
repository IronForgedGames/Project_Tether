// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Core/Tools/Tool.h"
#include "Public/Core/Item/Item.h"
#include "Animation/AnimMontage.h"
#include "Public/Core/Tools/WeaponType.h"

UTool::UTool()
{
}

//UTool * UTool::CreateToolInstance()
//{
//	UTool* _toolInstance = nUTool();
//	_toolInstance->mesh = this->mesh;
//	_toolInstance->usageType = this->usageType;
//	_toolInstance->rarity = this->rarity;
//	_toolInstance->toolName = this->toolName;
//	_toolInstance->item = this->item;
//	_toolInstance->classType = this->classType;
//	_toolInstance->weaponType = this->weaponType;
//	_toolInstance->armorSlot = this->armorSlot;
//
//	return _toolInstance;
//}

TArray<TSubclassOf<UAnimMontage>> UTool::GetStandardAnims()
{
	if (weaponType != nullptr)
	{
		return weaponType->GetDefaultObject<UWeaponType>()->standardAttackAnims;
	}
	return  TArray<TSubclassOf<UAnimMontage>>();
}

TArray<TSubclassOf<UAnimMontage>> UTool::GetAnimAlt_1()
{
	if (weaponType != nullptr)
	{
		return weaponType->GetDefaultObject<UWeaponType>()->altAttackAnims_1;
	}
	return TArray<TSubclassOf<UAnimMontage>>();
}

TArray<TSubclassOf<UAnimMontage>> UTool::GetAnimAlt_2()
{
	if (weaponType != nullptr)
	{
		return weaponType->GetDefaultObject<UWeaponType>()->altAttackAnims_2;
	}
	return TArray<TSubclassOf<UAnimMontage>>();
}
