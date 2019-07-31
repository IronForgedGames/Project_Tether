// Fill out your copyright notice in the Description page of Project Settings.

#include "ToolDatabase.h"
#include "Tool.h"

UToolDatabase::UToolDatabase()
{
}

TArray<UTool*> UToolDatabase::GetToolsOfRarity(FRarity rarity)
{
	return TArray<UTool*>();
}

TArray<UTool*> UToolDatabase::GetToolsOfClassType(UPlayerClassType * playerClass)
{
	return TArray<UTool*>();
}

TArray<UTool*> UToolDatabase::GetToolsOfClassTypeAndRarity(UPlayerClassType * playerClass, FRarity rarity)
{
	return TArray<UTool*>();
}

UTool * UToolDatabase::GetRandomToolSimpleByRarity(FRarity rarity, UPlayerClassType * playerClass)
{
	TArray<UTool*> _tools = GetToolsOfClassTypeAndRarity(playerClass, rarity);

	if (_tools.Num() > 0)
	{
		int _randomNumber = FMath::RandRange(0, _tools.Num() - 1);
		return _tools[_randomNumber];
	}

	return nullptr;
}
