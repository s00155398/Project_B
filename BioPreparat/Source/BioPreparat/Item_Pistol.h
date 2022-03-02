// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Item_Pistol.generated.h"

UCLASS()
class BIOPREPARAT_API AItem_Pistol : public AItem
{
	GENERATED_BODY()
public:

	AItem_Pistol();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Mesh")
	USkeletalMeshComponent* PistolMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Particle")
	class UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Sound")
	class USoundCue* PistolFireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Sound")
	class USoundCue* PistolDryFireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Animation")
	UAnimMontage* Pistol_FireAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Animation")
	UAnimMontage* Pistol_FireToEmptyAnimation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item | Animation")
	UAnimInstance* PistolAnimInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Weapon")
	bool bReloading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Weapon")
	int MaxAmmo = 8;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Weapon")
	int CurrentAmmo;

	UPROPERTY(EditDefaultsOnly, Category = "Item | Weapon")
	TSubclassOf<class AProjectile> Projectile;

	// Cannot add a UFUNCTION MACRO as it already has it in the parent class
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	UFUNCTION()
	void FirePistol();
	UFUNCTION()
	void ReloadPistol();

	UFUNCTION()
	void SpawnProjectile();

	virtual void Equip(class AProtagonist* Character);

	virtual void Swap(bool val) override;
};
