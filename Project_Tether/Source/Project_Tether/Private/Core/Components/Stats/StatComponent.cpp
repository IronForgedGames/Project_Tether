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
	for (int _i = 0; _i < stats.Num(); _i++)
	{
		FStat* _statptr = &stats[_i];
		TArray<FStatModifier*> _markedForRemoval;
		
		for (int _j = 0; _j < stats.Num(); _j++)
		{
			FStatModifier* _mod = _markedForRemoval[_j];
			
			_mod->currentTime += deltaTime;
			if (_mod->currentTime > _mod->duration && !_mod->indefinite)
			{
				_markedForRemoval.Add(_mod);
			}
		}

		for (int _k = 0; _k < _markedForRemoval.Num(); _k++)
		{
			FStatModifier* _removed = _markedForRemoval[_k];
			_statptr->modifiers.Remove(*_removed);
		}
	}
}

float UStatComponent::GetModifiedAmount(FStat* stat)
{
	float _amount = stat->currentAmount;

	for (FStatModifier _mod : stat->modifiers)
	{
		if (_mod.usePercentage)
		{
			_amount -= _amount * _mod.percentage;
		}
		else
		{
			_amount -= _mod.amount;
		}

		if (_amount < stat->minAmount)
		{
			_amount = stat->minAmount;
		}

		if (_amount > stat->maxAmount)
		{
			_amount = stat->maxAmount;
		}
	}

	return 0.0f;
}

FStat* UStatComponent::GetStat(UStatType* type)
{
	for (int i = 0; i < stats.Num(); i++)
	{
		FStat* _statptr = &stats[i];
		if (_statptr->statType == type)
		{
			return _statptr;
		}
	}
	return nullptr;
}

float UStatComponent::GetValue(UStatType* type)
{
	for (int i = 0; i < stats.Num(); i++)
	{
		FStat* _statptr = &stats[i];
		if (_statptr->statType == type)
		{
			return GetModifiedAmount(_statptr);
		}
	}
	return 0.0f;
}

