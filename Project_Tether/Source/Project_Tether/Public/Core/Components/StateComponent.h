// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "state.h"
#include "StateComponent.generated.h"

class UState;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateEvent, UState*, state, bool, status);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UStateComponent();

	UPROPERTY(BlueprintCallable)
	FStateEvent stateChangedEvent;


	UPROPERTY(EditAnywhere)
	TMap<UState*, bool> states;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	bool GetState(UState* state);
	
	UFUNCTION(BlueprintCallable)
	bool AnyStateTrue(TArray<UState*> statesToCheck);

	UFUNCTION(BlueprintCallable)
	bool AnyStatFalse(TArray<UState*> statesToCheck);

	void SetState(UState* state, bool status);

	UFUNCTION(BlueprintCallable)
	void SetStateTrue(UState* state);

	UFUNCTION(BlueprintCallable)
	void SetStateFalse(UState* state);
};
