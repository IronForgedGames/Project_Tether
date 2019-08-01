/**
Author: Aaron Hines
Studio: Iron Forged Games
*/
#pragma once

#include "CoreMinimal.h"
#include "Database.h"
#include "Group.generated.h"

/**
 * Used to identify groups in a game. I.e Heros, Villians, NPC's ect..
 */
UCLASS(Blueprintable, BlueprintType)
class PROJECT_TETHER_API UGroup : public UDataAsset
{
	GENERATED_BODY()

	UGroup();

public:
	UFUNCTION(BlueprintCallable, Category = "Group")
	FString GetName() { return groupName; }

protected:
	UPROPERTY(EditAnywhere, Category = "Group Properties")
	FString groupName;
};
