// Fill out your copyright notice in the Description page of Project Settings.


#include "Item_FlashLight.h"
#include "Components/SpotLightComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Sound/SoundCue.h"
#include "Engine/SpotLight.h"
#include "Kismet/GameplayStatics.h"
#include "Protagonist.h"

AItem_FlashLight::AItem_FlashLight() {
	FlashLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("FlashLight"));
	FlashLight->SetupAttachment(GetRootComponent());
}

void AItem_FlashLight::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
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

void AItem_FlashLight::Equip(AProtagonist* Character)
{
		if (Character)
		{
			const USkeletalMeshSocket* RightHandSocket = Character->Mesh1P->GetSocketByName(TEXT("Lantern_01_Socket"));

			if (RightHandSocket)
			{
				RightHandSocket->AttachActor(this, Character->Mesh1P);
				OwningCharacter = Character;
				Character->CurrentEquipment = EEquipStatus::EQS_FlashLight;
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

void AItem_FlashLight::ToggleLight()
{
	if (FlashLight)
	{
		FlashLight->ToggleVisibility();
		PlayEquipSound();
	}
}

void AItem_FlashLight::PlayEquipSound()
{
	if (OnEquipSound)
	{
		UGameplayStatics::PlaySound2D(this, OnEquipSound);
	}
}

void AItem_FlashLight::Equip()
{
	Super::Equip();
	OwningCharacter->CurrentEquipment = EEquipStatus::EQS_FlashLight;
}

void AItem_FlashLight::Unequip()
{
	Super::Unequip();
}
