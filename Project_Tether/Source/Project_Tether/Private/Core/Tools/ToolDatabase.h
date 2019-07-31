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

UCLASS()
class UToolDatabase : public UDataAsset
{
	GENERATED_BODY()

public:
	UToolDatabase();

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UTool*> CommonTools;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UTool*> UnCommonTools;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UTool*> RareTools;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UTool*> LegendaryTools;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UTool*> EpicTools;

public:
	TArray<UTool*> GetToolsOfRarity(FRarity rarity);
	TArray<UTool*> GetToolsOfClassType(UPlayerClassType* playerClass);
	TArray<UTool*> GetToolsOfClassTypeAndRarity(UPlayerClassType* playerClass, FRarity rarity);

	UFUNCTION(BlueprintCallable)
	UTool* GetRandomToolSimpleByRarity(FRarity rarity, UPlayerClassType* playerClass);
};
