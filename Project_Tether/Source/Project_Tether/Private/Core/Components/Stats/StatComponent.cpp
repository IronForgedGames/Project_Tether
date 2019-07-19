#include "StatComponent.h"
#include "StatType.h"
// Sets default values for this component's properties
UStatComponent::UStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UStatComponent::BeginPlay()
{
	Super::BeginPlay();
	
	ResetAll();
}


void UStatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

FStat UStatComponent::GetStat(TSubclassOf<UStatType> type)
{
	for (FStat _stat : stats)
	{
		if (_stat.statType == type)
		{
			return _stat;
		}
	}

	return FStat();
}

float UStatComponent::GetValue(TSubclassOf<UStatType> type)
{
	for (FStat _stat : stats)
	{
		if (_stat.statType == type)
		{
			return _stat.currentAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::GetMaxValue(TSubclassOf<UStatType> type)
{
	for (FStat _stat : stats)
	{
		if (_stat.statType == type)
		{
			return _stat.maxAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::GetMinValue(TSubclassOf<UStatType> type)
{
	for (FStat _stat : stats)
	{
		if (_stat.statType == type)
		{
			return _stat.minAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::SetValue(TSubclassOf<UStatType> type, float value)
{
	for (FStat _stat : stats)
	{
		if (_stat.statType == type)
		{
			_stat.currentAmount += value;
			return _stat.currentAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::SetMaxValue(TSubclassOf<UStatType> type, float value)
{
	for (FStat _stat : stats)
	{
		if (_stat.statType == type)
		{
			_stat.maxAmount += value;
			return _stat.maxAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::SetMinValue(TSubclassOf<UStatType> type, float value)
{
	for (FStat _stat : stats)
	{
		if (_stat.statType == type)
		{
			_stat.minAmount += value;
			return _stat.minAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::ResetValue(TSubclassOf<UStatType> type)
{
	for (FStat _stat : stats)
	{
		if (_stat.statType == type)
		{
			_stat.currentAmount += _stat.maxAmount;
			return _stat.currentAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::SetToMin(TSubclassOf<UStatType> type)
{
	for (FStat _stat : stats)
	{
		if (_stat.statType == type)
		{
			_stat.currentAmount += _stat.minAmount;
			return _stat.currentAmount;
		}
	}
	return 0.0f;
}

void UStatComponent::ResetAll()
{
	for (FStat _stat : stats)
	{
		_stat.currentAmount += _stat.minAmount;
	}
}

