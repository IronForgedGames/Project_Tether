
#include "InventoryComponent.h"
#include "Item.h"
#include "Inventory.h"
#include "ItemCategory.h"
#include "E_GameInstance.h"
#include "Engine/World.h"

UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	GetInventory();
}

void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

UInventory * UInventoryComponent::GetInventory()
{
	if(inventory != nullptr)
	{
		return inventory;
	}
	
	UInventory* _inventory = nullptr;
	
	UE_GameInstance* gameInstance = Cast<UE_GameInstance>(GetOwner()->GetWorld()->GetGameInstance());
	if (gameInstance != nullptr)
	{
		_inventory = gameInstance->GetInventory();
		if (_inventory != nullptr)
		{
			inventory = _inventory;
			isInitialized = true;
			return inventory;
		}
	}
	return nullptr;
}