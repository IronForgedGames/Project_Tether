// Fill out your copyright notice in the Description page of Project Settings.

#include "ToolDatabase.h"
#include "Tool.h"

UToolDatabase::UToolDatabase()
{
}

TArray<UTool*> UToolDatabase::GetToolsOfRarity(FRarity rarity)
{
	TArray<UTool*> _result = TArray<UTool*>();
	for (auto& _item : database)
	{
		if (_item.Key.rarity == rarity)
		{
			for (auto& _tool : _item.Value.tools)
			{
				_result.Add(_tool);
			}
		}
	}

	return _result;
}

TArray<UTool*> UToolDatabase::GetToolsOfClassType(UPlayerClassType * playerClass)
{
	TArray<UTool*> _result = TArray<UTool*>();
	for (auto& _item : database)
	{
		if (_item.Key.playerClass == playerClass)
		{
			for (auto& _tool : _item.Value.tools)
			{
				_result.Add(_tool);
			}
		}
	}
	return _result;
}

TArray<UTool*> UToolDatabase::GetToolsOfClassTypeAndRarity(UPlayerClassType * playerClass, FRarity rarity)
{
	TArray<UTool*> _result = TArray<UTool*>();
	for (auto& _item : database)
	{
		///if (_item.Key.playerClass == playerClass && _item.Key.rarity == rarity)
		{
			for (auto& _tool : _item.Value.tools)
			{
				_result.Add(_tool);
			}
		}
	}
	return _result;
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
