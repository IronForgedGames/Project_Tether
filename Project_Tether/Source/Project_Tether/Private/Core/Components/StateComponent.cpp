
#include "StateComponent.h"
#include "state.h"

UStateComponent::UStateComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UStateComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UStateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UStateComponent::GetState(FString state)
{
	if (states.Contains(state))
	{
		return states[state];
	}

	return false;
}

bool UStateComponent::AnyStateTrue(TArray<FString> statesToCheck)
{
	for (auto& _state : statesToCheck)
	{
		if (states.Contains(_state))
		{
			if (states[_state])
			{
				return true;
			}
		}
	}

	return false;
}

bool UStateComponent::AnyStatFalse(TArray<FString> statesToCheck)
{
	for (auto& _state : statesToCheck)
	{
		if (states.Contains(_state))
		{
			if (!states[_state])
			{
				return true;
			}
		}
	}

	return false;
}

void UStateComponent::SetState(FString state, bool status)
{
	if (states.Contains(state))
	{
		if (states[state] != status)
		{
			states[state] = status;
			stateChangedEvent.Broadcast(state, status);
		}
	}
}

void UStateComponent::SetStateTrue(FString state)
{
	SetState(state, true);
}

void UStateComponent::SetStateFalse(FString state)
{
	SetState(state, true);
}


