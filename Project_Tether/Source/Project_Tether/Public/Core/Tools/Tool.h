// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMesh.h"
#include "Public/Core/Class/ClassType.h"
#include "Public/Core/Tools/WeaponType.h"
#include "Tool.generated.h"

class UStaticMesh;
class UItem;
class UClassType;
class UWeaponType;

UCLASS(Blueprintable)
class PROJECT_TETHER_API UTool : public UObject
{
	GENERATED_BODY()

public:
	UTool();

protected:
	//UPROPERTY(EditAnywhere, Category = "Tool")
	//TEnumAsByte<UsageType> usageType;
	//
	//UPROPERTY(EditAnywhere, Category = "Tool")
	//TEnumAsByte<Rarity> rarity;

	//UPROPERTY(EditAnywhere, Category = "Tool")
	//TSubclassOf<UItem> item;

	//UPROPERTY(EditAnywhere, Category = "Tool")
	//TSubclassOf<UClassType> classType;

	//UPROPERTY(EditAnywhere, Category = "Weapon")
	//TSubclassOf<UWeaponType> weaponType;

	//UPROPERTY(EditAnywhere, Category = "Armor")
	//TEnumAsByte<ArmorSlot> armorSlot;

public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool")
	//UStaticMesh* mesh;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool")
	//FString toolName;

	//UFUNCTION(BlueprintCallable)
	//UTool* CreateToolInstance();

	//UFUNCTION(BlueprintCallable)
	//TEnumAsByte<UsageType> GetUsage() { return usageType; }

	//UFUNCTION(BlueprintCallable)
	//TEnumAsByte<ArmorSlot> GetArmorSlot() { return armorSlot; }

	//UFUNCTION(BlueprintCallable)
	//TEnumAsByte<Rarity> GetRarity() { return rarity; }
	//
	//UFUNCTION(BlueprintCallable)
	//FString GetName() { return toolName; }

	//UFUNCTION(BlueprintCallable)
	//TSubclassOf<UItem> GetItem(){ return item; }
	//
	//UFUNCTION(BlueprintCallable)
	//TSubclassOf<UWeaponType> GetWeaponType() { return weaponType; }

	//UFUNCTION(BlueprintCallable)
	//TArray<TSubclassOf<UAnimMontage>> GetStandardAnims();

	//UFUNCTION(BlueprintCallable)
	//TArray<TSubclassOf<UAnimMontage>> GetAnimAlt_1();

	//UFUNCTION(BlueprintCallable)
	//TArray<TSubclassOf<UAnimMontage>> GetAnimAlt_2();
};
