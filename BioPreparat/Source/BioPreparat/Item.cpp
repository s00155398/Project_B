// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Components/SphereComponent.h"
#include "Protagonist.h"
#include "Item_Pistol.h"
// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionVolume = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Volume"));
	RootComponent = CollisionVolume;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(GetRootComponent());

	OwningCharacter = nullptr;
	ItemState = EItemState::EIS_Pickup;
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
	CollisionVolume->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnOverlapBegin);
	CollisionVolume->OnComponentEndOverlap.AddDynamic(this, &AItem::OnOverlapEnd);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItem::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// If the overlapped actor is of the AProtagonist class then set the PickUpItem Variable of that Actor to this class Instance

	UE_LOG(LogTemp, Warning, TEXT("Super::OnOverlapBegin()"));
	if (OtherActor && (ItemState == EItemState::EIS_Pickup)) 
	{
		AProtagonist* Main = Cast<AProtagonist>(OtherActor); 
		if (Main)
		{
			Main->PickUpItem = this;
		}
	}

}

void AItem::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// If overlapp is ended with an actor that is of the AProtagonist class then set the variable PickUpItem to null

	UE_LOG(LogTemp, Warning, TEXT("Super::OnOverlapEnd()"));
	if (OtherActor && (ItemState == EItemState::EIS_Pickup))
	{
		AProtagonist* Main = Cast<AProtagonist>(OtherActor);
		if (Main)
		{
			Main->PickUpItem = nullptr;
		}
	}
}

void AItem::PlayEquipSound()
{}

void AItem::Swap(bool val)
{
	// either hide/reveal and tick/untick this object dependant on the bool fed into this function
	SetActorHiddenInGame(!val); 
	SetActorTickEnabled(val);
}

void AItem::Equip(class AProtagonist* Character)
{}

void AItem::AttachToRight()
{}

void AItem::AttachToLeft()
{}

void AItem::EquipOnPrompt(AProtagonist* Character)
{
	// when called this function will call the swap function and attach the item to either the left or the right hand dependant on prior conditions IE if there is already an item equipped in said hand
	// and what kind of said item is equipped.
	if (Character) {

		OwningCharacter = Character;

		if (OwningCharacter) {

			if (AItem_Pistol* Pistol = Cast<AItem_Pistol>(OwningCharacter->CurrentEquippedItem_Right)) {
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




