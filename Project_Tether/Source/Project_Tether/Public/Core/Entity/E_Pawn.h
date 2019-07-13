/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "E_Pawn.generated.h"

UCLASS()
class PROJECT_TETHER_API AE_Pawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AE_Pawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(EditAnywhere, Category = "Entity")
	UEntity* entity;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Entity")
	UEntity* GetEntity() { return entity; }
};
