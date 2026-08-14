// Fill out your copyright notice in the Description page of Project Settings.


#include "Spanwer.h"

// Sets default values
ASpanwer::ASpanwer()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ASpanwer::BeginPlay()
{
	Super::BeginPlay();

	SpawnRandomActor();
}

void ASpanwer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpanwer::SpawnRandomActor()
{
	// ActorClass가 아니면 리턴
	if (!ActorClass) return;

	// 스폰 위치를 랜덤으로 정해줌
	FVector RandomOffset(FMath::RandRange(-SpawnRadius, SpawnRadius), FMath::RandRange(-SpawnRadius, SpawnRadius), 800.0f);
	FVector SpawnLocation = GetActorLocation() + RandomOffset;
	// 회전을 랜덤으로 정해줌
	FRotator SpawnRotation(FMath::RandRange(0.0f, 360.0f), FMath::RandRange(0.0f, 360.0f), 0.0f);
	
	// 액터 스폰
	GetWorld()->SpawnActor<AActor>(ActorClass, SpawnLocation, SpawnRotation);
}