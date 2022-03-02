#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "Components/SpotLightComponent.h"
#include "Item_FlashLight.generated.h"
UCLASS()
class BIOPREPARAT_API AItem_FlashLight : public AItem
{
	GENERATED_BODY()
public:
	AItem_FlashLight();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Sound")
	class USoundCue* OnEquipSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Light")
	class USpotLightComponent* FlashLight;

	// Cannot add a UFUNCTION MACRO as it already has it in the parent class
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	virtual void Equip(class AProtagonist* Character);

	UFUNCTION()
	void ToggleLight();

	virtual void PlayEquipSound() override;

	virtual void Swap(bool val) override;

	virtual void AttachToRight() override;

	virtual void AttachToLeft() override;
};
