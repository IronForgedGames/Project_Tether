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

UENUM()
enum UsageType
{
	Weapon UMETA(DisplayName = "Weapon"), 
	Armor UMETA(DisplayName = "Armor")
};

UENUM()
enum Rarity
{
	Common UMETA(DisplayName = "Common"),
	Uncommon UMETA(DisplayName = "Uncommon"),
	Rare UMETA(DisplayName = "Rare"),
	Legendary UMETA(DisplayName = "Legendary"),
	Epic UMETA(DisplayName = "Epic")
};

UENUM()
enum ArmorSlot
{
	Head UMETA(DisplayName = "Head"),
	Torso UMETA(DisplayName = "Torso"),
	Arms UMETA(DisplayName = "Arms"),
	Legs UMETA(DisplayName = "Legs")
};

UENUM()
enum Handedness
{
	TwoHanded UMETA(Display = "Two Handed"),
	RightHanded UMETA(Display = "RightHanded"),
	LeftHanded UMETA(Display = "LeftHanded")
};

UCLASS(Blueprintable)
class PROJECT_TETHER_API UTool : public UObject
{
	GENERATED_BODY()

public:
	UTool();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool")
	UStaticMesh* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool")
	FString toolName;
	
	UPROPERTY(EditAnywhere, Category = "Tool")
	TEnumAsByte<Rarity> rarity;

	UPROPERTY(EditAnywhere, Category = "Tool")
	TSubclassOf<UItem> item;

	UPROPERTY(EditAnywhere, Category = "Tool")
	TSubclassOf<UClassType> classType;

	UPROPERTY(EditAnywhere, Category = "Tool")
	TEnumAsByte<UsageType> usageType;

	UPROPERTY(EditAnywhere, Category = "Tool")
	TEnumAsByte<Handedness> handedness;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	TSubclassOf<UWeaponType> weaponType;

	UPROPERTY(EditAnywhere, Category = "Armor")
	TEnumAsByte<ArmorSlot> armorSlot;

	UPROPERTY(EditAnywhere, Category = "Armor")
	bool canBeRemoved;
		
	int powerRating;
	// array of modifiers
};
