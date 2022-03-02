// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Protagonist.h"
#include "Item_Candle.generated.h"
UCLASS()
class BIOPREPARAT_API AItem_Candle : public AItem
{
	GENERATED_BODY()

public:
	AItem_Candle();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Particles")
	bool bCandleParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Sound")
	class USoundCue* OnEquipSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Particles")
	class UParticleSystemComponent* CandleParticle;

	// Cannot add a UFUNCTION MACRO as it already has it in the parent class
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	

	UFUNCTION()
	void ToggleFlame();

	virtual void PlayEquipSound() override;

	
	virtual void Swap(bool val) override;

	virtual void AttachToRight() override;

	virtual void AttachToLeft() override;

	virtual void Equip(class AProtagonist* Character) override;
};
