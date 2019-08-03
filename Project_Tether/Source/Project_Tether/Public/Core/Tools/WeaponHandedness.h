// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeaponHandedness.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_TETHER_API UWeaponHandedness : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FString handesness;

public:
	bool operator == (const UWeaponHandedness& other) const
	{
		return handesness == other.handesness;
	}
};
