// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/Core/Tools/WeaponType.h"
#include "UObject/NoExportTypes.h"
#include "ClassType.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PROJECT_TETHER_API UClassType : public UObject
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, Category = "Class")
	FString className;

public:
	
	UFUNCTION(BlueprintCallable)
	FString GetClassName() { return className; }
};
