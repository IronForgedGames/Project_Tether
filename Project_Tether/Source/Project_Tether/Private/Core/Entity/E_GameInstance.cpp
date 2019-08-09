// Fill out your copyright notice in the Description page of Project Settings.

#include "E_GameInstance.h"
#include "Public/Core/Entity/EntityManager.h"
#include "Public/Core/Item/Inventory.h"

UEntityManager * UE_GameInstance::GetEntityManager()
{
	if (entityManager == nullptr)
	{
		entityManager = NewObject<UEntityManager>();
	}
	return entityManager;
}

UInventory * UE_GameInstance::GetInventory()
{
	return inventory;
}
