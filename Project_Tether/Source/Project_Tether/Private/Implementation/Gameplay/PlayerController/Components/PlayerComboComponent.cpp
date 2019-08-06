
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
}

void UPlayerComboComponent::OnInputRecieved()
{
	if(canTransition)
	{
		if (currentInputCount >= currentMaxComboCount)
		{
			currentInputCount = 0;
		}
		
		attackStartedEvent.Broadcast(currentAnimations[currentInputCount]);

		canTransition = false;
		isInCombo = true;
		currentInputCount++;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Can not transition"));
	}
}

void UPlayerComboComponent::OnMontageEnded(UAnimMontage * montage)
{
	if (currentAnimations.Contains(montage))
	{ 
		isInCombo = false;
		currentInputCount = 0;
		
		OnCanTransition();
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
	if (!canTransition && waitingToSwapAnimations)
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

