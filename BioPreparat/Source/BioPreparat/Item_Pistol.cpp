// Fill out your copyright notice in the Description page of Project Settings.


#include "Item_Pistol.h"
#include "Protagonist.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "Animation/AnimInstance.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Projectile_Pistol.h"

AItem_Pistol::AItem_Pistol() {
	PistolMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Pistol Mesh"));
	PistolMesh->SetupAttachment(GetRootComponent());
	
	CurrentAmmo = MaxAmmo;
}



void AItem_Pistol::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void AItem_Pistol::FirePistol() {
	if (Pistol_FireAnimation != nullptr && PistolMesh != nullptr && CurrentAmmo > 0)
	{
		PistolAnimInstance = PistolMesh->GetAnimInstance();
		if (MuzzleFlash)
		{
			UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, PistolMesh, "muzzle_socket", PistolMesh->GetSocketLocation("muzzle_socket"), OwningCharacter->GetViewRotation(), EAttachLocation::KeepWorldPosition, false);

			if (PistolAnimInstance != nullptr && CurrentAmmo > 1)
			{

				PistolAnimInstance->Montage_Play(Pistol_FireAnimation, 1.0f);
			}
			else if(PistolAnimInstance != nullptr && CurrentAmmo == 1 && Pistol_FireToEmptyAnimation)
			{
				PistolAnimInstance->Montage_Play(Pistol_FireToEmptyAnimation, 1.0f);
			}
			SpawnProjectile();
		}
	}
	else if(PistolDryFireSound && CurrentAmmo == 0)
	{
		UGameplayStatics::SpawnSound2D(GetWorld(), PistolDryFireSound);
	}
}

void AItem_Pistol::ReloadPistol() {
		bReloading = true;
}

void AItem_Pistol::SpawnProjectile()
{
	UWorld* const World = GetWorld();
	if (Projectile)
	{
		CurrentAmmo--;
		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

		// spawn the projectile at the muzzle
		World->SpawnActor<AProjectile>(Projectile, PistolMesh->GetSocketLocation("muzzle_socket"), PistolMesh->GetSocketRotation("muzzle_socket"), ActorSpawnParams);
	}
}

void AItem_Pistol::Equip(AProtagonist* Character)
{
	if (Character)
	{
		OwningCharacter = Character;

		if (OwningCharacter)
		{
			const USkeletalMeshSocket* RightHandSocket = OwningCharacter->Mesh1P->GetSocketByName(TEXT("Pistol_Socket"));
			if (RightHandSocket)
			{
				RightHandSocket->AttachActor(this, OwningCharacter->Mesh1P);
				if (OwningCharacter->CurrentEquippedItem_Right)
				{
					OwningCharacter->CurrentEquippedItem_Left = OwningCharacter->CurrentEquippedItem_Right;
					OwningCharacter->CurrentEquippedItem_Left->AttachToLeft();
					OwningCharacter->CurrentEquippedItem_Right = this;
					OwningCharacter->HeldEquipment.Add(this);
					ItemState = EItemState::EIS_Equipped;
					//PlayEquipSound();
					UE_LOG(LogTemp, Warning, TEXT("Pistol Equipped!"));
				}
				else
				{
					OwningCharacter->CurrentEquippedItem_Right = this;
					OwningCharacter->HeldEquipment.Add(this);
					ItemState = EItemState::EIS_Equipped;
					//PlayEquipSound();
					UE_LOG(LogTemp, Warning, TEXT("Pistol Equipped!"));
				}
				OwningCharacter->CurrentEquipment = EEquipStatus::EQS_Pistol;
			}
		}
	}

}

void AItem_Pistol::Swap(bool val)
{
	Super::Swap(val);
}

