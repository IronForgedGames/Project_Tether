
#include "PlayerComboComponent.h"
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
		
			attackStartedEvent.Broadcast(currentAnimations[currentIndex]);
			currentIndex++;
		
			if (currentIndex >= currentAnimations.Num())
			{
				currentIndex = 0;
				currentInputCount = 0;
			}
		}
	}
}

void UPlayerComboComponent::OnMontageEnded(UAnimMontage * montage, bool interrupted)
{
	if (currentAnimations.Contains(montage))
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

void UPlayerComboComponent::OnCanTransition()
{
	canTransition = true;
}

void UPlayerComboComponent::SetAnimTick()
{
	if (canTransition && waitingToSwapAnimations)
	{
		waitingToSwapAnimations = false;

		currentAnimations = pendingAnimations;
		currentMaxComboCount = pendingMaxComboCount;
		currentBlendspaceIndex = pendingBlendspaceIndex;
	}
}

void UPlayerComboComponent::SetAnimations(TArray<UAnimMontage*> animations, int blendspaceIndex)
{
	waitingToSwapAnimations = true;
	pendingAnimations = animations;
	pendingMaxComboCount = animations.Num();
	pendingBlendspaceIndex = blendspaceIndex;
}

