// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_TetherGameMode.h"
#include "Project_TetherCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_TetherGameMode::AProject_TetherGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
