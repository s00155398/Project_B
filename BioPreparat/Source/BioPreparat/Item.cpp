// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Components/SphereComponent.h"
#include "Protagonist.h"
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
{

}

void AItem::Swap(bool val)
{
	SetActorHiddenInGame(!val);
	SetActorTickEnabled(val);
}

void AItem::Equip(class AProtagonist* Character)
{
}

void AItem::AttachToRight()
{

}

void AItem::AttachToLeft()
{

}




