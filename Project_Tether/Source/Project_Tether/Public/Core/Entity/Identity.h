/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Public/Core/Entity/Group.h"
#include "Identity.generated.h"

/**
 * Class used to identify entities
 */
UCLASS(Blueprintable, BlueprintType)
class PROJECT_TETHER_API UIdentity : public UObject
{
	GENERATED_BODY()

	UIdentity();
	
public:
	UFUNCTION(BlueprintCallable, Category = "Group")
	FString GetName() { return name; }
	
	UFUNCTION(BlueprintCallable, Category = "Group")
	TSubclassOf<UGroup> GetGroup() { return group; }
	
	UFUNCTION(BlueprintCallable, Category = "Group")
	TSubclassOf<AActor> GetActorBlueprint() { return actorBlueprint; }

protected:
	UPROPERTY(EditAnywhere, Category = "Group Properties")
	FString name;

	UPROPERTY(EditAnywhere, Category = "Group Properties")
	TSubclassOf<UGroup> group;

	UPROPERTY(EditAnywhere, Category = "Group Properties")
	TSubclassOf<AActor> actorBlueprint;

};
