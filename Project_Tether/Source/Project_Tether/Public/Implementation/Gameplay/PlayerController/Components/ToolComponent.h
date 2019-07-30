// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Public/Core/Tools/Tool.h"
#include "TopDown_E_Character.h"
#include "ToolComponent.generated.h"

class UTool;
class ATopDown_E_Character;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FToolEventSigniture, UTool*, tool);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UToolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UToolComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UClassType> classType;
	
	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<Handedness>, TSubclassOf<UTool>> defaultWeapons;

	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<ArmorSlot>, TSubclassOf<UTool>> defaultArmor; // nude


	UPROPERTY(EditAnywhere)
	int weaponInventoryMaxSize;
	
	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<ArmorSlot>, int> maxSize;

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

	TArray<UTool*> weapons;
	TMap<TEnumAsByte<Handedness>, UTool*> equippedWeapons;

	TArray<UTool*> armor;
	TMap<TEnumAsByte<ArmorSlot>, UTool*> equippedArmor;

	TMap<TEnumAsByte<ArmorSlot>, UTool*> nudeArmor; // nude
	
	UInventoryComponent* playerInventory;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
	int GetCurrentPowerRating();

	UFUNCTION(BlueprintCallable)
	UTool* CreateToolInstance(TSubclassOf<UTool> toolBase);

	UFUNCTION(BlueprintCallable)
	bool AddTool(UTool * newTool);

	UFUNCTION(BlueprintCallable)
	bool RemoveTool(UTool* toolToRemove);

	UFUNCTION(BlueprintCallable)
	UTool* EquipWeapon(UTool* weapon);

	UFUNCTION(BlueprintCallable)
	UTool* UnequipWeapon(UTool* weapon);

	UFUNCTION(BlueprintCallable)
	UTool* EquipArmor(UTool* armor);

	UFUNCTION(BlueprintCallable)
	UTool* UnequipArmor(UTool* armor);

	UFUNCTION(BlueprintCallable)
	UTool* SwapWeapons(int direction, Handedness hand); // direction is up or down by 1

	UFUNCTION(BlueprintCallable)
	UTool* SwapArmor(int direction, ArmorSlot slot); // direction is up or down by 1
};