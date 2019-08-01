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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEntityEventSignature, UEntity*, entity);

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
	UPROPERTY(BlueprintAssignable)
	FEntityEventSignature entityAddedEvent;
	
	UPROPERTY(BlueprintAssignable)
	FEntityEventSignature entityRemovedEvent;

	void RegisterEntity(UEntity* entity);
	void DeRegisterEntity(UEntity*  entity);

	TArray<UEntity*> GetEntities(UIdentity* identity);
	TArray<UEntity*> GetEntities(UGroup* group);

};
