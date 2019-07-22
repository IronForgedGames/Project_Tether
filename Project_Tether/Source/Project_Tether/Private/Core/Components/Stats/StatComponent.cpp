#include "StatComponent.h"
#include "Public/Core/Components/Stats/StatType.h"


// Sets default values for this component's properties
UStatComponent::UStatComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UStatComponent::BeginPlay()
{
	Super::BeginPlay();
	ResetAll();
}

void UStatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UStatComponent::TickModifiers(float deltaTime)
{
	for (FStat _stat : stats)
	{
		TArray<FStatModifier> _markedForRemoval;

		for (FStatModifier _mod : _stat.modifiers)
		{
			_mod.currentTime += deltaTime;

			if (_mod.currentTime > _mod.duration && !_mod.indefinite)
			{
				_markedForRemoval.Add(_mod);
			}
		}

		for (FStatModifier _removed : _markedForRemoval)
		{
			_stat.modifiers.Remove(_removed);
		}
	}
}

float UStatComponent::GetModifiedAmount(FStat stat)
{
	float _amount = stat.currentAmount;

	for (FStatModifier _mod : stat.modifiers)
	{
		if (_mod.usePercentage)
		{
			_amount -= _amount * _mod.percentage;
		}
		else
		{
			_amount -= _mod.amount;
		}

		if (_amount < stat.minAmount)
		{
			_amount = stat.minAmount;
		}

		if (_amount > stat.maxAmount)
		{
			_amount = stat.maxAmount;
		}
	}

	return 0.0f;
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
			return GetModifiedAmount(_stat);
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
			float _amount = value;
			if (_amount < _stat.minAmount)
			{
				_amount = _stat.minAmount;
			}
			else if(_amount > _stat.maxAmount)
			{
				_amount = _stat.maxAmount;
			}

			_stat.currentAmount = _amount;
			return _stat.currentAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::Add(TSubclassOf<UStatType> type, float value)
{
	for (FStat _stat : stats)
	{
		if (_stat.statType == type)
		{
			float _amount = _stat.currentAmount + value;
			if (_amount < _stat.minAmount)
			{
				_amount = _stat.minAmount;
			}
			else if (_amount > _stat.maxAmount)
			{
				_amount = _stat.maxAmount;
			}

			_stat.currentAmount = _amount;
			return _stat.currentAmount;
		}
	}
	return 0.0f;
}

bool UStatComponent::AddModifier(FStatModifier mod)
{
	for (FStat _stat : stats)
	{
		if (_stat.statType == mod.statType)
		{
			for (FStatModifier _modifier : _stat.modifiers)
			{
				if (_modifier.source == mod.source)
				{
					if (_modifier.canStack)
					{
						_modifier.currentTime = 0.f;
						return true;
					}
					return false;
				}
			}
			
			_stat.modifiers.Add(mod);
			return true;
		}
	}

	return false;
}

bool UStatComponent::RemoveModifier(TSubclassOf<UIdentity> source)
{
	for (FStat _stat : stats)
	{
		TArray<FStatModifier> _markedForRemoval;

		for (FStatModifier _mod : _stat.modifiers)
		{
			if (_mod.source == source)
			{
				_markedForRemoval.Add(_mod);
			}
		}

		for (FStatModifier _modifier : _markedForRemoval)
		{
			_stat.modifiers.Remove(_modifier);
		}
	}
	return false;
}

void UStatComponent::RemoveAllModifiersForStat(TSubclassOf<UStatType> type)
{
	for (FStat _stat : stats)
	{
		TArray<FStatModifier> _markedForRemoval;

		if (_stat.statType == type)
		{
			for (FStatModifier _mod : _stat.modifiers)
			{
				_markedForRemoval.Add(_mod);
			}
		}

		for (FStatModifier _modifier : _markedForRemoval)
		{
			_stat.modifiers.Remove(_modifier);
		}
	}
}

void UStatComponent::RemoveAllModifiers()
{
	for (FStat _stat : stats)
	{
		TArray<FStatModifier> _markedForRemoval;

		for (FStatModifier _mod : _stat.modifiers)
		{
			_markedForRemoval.Add(_mod);
		}

		for (FStatModifier _modifier : _markedForRemoval)
		{
			_stat.modifiers.Remove(_modifier);
		}
	}
}

float UStatComponent::Subtract(TSubclassOf<UStatType> type, float value)
{
	for (FStat _stat : stats)
	{
		if (_stat.statType == type)
		{
			float _amount = _stat.currentAmount - value;
			if (_amount < _stat.minAmount)
			{
				_amount = _stat.minAmount;
			}
			else if (_amount > _stat.maxAmount)
			{
				_amount = _stat.maxAmount;
			}

			_stat.currentAmount = _amount;
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
			_stat.currentAmount = _stat.minAmount;
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
			_stat.currentAmount = _stat.minAmount;
			return _stat.currentAmount;
		}
	}
	return 0.0f;
}

void UStatComponent::ResetAll()
{
	for (FStat _stat : stats)
	{
		_stat.currentAmount = _stat.minAmount;
	}
}