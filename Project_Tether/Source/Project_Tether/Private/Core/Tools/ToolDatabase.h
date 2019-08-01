// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Tool.h"
#include "ClassType.h"
#include "ToolDatabase.generated.h"

class UTool;
class UPlayerClassType;
enum FRarity;

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FToolDataSlot
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UTool*> tools;
};

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FToolDataKey
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UPlayerClassType* playerClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<FRarity> rarity;

	bool operator == (const FToolDataKey& other) const
	{
		return playerClass == other.playerClass && rarity == other.rarity;
	}
};

FORCEINLINE uint32 GetTypeHash(const FToolDataKey& other)
{
	return FCrc::MemCrc_DEPRECATED(&other, sizeof(FToolDataKey));
}

UCLASS(Blueprintable, BlueprintType)
class UToolDatabase : public UDataAsset
{
	GENERATED_BODY()

public:
	UToolDatabase();

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FToolDataKey, FToolDataSlot> database;

public:
	UFUNCTION(BlueprintCallable)
	TArray<UTool*> GetToolsOfRarity(FRarity rarity);
	
	UFUNCTION(BlueprintCallable)
	TArray<UTool*> GetToolsOfClassType(UPlayerClassType* playerClass);
	
	UFUNCTION(BlueprintCallable)
	TArray<UTool*> GetToolsOfClassTypeAndRarity(UPlayerClassType* playerClass, FRarity rarity);

	UFUNCTION(BlueprintCallable)
	UTool* GetRandomToolSimpleByRarity(FRarity rarity, UPlayerClassType* playerClass);
};
