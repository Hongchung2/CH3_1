// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spanwer.generated.h"

UCLASS()
class CH3_1_PROJECT_API ASpanwer : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpanwer();

	UPROPERTY(EditAnywhere, Category="Spawn")
	TSubclassOf<AActor> ActorClass;

	UPROPERTY(EditAnywhere, Category="Spawn")
	float SpawnRadius = 200;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void SpawnRandomActor();
};
