
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Inventory.h"
#include "Public/Core/Item/Item.h"
#include "Public/Core/Item/ItemCategory.h"
#include "InventoryComponent.generated.h"

class UItem;
class UItemCategory;
class UInventory;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UInventoryComponent();

protected:
	virtual void BeginPlay() override;

	UInventory* inventory;
	bool isInitialized = false;

	UPROPERTY(EditAnywhere)
	TArray<FSlot> slots;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	UInventory* GetInventory();

	UFUNCTION(BlueprintCallable)
	int Add(UItem* item, int amount = 1) { if (isInitialized) { return inventory->Add(item, amount); } return 0; }

	UFUNCTION(BlueprintCallable)
	int Subtract(UItem* item, int amount = 1) { if (isInitialized) { return inventory->Subtract(item, amount); } return 0; }

	UFUNCTION(BlueprintCallable)
	int GetQuantity(UItem* item) { if (isInitialized) { return inventory->GetQuantity(item); } return 0; }

	UFUNCTION(BlueprintCallable)
	TArray<UItem*> GetItems(UItemCategory* category) { if (isInitialized) { return inventory->GetItems(category); } return TArray<UItem*>(); }

	TArray<FSlot*> GetSlots(UItemCategory* category) { if (isInitialized) { return inventory->GetSlots(category); }  return TArray<FSlot*>(); }
};
