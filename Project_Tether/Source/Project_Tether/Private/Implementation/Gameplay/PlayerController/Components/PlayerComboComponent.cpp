
#include "PlayerComboComponent.h"
#include "WeaponType.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"

UPlayerComboComponent::UPlayerComboComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UPlayerComboComponent::BeginPlay()
{
	Super::BeginPlay();

	owner = Cast<ACharacter>(GetOwner());
	if (owner != nullptr)
	{
		animInstance = owner->GetMesh()->GetAnimInstance();
		if (animInstance != nullptr)
		{
			isInitialized = true;
			UE_LOG(LogTemp, Warning, TEXT("Is initialized"));
		}
	}
}

void UPlayerComboComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	SetAnimTick();
	AnimTransitionTick();
}

void UPlayerComboComponent::OnInputRecieved()
{
	currentInputCount++;
	inCombo = true;
}

void UPlayerComboComponent::AnimTransitionTick()
{
	if (canTransition)
	{
		if (currentInputCount > currentIndex)
		{
			inCombo = true;
			canTransition = false;

			if (shouldBranch && currentAlternateAnimations.Num() > currentIndex)
			{
				attackStartedEvent.Broadcast(currentAlternateAnimations[currentIndex]);
			}
			else if(currentStandardAnimations.Num() > currentIndex)
			{
				attackStartedEvent.Broadcast(currentStandardAnimations[currentIndex]);
			}

			currentIndex++;
		
			if (currentIndex >= currentStandardAnimations.Num())
			{
				currentIndex = 0;
				currentInputCount = 0;
			}
		}
	}
}

void UPlayerComboComponent::OnMontageEnded(UAnimMontage * montage, bool interrupted)
{
	if (currentStandardAnimations.Contains(montage))
	{ 
		if (!interrupted)
		{
			canTransition = true;
			inCombo = false;
			currentInputCount = 0;
			currentIndex = 0;
			OnCanTransition();
		}

		attackEndedEvent.Broadcast(montage);
	}
}

void UPlayerComboComponent::OnMontageHit(UAnimMontage * montage)
{
	attackHitEvent.Broadcast(montage);
}

bool UPlayerComboComponent::SetShouldBranch(bool shouldBranch)
{
	return this->shouldBranch = shouldBranch;
}

void UPlayerComboComponent::OnCanTransition()
{
	canTransition = true;
}

void UPlayerComboComponent::SetAnimTick()
{
	if (canTransition && waitingToSwapAnimations)
	{
		waitingToSwapAnimations = false;
		
		currentStandardAnimations = pendingStandardAnimations;
		currentAlternateAnimations = pendingAlternateAnimations;
		currentBlendspaceIndex = pendingBlendspaceIndex;
	}
}

void UPlayerComboComponent::SetAnimations(TArray<UAnimMontage*> animations, int blendspaceIndex)
{
	waitingToSwapAnimations = true;
	pendingStandardAnimations = animations;
	pendingMaxComboCount = animations.Num();
	pendingBlendspaceIndex = blendspaceIndex;
}

void UPlayerComboComponent::SetAnimationsFromWeapon(UWeaponType * weaponType)
{
	if (weaponType->standardAttackAnims.Num() > 0)
	{
		waitingToSwapAnimations = true;
		pendingStandardAnimations = weaponType->standardAttackAnims;

		if (weaponType->altAttackAnims_1.Num() > 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("set the pending"));
			pendingAlternateAnimations = weaponType->altAttackAnims_1;
		}

		pendingBlendspaceIndex = weaponType->blendSpaceIndex;
	}
}

