// Fill out your copyright notice in the Description page of Project Settings.


#include "Protagonist.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Item.h"
#include "Item_Candle.h"
#include "Item_FlashLight.h"
#include "Components/CapsuleComponent.h"
#include "Animation/AnimInstance.h"
#include "Item_Pistol.h"
// Sets default values
AProtagonist::AProtagonist()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(GetCapsuleComponent());
	FollowCamera->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FollowCamera);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeLocation(FVector(0.0f,0.0f,-163.0f));
	Mesh1P->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	Mesh1P->CastShadow = false;

	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	
	CurrentEquipment = EEquipStatus::EQS_Empty;

	bReloading = false;
	bMelee = false;
}

// Called when the game starts or when spawned
void AProtagonist::BeginPlay()
{
	Super::BeginPlay();
	MeshAnimInstance = Mesh1P->GetAnimInstance();
}

// Called every frame
void AProtagonist::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AProtagonist::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed , this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AProtagonist::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AProtagonist::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AProtagonist::TurnAtRate);

	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AProtagonist::LookUpAtRate);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AProtagonist::BeginSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AProtagonist::EndSprint);


	PlayerInputComponent->BindAction("EquipCandle", IE_Pressed, this, &AProtagonist::EquipCandle);
	PlayerInputComponent->BindAction("EquipFlashLight", IE_Pressed, this, &AProtagonist::EquipFlashLight);
	PlayerInputComponent->BindAction("EquipPistol", IE_Pressed, this, &AProtagonist::EquipPistol);

	PlayerInputComponent->BindAction("FireWeapon", IE_Pressed, this, &AProtagonist::FireWeapon);
	PlayerInputComponent->BindAction("ReloadWeapon", IE_Pressed, this, &AProtagonist::ReloadWeapon);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AProtagonist::AimWeapon);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &AProtagonist::AimWeapon);
	PlayerInputComponent->BindAction("Melee", IE_Pressed, this, &AProtagonist::MeleeAttack);

}

void AProtagonist::MoveForward(float input)
{
	if ((Controller != nullptr) && (input != 0.0f))
	{
		// Find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

		// created a rotation matrix from yaw axis
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, input);
	}
}

void AProtagonist::MoveRight(float input)
{
	if ((Controller != nullptr) && (input != 0.0f))
	{
		// Find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

		// created a rotation matrix from yaw axis
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, input);
	}
}

void AProtagonist::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AProtagonist::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AProtagonist::BeginSprint()
{
	if (!bAiming && !bMelee)
	{
		GetCharacterMovement()->MaxWalkSpeed = 600;
	}
}

void AProtagonist::EndSprint()
{
	GetCharacterMovement()->MaxWalkSpeed = 350;
}

void AProtagonist::EquipCandle() 
{
	if (!bMelee)
	{
		for (AItem* i : HeldEquipment)
		{
			if (AItem_Candle* Candle = Cast<AItem_Candle>(i))
			{
				Equip(Candle);
				return;
			}
		}
	}
}

void AProtagonist::EquipFlashLight()
{
	if (!bMelee)
	{
		for (AItem* i : HeldEquipment)
		{
			if (AItem_FlashLight* FlashLight = Cast<AItem_FlashLight>(i))
			{
				Equip(FlashLight);
				return;
			}
		}
	}
}

void AProtagonist::EquipPistol()
{
	if (CurrentEquipment != EEquipStatus::EQS_Pistol && !bMelee)
	{
		for (AItem* i : HeldEquipment)
		{
			if (AItem_Pistol* Pistol = Cast<AItem_Pistol>(i))
			{
				Equip(Pistol);
				return;
			}
		}
	}
}

void AProtagonist::FireWeapon()
{
	MeshAnimInstance = Mesh1P->GetAnimInstance();

	if (CurrentEquipment == EEquipStatus::EQS_Pistol)
	{
		if (AItem_Pistol* Pistol = Cast<AItem_Pistol>(CurrentEquippedItem_Right))
		{
			if (!Pistol->bReloading && !bReloading)
			{
				Pistol->FirePistol();
				if (FireAnimation_Pistol != nullptr)
				{
					if (MeshAnimInstance != nullptr)
					{
						MeshAnimInstance->Montage_Play(FireAnimation_Pistol, 1.0f);		
					}
				}
			}
		}
	}
}

void AProtagonist::ReloadWeapon()
{
		if (AItem_Pistol* Pistol = Cast<AItem_Pistol>(CurrentEquippedItem_Right))
		{
			if (!Pistol->bReloading && !bReloading && !bAiming)
			{
				Pistol->ReloadPistol();
				bReloading = true;
			}
		}
}

void AProtagonist::Equip(AItem* ItemToEquip)
{
	if (ItemToEquip)
	{
		ItemToEquip->Equip();
	}
}

void AProtagonist::MeleeAttack()
{
	if (CurrentEquipment != EEquipStatus::EQS_Pistol && !bMelee)
	{
		bMelee = true;
	}
}
