/**
Author: Aaron Hines
Studio: Iron Forged Games
*/
#include "AnimBPHook.h"
#

UAnimBPHook::UAnimBPHook()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UAnimBPHook::BeginPlay()
{
	Super::BeginPlay();

}

void UAnimBPHook::CalculateVars()
{
	if (owner == nullptr)
	{
		owner = GetOwner();
	}
	
	FVector _velocity = owner->GetVelocity();
	_velocity.Z = 0.f;
	FVector _forward = owner->GetActorForwardVector();

	if (focused)
	{
		speed = FVector::DotProduct(_forward, _velocity);
		direction = FVector::CrossProduct(_forward, _velocity).Z;
	}
	else
	{
		speed = (FMath::Sqrt( (_velocity.X * _velocity.X) + (_velocity.Y * _velocity.Y) + (_velocity.Z * _velocity.Z)) );

		if (useLean)
		{
			direction = FVector::CrossProduct(_forward, _velocity).Z;
		}
		else
		{
			direction = 0.f;
		}
	}
}

void UAnimBPHook::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	CalculateVars();
}

