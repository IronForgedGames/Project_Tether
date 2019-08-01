/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Public/Core/Entity/Group.h"
#include "Identity.generated.h"

/**
 * Class used to identify entities
 */
UCLASS(Blueprintable, BlueprintType)
class PROJECT_TETHER_API UIdentity : public UDataAsset
{
	GENERATED_BODY()

	UIdentity();
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UIdentity* parent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UGroup* group;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AActor> actorBlueprint;

	UFUNCTION(BlueprintCallable)
	bool IsAncestorOf(UIdentity* decendant);
	
	UFUNCTION(BlueprintCallable)
	bool IsDecendantOf(UIdentity* ancestor);
};
