// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Public/Core/Tools/WeaponType.h"
#include "ClassType.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PROJECT_TETHER_API UPlayerClassType : public UDataAsset
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Class")
	FString className;

public:
	bool operator == (const UPlayerClassType& other) const
	{
		return className == other.className;
	}
};