float UStatComponent::GetMaxValue(UStatType* type)
{
	for (int i = 0; i < stats.Num(); i++)
	{
		FStat* _statptr = &stats[i];
		if (_statptr->statType == type)
		{
			return _statptr->maxAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::GetMinValue(UStatType* type)
{
	for (int i = 0; i < stats.Num(); i++)
	{
		FStat* _statptr = &stats[i];
		if (_statptr->statType == type)
		{
			return _statptr->minAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::SetValue(UStatType* type, float value)
{
	for (int i = 0; i < stats.Num(); i++)
	{
		FStat* _statptr = &stats[i];
		if (_statptr->statType == type)
		{
			float _amount = value;
			if (_amount < _statptr->minAmount)
			{
				_amount = _statptr->minAmount;
			}
			else if (_amount > _statptr->maxAmount)
			{
				_amount = _statptr->maxAmount;
			}

			_statptr->currentAmount = _amount;
			statChangedEvent.Broadcast(_statptr->statType);
			return _statptr->currentAmount;
		}
	}

	return 0.0f;
}

float UStatComponent::Add(UStatType* type, float value)
{
	for (int i = 0; i < stats.Num(); i++)
	{
		FStat* _statptr = &stats[i]; 
		if (_statptr->statType == type)
		{
			float _amount = _statptr->currentAmount + value;
			if (_amount < _statptr->minAmount)
			{
				_amount = _statptr->minAmount;
			}
			else if (_amount > _statptr->maxAmount)
			{
				_amount = _statptr->maxAmount;
			}

			_statptr->currentAmount = _amount;
			statChangedEvent.Broadcast(_statptr->statType);

			return _statptr->currentAmount;
		}
	}

	return 0.0f;
}

bool UStatComponent::AddModifier(FStatModifier mod)
{
	for (int i = 0; i < stats.Num(); i++)
	{
		FStat* _statptr = &stats[i];
		if (_statptr->statType == mod.statType)
		{
			for (int _j = 0; _j < _statptr->modifiers.Num() ; _j++)
			{
				FStatModifier* _statMod = &_statptr->modifiers[_j];
				if (_statMod->source == _statMod->source)
				{
					if (_statMod->canStack)
					{
						_statMod->currentTime = 0.f;
						modifierAddedEvent.Broadcast(_statptr->statType, mod);
						return true;
					}
				}
			}

			_statptr->modifiers.Add(mod);
			return true;
		}
	}

	return false;
}

void UStatComponent::RemoveModifier(UIdentity* source)
{
	for (int _i = 0; _i < stats.Num(); _i++)
	{
		FStat* _statptr = &stats[_i];
		TArray<FStatModifier*> _markedForRemoval;

		for (int _j = 0; _j < _statptr->modifiers.Num(); _j++)
		{
			FStatModifier* _mod = &_statptr->modifiers[_j];
			if (_mod->source == source)
			{
				_markedForRemoval.Add(_mod);
			}
		}

		for (int _k = 0; _k < _markedForRemoval.Num(); _k++)
		{
			FStatModifier* _removed = _markedForRemoval[_k];
			_statptr->modifiers.Remove(*_removed);
			modifierRemovedEvent.Broadcast(_statptr->statType, *_removed);
		}
	}
}

void UStatComponent::RemoveAllModifiersForStat(UStatType* type)
{
	for (int _i = 0; _i < stats.Num(); _i++)
	{
		FStat* _statptr = &stats[_i];
		TArray<FStatModifier*> _markedForRemoval;

		if (_statptr->statType == type)
		{
			for (int _j = 0; _j < _statptr->modifiers.Num(); _j++)
			{
				_markedForRemoval.Add(&_statptr->modifiers[_j]);
			}
		}

		for (int _k = 0; _k < _markedForRemoval.Num(); _k++)
		{
			FStatModifier* _removed = _markedForRemoval[_k];
			_statptr->modifiers.Remove(*_removed);
			modifierRemovedEvent.Broadcast(_statptr->statType, *_removed);
		}
	}
}

void UStatComponent::RemoveAllModifiers()
{
	for (int _i = 0; _i < stats.Num(); _i++)
	{
		FStat* _statptr = &stats[_i];
		TArray<FStatModifier*> _markedForRemoval;
	
		for (int _j = 0; _j < _statptr->modifiers.Num(); _j++)
		{
			_markedForRemoval.Add(&_statptr->modifiers[_j]);
		}

		for (int _k = 0; _k < _markedForRemoval.Num(); _k++)
		{
			FStatModifier* _removed = _markedForRemoval[_k];
			_statptr->modifiers.Remove(*_removed);
			modifierRemovedEvent.Broadcast(_statptr->statType, *_removed);
		}
	}
}

float UStatComponent::Subtract(UStatType* type, float value)
{
	for (int _i = 0; _i < stats.Num(); _i++)
	{
		FStat* _statptr = &stats[_i];
		if (_statptr->statType == type)
		{
			float _amount = _statptr->currentAmount - value;
			if (_amount < _statptr->minAmount)
			{
				_amount = _statptr->minAmount;
			}
			else if (_amount > _statptr->maxAmount)
			{
				_amount = _statptr->maxAmount;
			}

			_statptr->currentAmount = _amount;
			statChangedEvent.Broadcast(_statptr->statType);
			return _statptr->currentAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::SetMaxValue(UStatType* type, float value)
{
	for (int _i = 0; _i < stats.Num(); _i++)
	{
		FStat* _statptr = &stats[_i];
		if (_statptr->statType == type)
		{
			_statptr->maxAmount = value;
			return _statptr->maxAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::SetMinValue(UStatType* type, float value)
{
	for (int _i = 0; _i < stats.Num(); _i++)
	{
		FStat* _statptr = &stats[_i];
		if (_statptr->statType == type)
		{
			_statptr->minAmount = value;
			return _statptr->minAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::SetToMax(UStatType* type)
{
	for (int _i = 0; _i < stats.Num(); _i++)
	{
		FStat* _statptr = &stats[_i];
		if (_statptr->statType == type)
		{
			_statptr->currentAmount = _statptr->minAmount;
			statChangedEvent.Broadcast(_statptr->statType);
			return _statptr->currentAmount;
		}
	}
	return 0.0f;
}

float UStatComponent::SetToMin(UStatType* type)
{
	for (int _i = 0; _i < stats.Num(); _i++)
	{
		FStat* _statptr = &stats[_i];
		if (_statptr->statType == type)
		{
			_statptr->currentAmount = _statptr->minAmount;
			statChangedEvent.Broadcast(_statptr->statType);
			return _statptr->currentAmount;
		}
	}
	return 0.0f;
}

void UStatComponent::ResetAll()
{
	for (int _i = 0; _i < stats.Num(); _i++)
	{
		FStat* _statptr = &stats[_i];
		_statptr->currentAmount = _statptr->minAmount;
		statChangedEvent.Broadcast(_statptr->statType);
	}
}