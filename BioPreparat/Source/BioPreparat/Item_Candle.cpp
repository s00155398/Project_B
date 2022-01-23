// Fill out your copyright notice in the Description page of Project Settings.
#include "Item_Candle.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "Item_Pistol.h"
AItem_Candle::AItem_Candle() {
	bCandleParticles = true;

	CandleParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Candle Particles"));
	CandleParticle->SetupAttachment(GetRootComponent());
}

void AItem_Candle::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
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


void AItem_Candle::Equip(AProtagonist* Character)
{
	if (Character)
	{
		OwningCharacter = Character;

		if (OwningCharacter)
		{
			if (AItem_Pistol* Pistol = Cast<AItem_Pistol>(OwningCharacter->CurrentEquippedItem_Right))
			{
				if (OwningCharacter->CurrentEquippedItem_Left)
				{
					OwningCharacter->CurrentEquippedItem_Left->Unequip();
				}
				AttachToLeft();

				OwningCharacter->CurrentEquippedItem_Left = this;

				ItemState = EItemState::EIS_Equipped;

				PlayEquipSound();

				if (!bCandleParticles)
				{
					CandleParticle->Deactivate();
				}
			}
			else
			{
				if (OwningCharacter->CurrentEquippedItem_Right)
				{
					OwningCharacter->CurrentEquippedItem_Right->Unequip();
				}
				AttachToRight();
				OwningCharacter->CurrentEquippedItem_Right = this;
				OwningCharacter->CurrentEquipment = EEquipStatus::EQS_Candle;

				ItemState = EItemState::EIS_Equipped;

				if (!bCandleParticles)
				{
					CandleParticle->Deactivate();
				}
			}
		}
		Character->HeldEquipment.Add(this);
	}
}


void AItem_Candle::ToggleFlame() {
	if (CandleParticle)
	{
		CandleParticle->ToggleActive();
		PlayEquipSound();
	}
}

void AItem_Candle::PlayEquipSound()
{
	if (OnEquipSound)
	{
		UGameplayStatics::PlaySound2D(this, OnEquipSound);
	}
}

void AItem_Candle::Equip()
{
	Super::Equip(); 
	if (OwningCharacter->CurrentEquippedItem_Left == this || OwningCharacter->CurrentEquippedItem_Right == this)
	{
		ToggleFlame();
	}
	else
	{
		if (AItem_Pistol* Pistol = Cast<AItem_Pistol>(OwningCharacter->CurrentEquippedItem_Right))
		{
			if (OwningCharacter->CurrentEquippedItem_Left != this) {
				OwningCharacter->CurrentEquippedItem_Left->Unequip();
				OwningCharacter->CurrentEquippedItem_Left = this;
				AttachToLeft();
			}

		}
		else if (OwningCharacter->CurrentEquippedItem_Right != this)
		{
			OwningCharacter->CurrentEquippedItem_Right->Unequip();
			OwningCharacter->CurrentEquippedItem_Right = this;
			OwningCharacter->CurrentEquipment = EEquipStatus::EQS_Candle;
			PlayEquipSound();
		}
	}
}

void AItem_Candle::Unequip()
{
	Super::Unequip();
}

void AItem_Candle::AttachToRight()
{
	const USkeletalMeshSocket* RightHandSocket = OwningCharacter->Mesh1P->GetSocketByName(TEXT("Candle_Socket_Right"));
	if (RightHandSocket)
	{
		RightHandSocket->AttachActor(this, OwningCharacter->Mesh1P);
		UE_LOG(LogTemp, Warning, TEXT("Candle Equipped on Right"));
	}
}

void AItem_Candle::AttachToLeft()
{
	const USkeletalMeshSocket* LeftHandSocket = OwningCharacter->Mesh1P->GetSocketByName(TEXT("Candle_Socket_Left"));

	if (LeftHandSocket)
	{
		LeftHandSocket->AttachActor(this, OwningCharacter->Mesh1P);
		UE_LOG(LogTemp, Warning, TEXT("Candle Equipped on Left"));
	}
}
