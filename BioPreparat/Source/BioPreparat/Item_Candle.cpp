// Fill out your copyright notice in the Description page of Project Settings.
#include "Item_Candle.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"

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
		const USkeletalMeshSocket* RightHandSocket = Character->Mesh1P->GetSocketByName(TEXT("Candle_Soket"));

		if (RightHandSocket)
		{
			RightHandSocket->AttachActor(this, Character->Mesh1P);

			OwningCharacter = Character;

			Character->CurrentEquipment = EEquipStatus::EQS_Candle;
			Character->HeldEquipment.Add(this);

			if (Character->CurrentEquippedItem)
			{
				Character->CurrentEquippedItem->Unequip();
				Character->CurrentEquippedItem = nullptr;
			}

			Character->CurrentEquippedItem = this;

			ItemState = EItemState::EIS_Equipped;

			PlayEquipSound();

			if (!bCandleParticles)
			{
				CandleParticle->Deactivate();
			}
		}
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
	OwningCharacter->CurrentEquipment = EEquipStatus::EQS_Candle;
}

void AItem_Candle::Unequip()
{
	Super::Unequip();
}
