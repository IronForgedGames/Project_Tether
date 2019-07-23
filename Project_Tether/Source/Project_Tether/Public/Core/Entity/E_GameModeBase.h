/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "E_GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_TETHER_API AE_GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity Manager")
	UEntityManager* entityManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TSubclassOf<UInventory> inventory;
public:

	UFUNCTION(BlueprintCallable, Category = "Entity Manager")
	UEntityManager* GetEntityManager();
	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	TSubclassOf<UInventory> GetInventory() { return inventory; }
};
