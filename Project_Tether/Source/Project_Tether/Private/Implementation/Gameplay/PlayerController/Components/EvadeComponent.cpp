
#include "EvadeComponent.h"
#include "StateComponent.h"
#include "GameFramework/Actor.h"
#include "state.h"

UEvadeComponent::UEvadeComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UEvadeComponent::BeginPlay()
{
	Super::BeginPlay();
}


void UEvadeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UEvadeComponent::StartEvade(FVector currentVelocity, bool shouldRotate)
{
	// rotate the player in the direction of the movemnts
	currentVelocity.Z = 0.f;
	if (shouldRotate && currentVelocity.X != 0 || currentVelocity.Y != 0)
	{
		FMatrix _rotationMatrix = FRotationMatrix::MakeFromXZ(currentVelocity, GetOwner()->GetActorUpVector());
		GetOwner()->SetActorRotation(_rotationMatrix.Rotator());
	}

	evadeStarted.Broadcast();
}

void UEvadeComponent::EndEvade()
{
	evadeEnded.Broadcast();
}

