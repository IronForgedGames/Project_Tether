// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Core/Components/VitalsComponent.h"
#include "Public/Core/Components/Stats/StatComponent.h"
#include "Public/Core/Components/Stats/StatType.h"
#include "Public/Core/Entity/Identity.h"
#include "Public/Core/Components/E_DamageType.h"


UVitalsComponent::UVitalsComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UVitalsComponent::BeginPlay()
{
	Super::BeginPlay();

	statComponent = Cast<UStatComponent>( GetOwner()->GetComponentByClass(UStatComponent::StaticClass()));
	if (statComponent == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("No Stat Component was found, the Vitals will not work"));
	}
	else if(healthStat == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Health stat was found, the Vitals will not work"));
	}
	else
	{
		isInitialized = true;
	}
}

void UVitalsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	DamageOverTimeTick(DeltaTime);
	HealOverTimeTick(DeltaTime);
}

void UVitalsComponent::Evaluate()
{
	if (isInitialized)
	{
		if (statComponent->GetValue(healthStat) <= 0.f)
		{
			status = Status::Dead;
		}
		else
		{
			status = Status::Alive;
		}
	}
}

void UVitalsComponent::DamageOverTimeTick(float deltaTime)
{
	TArray<FDamageInfo> _markedForRemoval;
	for (auto& _item : dots)
	{
		_item.currentIntervalTime += deltaTime;
		_item.currentTime += deltaTime;

		if (_item.currentTime >= _item.duration)
		{
			_markedForRemoval.Add(_item);
			continue;
		}

		if (_item.currentIntervalTime >= _item.tickInterval)
		{
			DealDamage(_item, false);
			_item.currentIntervalTime= 0.f;
		}
	}

	for (FDamageInfo _info : _markedForRemoval)
	{
		dots.Remove(_info);
	}
}

void UVitalsComponent::HealOverTimeTick(float deltaTime)
{
	TArray<FHealInfo> _markedForRemoval;
	for (auto& _item : hots)
	{
		_item.currentIntervalTime += deltaTime;
		_item.currentTime += deltaTime;

		if (_item.currentTime >= _item.duration)
		{
			_markedForRemoval.Add(_item);
			continue;
		}

		if (_item.currentIntervalTime >= _item.tickInterval)
		{
			Heal(_item.healPerTick);
			_item.currentIntervalTime = 0.f;
		}
	}

	for (FHealInfo _info : _markedForRemoval)
	{
		hots.Remove(_info);
	}
}

float UVitalsComponent::ApplyResistance(FDamageInfo damageInfo)
{
	for (FResistanceModifier _mod : resistanceModifiers)
	{
		if (_mod.damageType == damageInfo.damageType)
		{
			return damageInfo.amount * _mod.multiplier;
		}
	}

	return damageInfo.amount;
}

bool UVitalsComponent::DealDamage(FDamageInfo damageInfo, bool shouldDot)
{
	if (isInitialized)
	{
		float _amount = ApplyResistance(damageInfo);
		statComponent->Subtract(healthStat, damageInfo.amount);

		if (damageInfo.isDOT && shouldDot)
		{
			if (!dots.Contains(damageInfo) || damageInfo.canStack)
			{
				damageInfo.currentTime = 0.f;
				damageInfo.currentIntervalTime = 0.f;

				dots.Add(damageInfo);
			}
		}

		return true;
	}
	return false;
}

bool UVitalsComponent::KillImmediately(FDamageInfo damageInfo)
{
	if (isInitialized)
	{
		statComponent->SetToMin(healthStat);

		return true;
	}
	return false;
}

bool UVitalsComponent::Heal(FHealInfo info)
{
	if (isInitialized)
	{
		statComponent->Add(healthStat, info.amount);
		return true;
	}
	return false;
}

bool UVitalsComponent::HealAll()
{
	if (isInitialized)
	{
		statComponent->SetToMax(healthStat);
		return true;
	}
	return false;
}

float UVitalsComponent::GetHealth()
{
	if (isInitialized)
	{
		return statComponent->GetValue(healthStat);
	}
	return 0.0f;
}

float UVitalsComponent::DealDamage(float amount)
{
	if (isInitialized)
	{
		statComponent->Subtract(healthStat, amount);
		return statComponent->GetValue(healthStat);
	}
	return 0.0f;
}

float UVitalsComponent::Heal(float amount)
{
	if (isInitialized)
	{
		statComponent->Add(healthStat, amount);
	}
	return 0.0f;
}