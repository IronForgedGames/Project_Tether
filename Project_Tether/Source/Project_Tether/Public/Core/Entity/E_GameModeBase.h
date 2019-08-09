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

public:

	UFUNCTION(BlueprintCallable, Category = "Entity Manager")
	UEntityManager* GetEntityManager();
};
