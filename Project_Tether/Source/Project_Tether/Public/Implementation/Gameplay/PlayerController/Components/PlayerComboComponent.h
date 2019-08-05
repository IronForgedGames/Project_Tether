#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerComboComponent.generated.h"

class UAnimMontage;
class UAnimInstance;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UPlayerComboComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPlayerComboComponent();

protected:
	virtual void BeginPlay() override;
	void SetAnimTick();

	// the currently being used animations
	TArray<UAnimMontage*> currentAnimations;
	
	// when trying to set these will be set first
	TArray<UAnimMontage*> pendingAnimations;

	int currentBlendspaceIndex = 0;
	int pendingBlendspaceIndex = 0;

	int currentMaxComboCount = 0;
	int pendingMaxComboCount = 0;

	bool waitingToSwapAnimations  = false;

	bool isInCombo;

	int currentInputCount = 0;
	float currentTimeSinceInput = 0;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void OnInputRecieved();

	UFUNCTION(BlueprintCallable)
	void OnCanTransition();

	UFUNCTION(BlueprintCallable)
	void SetAnimations(TArray<UAnimMontage*> animations, int blendspaceIndex = 0);
	
};
