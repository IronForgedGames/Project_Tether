
#include "EvadeComponent.h"
#include "StateComponent.h"
#include "GameFramework/Actor.h"

UEvadeComponent::UEvadeComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UEvadeComponent::BeginPlay()
{
	Super::BeginPlay();

	stateComponent = Cast<UStateComponent>(GetOwner()->GetComponentByClass(UStateComponent::StaticClass()));
	if (stateComponent != nullptr)
	{
		initialized = true;
	}
}


// Called every frame
void UEvadeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UEvadeComponent::StartEvade(FVector currentVelocity)
{
	if (initialized)
	{
		if (!stateComponent->AnyStateTrue(unavailableStates))
		{
			UE_LOG(LogTemp, Warning, TEXT("fire event"));	
			evadeStarted.Broadcast();
		}
	}
}

void UEvadeComponent::EndEvade()
{
	evadeEnded.Broadcast();
}

