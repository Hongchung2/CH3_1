// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotateItem.generated.h"

UCLASS()
class CH3_1_PROJECT_API ARotateItem : public AActor
{
	GENERATED_BODY()
	
public:	
	ARotateItem();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="RotateItem|Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RotateItem|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RotateItem|Properties")
	float RotationSpeed;

	UPROPERTY()
	bool isActive;           

	UPROPERTY()
	FTimerHandle RotateTimerHandle;
	UPROPERTY()
	FTimerHandle SetActiveTimerHandle;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void RotationItem();
	void SetActive();
	void Spawner();
};
