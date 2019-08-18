
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

bool UStateComponent::GetState(UState* state)
{
	for (int i = 0; i < states.Num(); i++)
	{
		FStateSlot* _slot = &states[i];
		if (_slot->state == state)
		{
			return _slot->status;
		}
	}

	return false;
}

bool UStateComponent::AnyStateTrue(TArray<UState*> statesToCheck)
{
	for (int i = 0; i < states.Num(); i++)
	{
		FStateSlot* _stateSlot = &states[i];
		for (int j = 0; j < statesToCheck.Num(); j++)
		{
			if (_stateSlot->state == statesToCheck[j])
			{
				if (_stateSlot->status == true)
				{
					return true;
				}
			}
		}
	}

	return false;
}

bool UStateComponent::AnyStatFalse(TArray<UState*> statesToCheck)
{
	for (int i = 0; i < states.Num(); i++)
	{
		FStateSlot* _stateSlot = &states[i];
		for (int j = 0; j < statesToCheck.Num(); j++)
		{
			if (_stateSlot->state == statesToCheck[j])
			{
				if (_stateSlot->status == false)
				{
					return true;
				}
			}
		}
	}

	return false;
}

void UStateComponent::SetState(UState* state, bool status)
{
	for (int i = 0; i < states.Num(); i++)
	{
		FStateSlot* _stateSlot = &states[i];
		if (_stateSlot->state == state)
		{
			if (_stateSlot->status != status)
			{
				_stateSlot->status = status;
				stateChangedEvent.Broadcast(state, status);
			}
		}
	}
}

void UStateComponent::SetStateTrue(UState* state)
{
	SetState(state, true);
}

void UStateComponent::SetStateFalse(UState* state)
{
	SetState(state, false);
}


