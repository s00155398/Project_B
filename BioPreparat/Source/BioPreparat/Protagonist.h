// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Item.h"
#include "Protagonist.generated.h"

UENUM(BlueprintType)
enum class EEquipStatus : uint8 {
	EQS_Empty UMETA(DisplayName = "Empty"),
	EQS_Candle UMETA(DisplayName = "Candle"),
	EQS_FlashLight UMETA(DisplayName = "FlashLight"),
	EQS_Pistol UMETA(DisplayName = "Pistol")
};

UCLASS()
class BIOPREPARAT_API AProtagonist : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AProtagonist();

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character | Mesh")
	USkeletalMeshComponent* Mesh1P;

	UPROPERTY(VisibleAnywhere, Category = "Character | Camera")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character | Camera")
	class UCameraComponent* FollowCamera;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Camera")
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Camera")
	float BaseLookUpRate;

	// Enum to track what is currently equipped for the player
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Equipment")
	EEquipStatus CurrentEquipment;

	// An array to hold the items that the player has in their possession
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Equipment")
	TArray<AItem*> HeldEquipment;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Equipment")
	AItem* PickUpItem;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Equipment")
	AItem* CurrentEquippedItem_Right;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Equipment")
	AItem* CurrentEquippedItem_Left;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character | Animation")
	UAnimMontage* FireAnimation_Pistol;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character | Animation")
	UAnimMontage* ReloadAnimation_Pistol;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Animation")
	UAnimInstance* MeshAnimInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character | Weapon")
	bool bReloading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character | Weapon")
	bool bAiming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character | Weapon")
	bool bMelee;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void MoveForward(float input);
	UFUNCTION()
	void MoveRight(float input);
	UFUNCTION()
	void TurnAtRate(float Rate);
	UFUNCTION()
	void LookUpAtRate(float Rate);


	UFUNCTION()
	void BeginSprint();
	UFUNCTION()
	void EndSprint();

	// Functions to handle equiping/unequipping items that the player has held
	UFUNCTION()
	void EquipCandle();
	UFUNCTION()
	void EquipFlashLight();
	UFUNCTION()
	void EquipPistol();

	UFUNCTION()
	void FireWeapon();

	UFUNCTION()
	void ReloadWeapon();

	UFUNCTION(BlueprintImplementableEvent)
	void AimWeapon();

	UFUNCTION()
	void Equip(AItem* ItemToEquip);

	UFUNCTION()
	void PickUp();

	UFUNCTION()
	void MeleeAttack();
};
