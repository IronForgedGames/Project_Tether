/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#include "Public/Core/Entity/E_GameModeBase.h"
#include "Public/Core/Entity/EntityManager.h"
#include "Public/Core/Item/Inventory.h"

UEntityManager * AE_GameModeBase::GetEntityManager()
{
	if (entityManager == nullptr) 
	{ 
		entityManager = NewObject<UEntityManager>(); 
	}
	return entityManager; 
}