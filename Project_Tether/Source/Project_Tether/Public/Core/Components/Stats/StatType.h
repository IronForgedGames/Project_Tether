#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StatType.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PROJECT_TETHER_API UStatType : public UDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString statName;

public:
	bool operator == (const UStatType& other) const
	{
		return statName == other.statName;
	}
};
