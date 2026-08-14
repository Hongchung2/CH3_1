#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveItem.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSparta, Warning, All);

UENUM()
enum class EMoveAxis : uint8
{
	x,
	y,
	z
};

UCLASS()
class CH3_1_PROJECT_API AMoveItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AMoveItem();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="MoveItem|Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MoveItem|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="MoveItem|Properties")
	FVector StartLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="MoveItem|Properties")
	float MoveSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MoveItem|Properties")
	float MaxRange;

	UPROPERTY()
	float Direction = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="MoveItem|Properties")
	float DistanceMoved = 0.0f;
	UPROPERTY()
	EMoveAxis CurrentAxis = EMoveAxis::x;

	UPROPERTY()
	FTimerHandle MoveDirection;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void MovingItem();
	void SwitchAxis();
};
