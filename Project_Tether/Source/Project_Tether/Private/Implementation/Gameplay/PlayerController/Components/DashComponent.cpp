
#include "DashComponent.h"
#include "GameFramework/Actor.h"


UDashComponent::UDashComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UDashComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UDashComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDashComponent::StartDash(FVector currentVelocity, bool shouldRotate)
{
	currentVelocity.Z = 0;
	if (shouldRotate && currentVelocity.X != 0 || currentVelocity.Y != 0)
	{
		FMatrix _rotationMat = FRotationMatrix::MakeFromXZ(currentVelocity, GetOwner()->GetActorUpVector());
		GetOwner()->SetActorRotation(_rotationMat.Rotator());
	}

	dashStartedEvent.Broadcast();
}

void UDashComponent::StopDash()
{
	dashStoppedEvent.Broadcast();
}

