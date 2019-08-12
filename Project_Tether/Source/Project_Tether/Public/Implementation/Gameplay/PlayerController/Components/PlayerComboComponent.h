#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerComboComponent.generated.h"

class UAnimMontage;
class UAnimInstance;
class ACharacter;
class UWeaponType;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackComboEventSignature, UAnimMontage*, montage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttackingStatusEventSignature);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UPlayerComboComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPlayerComboComponent();

protected:
	virtual void BeginPlay() override;

	void SetAnimTick();
	void AnimTransitionTick();

	ACharacter* owner;
	UAnimInstance* animInstance;

	bool isInitialized;

	// Animation swapping
	TArray<UAnimMontage*> currentStandardAnimations;
	TArray<UAnimMontage*> pendingStandardAnimations;

	TArray<UAnimMontage*> currentAlternateAnimations;
	TArray<UAnimMontage*> pendingAlternateAnimations;

	int currentBlendspaceIndex = 0;
	int pendingBlendspaceIndex = 0;
	int pendingMaxComboCount = 0;
	
	bool waitingToSwapAnimations  = false;
	// End animation swapping

	bool inCombo = false;
	bool canTransition = true;
	bool shouldBranch = false;

	int currentMaxComboCount = 0;
	int currentInputCount = 0;
	int currentIndex = 0;

	UPROPERTY(BlueprintAssignable)
	FAttackComboEventSignature attackStartedEvent;
	
	UPROPERTY(BlueprintAssignable)
	FAttackComboEventSignature attackEndedEvent;
	
	UPROPERTY(BlueprintAssignable)
	FAttackComboEventSignature attackHitEvent;

	UPROPERTY(BlueprintAssignable)
	FAttackingStatusEventSignature startedComboEvent;
	
	UPROPERTY(BlueprintAssignable)
	FAttackingStatusEventSignature endedComboEvent;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void OnInputRecieved();

	UFUNCTION(BlueprintCallable) // should be called from blueprint as well as montage ended
	void OnCanTransition();

	UFUNCTION(BlueprintCallable)
	void SetAnimationsFromWeapon(UWeaponType* weaponType);

	UFUNCTION(BlueprintCallable)
	void OnMontageEnded(UAnimMontage* montage, bool interrupted);
	
	UFUNCTION(BlueprintCallable)
	void OnMontageHit(UAnimMontage* montage);

	UFUNCTION(BlueprintCallable)
	bool SetShouldBranch(bool shouldBranch);
};
