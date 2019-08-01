/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#include "Public/Core/Entity/EntityManager.h"
#include "Public/Core/Entity/Identity.h"
#include "Public/Core/Entity/Group.h"
#include "Public/Core/Entity/IEntity.h"
#include "Public/Core/Entity/Entity.h"
#include "Public/Core/Entity/Identity.h"

UEntityManager::UEntityManager()
{
}

void UEntityManager::RegisterEntity(UEntity * entity)
{
	if (!entities.Contains(entity))
	{
		entities.Add(entity);
		entityAddedEvent.Broadcast(entity);
	}
}

void UEntityManager::DeRegisterEntity(UEntity * entity)
{
	if (entities.Contains(entity))
	{
		entities.Remove(entity);
		entityRemovedEvent.Broadcast(entity);
	}
}

TArray<UEntity*> UEntityManager::GetEntities(UIdentity* identity)
{
	TArray<UEntity*> _entities = TArray<UEntity*>();
	for(UEntity* _entity : entities)
	{
		if (_entity->GetIdentity() == identity) 
		{
			_entities.Add(_entity);
		}
	}
	return _entities;
}

TArray<UEntity*> UEntityManager::GetEntities(UGroup* group)
{
	TArray<UEntity*> _entities = TArray<UEntity*>();
	for (UEntity* _entity : entities)
	{
		if (Cast<UIdentity>(_entity->GetIdentity())->group == group)
		{
			_entities.Add(_entity);
		}
	}
	return _entities;
}

