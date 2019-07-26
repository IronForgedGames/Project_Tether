// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Animation/AnimMontage.h"
#include "UObject/NoExportTypes.h"
#include "WeaponType.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PROJECT_TETHER_API UWeaponType : public UObject
{
	GENERATED_BODY()
	
public: 
	UPROPERTY(EditAnywhere, Category = "WeaponType")
	FString weaponTypeName;

	UPROPERTY(EditAnywhere, Category = "WeaponType")
	TArray<TSubclassOf<UAnimMontage>> standardAttackAnims;

	UPROPERTY(EditAnywhere, Category = "WeaponType")
	TArray<TSubclassOf<UAnimMontage>> altAttackAnims_1;

	UPROPERTY(EditAnywhere, Category = "WeaponType")
	TArray<TSubclassOf<UAnimMontage>> altAttackAnims_2;
};
