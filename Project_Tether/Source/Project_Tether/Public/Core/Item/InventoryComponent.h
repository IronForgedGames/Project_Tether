
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Public/Core/Item/Item.h"
#include "Public/Core/Item/ItemCategory.h"
#include "InventoryComponent.generated.h"

class UItem;
class UItemCategory;

USTRUCT(Blueprintable)
struct PROJECT_TETHER_API FSlot
{
	GENERATED_USTRUCT_BODY()

	FSlot(){}
	FSlot(TSubclassOf<UItem> item, int amount, int maxAmount, bool unlimitedSpace = true)
	{
		this->item = item;
		this->quantity = amount;
		this->maxAmount = maxAmount;
		this->unlimitedSpace = unlimitedSpace;

		this->category = item->GetDefaultObject<UItem>()->GetCategory();
	}

	static int const defaultMaxAmount = 100;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float quantity;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	TSubclassOf<UItemCategory> category;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	TSubclassOf<UItem> item;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	bool unlimitedSpace;
	
	UPROPERTY(EditAnywhere, Category = "Inventory")
	int maxAmount;

	bool operator == (const FSlot& other) const
	{
		return this->item == other.item;
	}
};

FORCEINLINE uint32 GetTypeHash(const FSlot& other)
{
	return FCrc::MemCrc_DEPRECATED(&other, sizeof(FSlot));
}

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UInventoryComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<UMeshComponent>> weaponMeshes;

	UPROPERTY(EditAnywhere)
	TArray<FSlot> slots;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	int Add(TSubclassOf<UItem> item, int amount = 1);

	UFUNCTION(BlueprintCallable)
	int Subtract(TSubclassOf<UItem> item, int amount = 1);

	UFUNCTION(BlueprintCallable)
	int GetQuantity(TSubclassOf<UItem> item);

	UFUNCTION(BlueprintCallable)
	TArray<TSubclassOf<UItem>> GetItems(TSubclassOf<UItemCategory> category);

	TArray<FSlot*> GetSlots(TSubclassOf<UItemCategory> category);
};
