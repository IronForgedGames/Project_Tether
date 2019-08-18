/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#pragma once

#include "CoreMinimal.h"
#include "Core/Entity/E_Character.h"
#include "TopDown_E_Character.generated.h"

class USpringArmComponent;
class UCameraComponent;

class UToolComponent;
class UStatComponent;
class UVitalsComponent;
class UInventoryComponent;
class UStateComponent;
class UAnimBPHook;
class UPlayerComboComponent;
class UEvadeComponent;
class UDashComponent;

class UState;

/**
 *	A simple top down controller used to prototype the player character
 */
UCLASS()
class PROJECT_TETHER_API ATopDown_E_Character : public AE_Character
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Camera")
	USpringArmComponent* springArm;

	UPROPERTY(EditAnywhere, Category = "Camera")
	UCameraComponent* camera;

public:
	ATopDown_E_Character();
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity")
	UStatComponent* statComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	UToolComponent* toolComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity")
	UVitalsComponent* vitalsComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity")
	UInventoryComponent* inventoryComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity")
	UStateComponent* stateComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity")
	UAnimBPHook* animHook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity")
	UPlayerComboComponent* comboComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity")
	UEvadeComponent* evadeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity")
	UDashComponent* dashComponent;

	UPROPERTY(EditAnywhere, Category = "Locomotion")
	TArray<UState*> focusStates;
	
	UPROPERTY(EditAnywhere, Category = "Locomotion")
	float focusRotateSpeed;

	void MoveForward(float value);
	void MoveRight(float value);

	// primary focus controls
	bool focused;
	FVector focusDirection;

	// focus input modifiers
	bool useDirectionalInput = false; // use the input from a joystick or arrows
	bool useExternalTarget = false; // make the player focus on a target instead of input

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Locomotion")
	void StartFocus();

	UFUNCTION(BlueprintCallable, Category = "Locomotion")
	void EndFocus();

	UFUNCTION(BlueprintCallable, Category = "Locomotion")
	void FocusTick(); // used for calculating direction and rotating the player

	UFUNCTION(BlueprintCallable, Category = "Locomotion")
	bool GetFocused() { return focused; }

	FORCEINLINE class USpringArmComponent* GetSpringArm() const { return springArm; }
	FORCEINLINE class UCameraComponent* GetCamera() const { return camera; }
};
