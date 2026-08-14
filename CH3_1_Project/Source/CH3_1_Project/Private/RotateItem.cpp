// Fill out your copyright notice in the Description page of Project Settings.


#include "RotateItem.h"

// Sets default values
ARotateItem::ARotateItem()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	RotationSpeed = FMath::RandRange(100.0f, 400.0f);
	PrimaryActorTick.bCanEverTick = true;
	isActive = false;
}

void ARotateItem::BeginPlay()
{
	Super::BeginPlay();
	
	// 또는 2초마다 반복 호출 (loop = true)
	// 회전이 계속 이어지게 하도록
	GetWorld()->GetTimerManager().SetTimer(
		RotateTimerHandle, this, &ARotateItem::RotationItem, 0.02f, true);

	// 5초 단위로 액터가 사라졌다가 생김
	GetWorld()->GetTimerManager().SetTimer(
		SetActiveTimerHandle, this, &ARotateItem::SetActive, 5.0f, true);
}

void ARotateItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARotateItem::RotationItem()
{
	float DeltaTime = GetWorld()->GetDeltaSeconds();
	
	AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
}

// 액터가 사라지게 하는 호출
// isActive를 이용해 액터가 사라지는 것과 나타나는 것을 반복하도록 설정.
void ARotateItem::SetActive()
{
	isActive = !isActive;
	SetActorHiddenInGame(isActive); // 화면에서 숨기기
	SetActorEnableCollision(!isActive); // 콜리전 끄기
	SetActorTickEnabled(!isActive); // Tick 멈추기
}

