
#include "PlayerComboComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"

UPlayerComboComponent::UPlayerComboComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UPlayerComboComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UPlayerComboComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	SetAnimTick();
}

void UPlayerComboComponent::OnInputRecieved()
{

}

void UPlayerComboComponent::OnCanTransition()
{
}

void UPlayerComboComponent::SetAnimTick()
{
	if (!isInCombo && waitingToSwapAnimations)
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

