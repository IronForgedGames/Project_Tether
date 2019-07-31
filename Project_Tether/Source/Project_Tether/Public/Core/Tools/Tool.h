// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/StaticMesh.h"
#include "Public/Core/Class/ClassType.h"
#include "Public/Core/Tools/WeaponType.h"
#include "Tool.generated.h"

class UStaticMesh;
class UItem;
class UPlayerClassType;
class UWeaponType;

UENUM()
enum FUsageType
{
	Weapon UMETA(DisplayName = "Weapon"), 
	Armor UMETA(DisplayName = "Armor")
};

UENUM()
enum FRarity
{
	Common UMETA(DisplayName = "Common"),
	Uncommon UMETA(DisplayName = "Uncommon"),
	Rare UMETA(DisplayName = "Rare"),
	Legendary UMETA(DisplayName = "Legendary"),
	Epic UMETA(DisplayName = "Epic")
};

UENUM()
enum FArmorSlot
{
	Head UMETA(DisplayName = "Head"),
	Torso UMETA(DisplayName = "Torso"),
	Arms UMETA(DisplayName = "Arms"),
	Legs UMETA(DisplayName = "Legs")
};

UENUM()
enum FHandedness
{
	TwoHanded UMETA(Display = "Two Handed"),
	RightHanded UMETA(Display = "RightHanded"),
	LeftHanded UMETA(Display = "LeftHanded")
};

UCLASS(Blueprintable)
class PROJECT_TETHER_API UTool : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tool")
	UStaticMesh* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tool")
	FString toolName;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tool")
	TEnumAsByte<FRarity> rarity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tool")
	UItem* item;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tool")
	UPlayerClassType* classType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tool")
	TEnumAsByte<FUsageType> usageType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tool")
	TEnumAsByte<FHandedness> handedness;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tool")
	TSubclassOf<UWeaponType> weaponType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tool")
	TEnumAsByte<FArmorSlot> armorSlot;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tool")
	bool canBeRemoved;
};
