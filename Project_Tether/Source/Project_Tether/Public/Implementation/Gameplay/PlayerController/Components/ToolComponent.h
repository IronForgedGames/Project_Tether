// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Public/Core/Tools/Tool.h"
#include "TopDown_E_Character.h"
#include "ToolComponent.generated.h"

class UTool;
class ATopDown_E_Character;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UToolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UToolComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UTool> testTool;

	UPROPERTY(EditAnywhere)
	UTool * testToolPTR;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
	UFUNCTION(BlueprintCallable)
	TSubclassOf<UTool> GetTestSub() { return testTool; }
	
	UFUNCTION(BlueprintCallable)
	UTool* ToolPTR() { return NewObject<UTool>(); }
};