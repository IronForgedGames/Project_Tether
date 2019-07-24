/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "E_Character.generated.h"

class UEntity;
class UStatComponent;
class UVitalsComponent;
class UInventoryComponent;

UCLASS()
class PROJECT_TETHER_API AE_Character : public ACharacter
{
	GENERATED_BODY()

public:
	AE_Character();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity")
	UEntity* entity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity")
	UStatComponent* statComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity")
	UVitalsComponent* vitalsComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity")
	UInventoryComponent* inventoryComponent;
public:	

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Entity")
	UEntity* GetEntity() { return entity; }
};
