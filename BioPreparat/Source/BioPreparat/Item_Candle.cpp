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
	Super::OnOverlapBegin(OverlappedComponent, OtherActor, OtherComp,  OtherBodyIndex,  bFromSweep, SweepResult);
}


void AItem_Candle::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnOverlapEnd(OverlappedComponent, OtherActor, OtherComp,  OtherBodyIndex);
}

void AItem_Candle::EquipOnPrompt(AProtagonist* Character)
{
	Super::EquipOnPrompt(Character);
}


void AItem_Candle::ToggleFlame() {
	if (CandleParticle)
	{
		CandleParticle->ToggleActive();
		//PlayEquipSound();
	}
}

void AItem_Candle::PlayEquipSound()
{
	if (OnEquipSound)
	{
		UGameplayStatics::PlaySound2D(this, OnEquipSound);
	}
}

void AItem_Candle::Swap(bool val)
{
	Super::Swap(val);
	if (OwningCharacter->CurrentEquippedItem_Left == this || OwningCharacter->CurrentEquippedItem_Right == this)
	{
		ToggleFlame();
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

			OwningCharacter->CurrentEquipment = EEquipStatus::EQS_Candle;
		}
	}
}

void AItem_Candle::AttachToRight()
{
	const USkeletalMeshSocket* RightHandSocket = OwningCharacter->Mesh1P->GetSocketByName(TEXT("Candle_Socket_Right"));
	if (RightHandSocket)
	{
		RightHandSocket->AttachActor(this, OwningCharacter->Mesh1P);
		UE_LOG(LogTemp, Warning, TEXT("Candle Equipped on Right"));
		OwningCharacter->CurrentEquippedItem_Right = this;
		OwningCharacter->CurrentEquipment = EEquipStatus::EQS_Candle;
	}
}

void AItem_Candle::AttachToLeft()
{
	const USkeletalMeshSocket* LeftHandSocket = OwningCharacter->Mesh1P->GetSocketByName(TEXT("Candle_Socket_Left"));

	if (LeftHandSocket)
	{
		LeftHandSocket->AttachActor(this, OwningCharacter->Mesh1P);
		UE_LOG(LogTemp, Warning, TEXT("Candle Equipped on Left"));
		OwningCharacter->CurrentEquippedItem_Left = this;
	}
}
