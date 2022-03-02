// Fill out your copyright notice in the Description page of Project Settings.


#include "Item_FlashLight.h"
#include "Components/SpotLightComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Sound/SoundCue.h"
#include "Engine/SpotLight.h"
#include "Kismet/GameplayStatics.h"
#include "Protagonist.h"
#include "Item_Pistol.h"
AItem_FlashLight::AItem_FlashLight() {
	FlashLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("FlashLight"));
	FlashLight->SetupAttachment(GetRootComponent());
}

void AItem_FlashLight::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void AItem_FlashLight::Equip(AProtagonist* Character)
{
	if (Character){

		OwningCharacter = Character;

		if (OwningCharacter) {

			if (AItem_Pistol* Pistol = Cast<AItem_Pistol>(OwningCharacter->CurrentEquippedItem_Right)){
				 this->Swap(true);
				 AttachToLeft();
			}
			else {
				this->Swap(true);
				AttachToRight();
			}
		}
		OwningCharacter->HeldEquipment.Add(this);
		ItemState = EItemState::EIS_Equipped;
	}
}

void AItem_FlashLight::ToggleLight()
{
	if (FlashLight)
	{
		FlashLight->ToggleVisibility();
		//PlayEquipSound();
	}
}

void AItem_FlashLight::PlayEquipSound()
{
	if (OnEquipSound)
	{
		UGameplayStatics::PlaySound2D(this, OnEquipSound);
	}
}

void AItem_FlashLight::Swap(bool val){
	Super::Swap(val);
	if (OwningCharacter->CurrentEquippedItem_Right == this || OwningCharacter->CurrentEquippedItem_Left == this)
	{
		ToggleLight();
	}
	else
	{
		if (AItem_Pistol* Pistol = Cast<AItem_Pistol>(OwningCharacter->CurrentEquippedItem_Right))
		{
				if (OwningCharacter->CurrentEquippedItem_Left != this) {
					if (OwningCharacter->CurrentEquippedItem_Left)
					{
						OwningCharacter->CurrentEquippedItem_Left->Swap(false);
					}
					OwningCharacter->CurrentEquippedItem_Left = this;
					AttachToLeft();
				}
		}
		else if (OwningCharacter->CurrentEquippedItem_Right != this) {
			if (OwningCharacter->CurrentEquippedItem_Right)
			{
				OwningCharacter->CurrentEquippedItem_Right->Swap(false);
			}
			OwningCharacter->CurrentEquippedItem_Right = this;

			OwningCharacter->CurrentEquipment = EEquipStatus::EQS_FlashLight;
		}
	}
}

void AItem_FlashLight::AttachToRight()
{
	const USkeletalMeshSocket* RightHandSocket = OwningCharacter->Mesh1P->GetSocketByName(TEXT("FlashLight_Socket_Right"));
	if (RightHandSocket)
	{
		RightHandSocket->AttachActor(this, OwningCharacter->Mesh1P);
		UE_LOG(LogTemp, Warning, TEXT("FlashLight Equipped on Right"));
		OwningCharacter->CurrentEquippedItem_Right = this;
		OwningCharacter->CurrentEquipment = EEquipStatus::EQS_FlashLight;
	}
}

void AItem_FlashLight::AttachToLeft()
{
	const USkeletalMeshSocket* LeftHandSocket = OwningCharacter->Mesh1P->GetSocketByName(TEXT("FlashLight_Socket_Left"));

	if (LeftHandSocket)
	{
		LeftHandSocket->AttachActor(this, OwningCharacter->Mesh1P);
		UE_LOG(LogTemp, Warning, TEXT("Candle Equipped on Left"));
		OwningCharacter->CurrentEquippedItem_Left = this;
	}
}
