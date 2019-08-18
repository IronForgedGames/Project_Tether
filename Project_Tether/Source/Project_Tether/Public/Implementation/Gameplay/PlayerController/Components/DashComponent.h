// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DashComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDashEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UDashComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDashComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintAssignable)
	FDashEvent dashStartedEvent;
	
	UPROPERTY(BlueprintAssignable)
	FDashEvent dashStoppedEvent;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void StartDash(FVector currentVelocity, bool shouldRotate);
	
	UFUNCTION(BlueprintCallable)
	void StopDash();
};
