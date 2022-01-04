// Fill out your copyright notice in the Description page of Project Settings.


#include "Item_Pistol.h"
#include "Protagonist.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "Animation/AnimInstance.h"
#include "Kismet/KismetSystemLibrary.h"

AItem_Pistol::AItem_Pistol() {
	PistolMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Pistol Mesh"));
	PistolMesh->SetupAttachment(GetRootComponent());
	
	CurrentAmmo = MaxAmmo;
}



void AItem_Pistol::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (ItemState == EItemState::EIS_Pickup))
	{
		AProtagonist* Main = Cast<AProtagonist>(OtherActor);
		if (Main)
		{
			Equip(Main);
		}
	}
}

void AItem_Pistol::FirePistol() {
	if (Pistol_FireAnimation != nullptr && PistolMesh != nullptr && CurrentAmmo > 0)
	{
		PistolAnimInstance = PistolMesh->GetAnimInstance();
		if (MuzzleFlash)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MuzzleFlash, PistolMesh->GetSocketLocation("muzzle_socket"), OwningCharacter->GetViewRotation());
			if (PistolAnimInstance != nullptr && CurrentAmmo > 1)
			{
				PistolAnimInstance->Montage_Play(Pistol_FireAnimation, 1.0f);
				UE_LOG(LogTemp, Warning, TEXT("Pistol Fire!"));
			}
			else if(PistolAnimInstance != nullptr && CurrentAmmo == 1 && Pistol_FireToEmptyAnimation)
			{
				PistolAnimInstance->Montage_Play(Pistol_FireToEmptyAnimation, 1.0f);
				UE_LOG(LogTemp, Warning, TEXT("Pistol Fire!"));
			}
			CurrentAmmo--;
		}
	}
}

void AItem_Pistol::ReloadPistol() {
		bReloading = true;
}

void AItem_Pistol::Equip(AProtagonist* Character)
{
	if (Character)
	{
		const USkeletalMeshSocket* RightHandSocket = Character->Mesh1P->GetSocketByName(TEXT("Pistol_Socket"));

		if (RightHandSocket)
		{
			RightHandSocket->AttachActor(this, Character->Mesh1P);
			OwningCharacter = Character;
			Character->CurrentEquipment = EEquipStatus::EQS_Pistol;
			Character->HeldEquipment.Add(this);

			if (Character->CurrentEquippedItem)
			{
				Character->CurrentEquippedItem->Unequip();
				Character->CurrentEquippedItem = nullptr;
			}

			Character->CurrentEquippedItem = this;

			ItemState = EItemState::EIS_Equipped;
			PlayEquipSound();
		}
	}
}

void AItem_Pistol::Equip()
{
	Super::Equip();
	OwningCharacter->CurrentEquipment = EEquipStatus::EQS_Pistol;
}

void AItem_Pistol::Unequip()
{
	Super::Unequip();
}

