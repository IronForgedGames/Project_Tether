// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Classes/Animation/AnimMontage.h"
#include "WeaponType.generated.h"

UCLASS(Blueprintable)
class PROJECT_TETHER_API UWeaponType : public UDataAsset
{
	GENERATED_BODY()
	
public: 
	UPROPERTY(EditAnywhere, BlueprintReadOnly , Category = "WeaponType")
	FString weaponTypeName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly , Category = "WeaponType")
	TArray<UAnimMontage*> standardAttackAnims;

	UPROPERTY(EditAnywhere, BlueprintReadOnly , Category = "WeaponType")
	TArray<UAnimMontage*> altAttackAnims_1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly , Category = "WeaponType")
	TArray<UAnimMontage*> altAttackAnims_2;

	bool operator == (const UWeaponType& other) const
	{
		return weaponTypeName == other.weaponTypeName;
	}
};