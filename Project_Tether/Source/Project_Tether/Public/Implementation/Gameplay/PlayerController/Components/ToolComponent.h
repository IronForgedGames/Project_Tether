#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Public/Core/Tools/Tool.h"
#include "Public/Core/Class/ClassType.h"
#include "TopDown_E_Character.h"
#include "ToolComponent.generated.h"

class UClassType;
class UTool;
class ATopDown_E_Character;
class UToolDatabase;
struct FToolData;

USTRUCT(Blueprintable, BlueprintType)
struct PROJECT_TETHER_API FToolData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly)
	UTool* toolBase;
	
	UPROPERTY(BlueprintReadOnly)
	float power;

	bool operator == (const FToolData& other) const
	{
		return toolBase == toolBase && power == other.power;
	}

	bool operator != (const FToolData& other) const
	{
		return toolBase != toolBase || power != other.power;
	}
};

FORCEINLINE uint32 GetTypeHash(const FToolData& other)
{
	return FCrc::MemCrc_DEPRECATED(&other, sizeof(FToolData));
}

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FToolEventSigniture, FToolData, tool);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UToolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UToolComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UPlayerClassType* classType;
	
	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<FHandedness>, UTool*> defaultWeapons;

	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<FArmorSlot>, UTool*> defaultArmor; // nude

	UPROPERTY(EditAnywhere)
	int weaponInventoryMaxSize;
	
	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<FArmorSlot>, int> maxSize;

	UPROPERTY(BlueprintAssignable, Category = "Tool Events")
	FToolEventSigniture toolAdded;

	UPROPERTY(BlueprintAssignable, Category = "Tool Events")
	FToolEventSigniture toolRemoved;

	UPROPERTY(BlueprintAssignable, Category = "Tool Events")
	FToolEventSigniture weaponEqipped;

	UPROPERTY(BlueprintAssignable, Category = "Tool Events")
	FToolEventSigniture weaponUeqipped;

	UPROPERTY(BlueprintAssignable, Category = "Tool Events")
	FToolEventSigniture armorEqipped;

	UPROPERTY(BlueprintAssignable, Category = "Tool Events")
	FToolEventSigniture armorUeqipped;

	UPROPERTY(BlueprintReadOnly)
	TArray<FToolData> weapons;
	
	TMap<TEnumAsByte<FHandedness>, FToolData> equippedWeapons;

	//UPROPERTY(BlueprintReadOnly)
	TArray<FToolData> armor;
	TMap<TEnumAsByte<FArmorSlot>, FToolData> equippedArmor;

	TMap<TEnumAsByte<FArmorSlot>, FToolData> nudeArmor; // nude
	
	UInventoryComponent* playerInventory;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
	int GetCurrentPowerRating();

	UFUNCTION(BlueprintCallable)
	FToolData CreateToolInstance(UTool* toolBase);

	UFUNCTION(BlueprintCallable)
	bool AddTool(FToolData newTool);

	UFUNCTION(BlueprintCallable)
	bool RemoveTool(FToolData toolToRemove);
	
	UFUNCTION(BlueprintCallable)
	FToolData EquipDefaultWeapon();
	
	UFUNCTION(BlueprintCallable)
	FToolData EquipDefaultArmor();

	UFUNCTION(BlueprintCallable)
	FToolData EquipWeapon(FToolData weapon);

	UFUNCTION(BlueprintCallable)
	FToolData UnequipWeapon(FToolData weapon);

	UFUNCTION(BlueprintCallable)
	FToolData EquipArmor(FToolData armor);

	UFUNCTION(BlueprintCallable)
	FToolData UnequipArmor(FToolData armor);

	UFUNCTION(BlueprintCallable)
	FToolData SwapWeapons(int direction, FHandedness hand); // direction is up or down by 1

	UFUNCTION(BlueprintCallable)
	FToolData SwapArmor(int direction, FArmorSlot slot); // direction is up or down by 1

};