// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMesh.h"
#include "Tool.generated.h"

class UStaticMesh;

/**
 * 
 */
UCLASS(Blueprintable)
class PROJECT_TETHER_API UTool : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	UStaticMesh* mesh;
	
};
