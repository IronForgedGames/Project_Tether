// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Public/Core/Tools/WeaponType.h"
#include "Public/Core/Class/ClassType.h"
#include "Public/Core/Item/Item.h"
#include "TopDown_E_Character.h"
#include "ToolComponent.generated.h"

class ATopDown_E_Character;
class UItem;
class UClassType;
class UWeaponType;

enum Rarity;
enum UsageType;
enum ArmorSlot;

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
	None UMETA(Display = "None"),
	Head UMETA(DisplayName = "Head"),
	Torso UMETA(DisplayName = "Torso"),
	Arms UMETA(DisplayName = "Arms"),
	Legs UMETA(DisplayName = "Legs")
};

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FToolData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool")
	UStaticMesh* mesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool")
	FString toolName;
		
	UPROPERTY(EditAnywhere, Category = "Tool")
	TEnumAsByte<UsageType> usageType;

	UPROPERTY(EditAnywhere, Category = "Tool")
	TEnumAsByte<Rarity> rarity;

	UPROPERTY(EditAnywhere, Category = "Tool")
	TSubclassOf<UItem> item;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	TSubclassOf<UWeaponType> weaponType;

	UPROPERTY(EditAnywhere, Category = "Armor")
	TEnumAsByte<ArmorSlot> armorSlot;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UToolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UToolComponent();

protected:
	virtual void BeginPlay() override;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FToolData> weaponDatabase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FToolData> armorDatabase;

	TMap<FString, FToolData> fullDatabase; // gets populated at runtime

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};