/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EntityManager.generated.h"

/**
 * This class will manage all entities in the level
 */

class UIdentity;
class UGroup;
class UEntity;

UCLASS(Blueprintable, BlueprintType)
/**
 *Manages Entities
 */
class PROJECT_TETHER_API UEntityManager : public UObject
{
	GENERATED_BODY()

	UEntityManager();
	
protected:
	TArray<UEntity*> entities;
	
public:
	void RegisterEntity(UEntity* entity);
	void DeRegisterEntity(UEntity*  entity);

	TArray<UEntity*> GetEntities(TSubclassOf<UIdentity> identity);
	TArray<UEntity*> GetEntities(TSubclassOf<UGroup> group);

};
