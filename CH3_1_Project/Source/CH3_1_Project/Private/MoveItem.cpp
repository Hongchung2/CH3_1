#include "MoveItem.h"

DEFINE_LOG_CATEGORY(LogSparta);
AMoveItem::AMoveItem()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

 	PrimaryActorTick.bCanEverTick = true;
	MoveSpeed = FMath::RandRange(200.0f, 300.0f);
	MaxRange = FMath::RandRange(300.0f, 500.0f);
}

void AMoveItem::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
	
	GetWorld()->GetTimerManager().SetTimer(
		MoveDirection, this, &AMoveItem::MovingItem, 0.02f, true);
}

void AMoveItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMoveItem::MovingItem()
{
	// deltaTime을 저장해 주고, 프레임별로 이동거리를 계산해준 다음 이 거리를 계속 더해줌으로써 액터를 움직인다.
	float DeltaTime = GetWorld()->GetDeltaSeconds();
	float DeltaMove = Direction * MoveSpeed * DeltaTime;
	DistanceMoved += DeltaMove;

	// 움직일 거리를 저장할 Move 변수를 FVector형으로 초기화
	FVector Move = FVector::ZeroVector;
	// switch를 통해 이동할 방향을 선택 (뒤에서 함수를 통해 계속 방향을 바꿔줄 예정. 방향은 x축, y축, z축이 존재)
	switch (CurrentAxis)
	{
		case EMoveAxis::x: Move = FVector(DeltaMove, 0.0f, 0.0f); break;
		case EMoveAxis::y: Move = FVector(0.0f, DeltaMove, 0.0f); break;
		case EMoveAxis::z: Move = FVector(0.0f, 0.0f, DeltaMove); break;
	}

	// 실제 이동 (AddActorLocalTransform을 사용하지 않은 이유는 회전은 넣을 필요가 없고 오직 이동만 하면 되기 때문이다.)
	AddActorLocalOffset(Move);

	// 이동 거리거 최대 범위를 넘어가면 다시 원점으로 돌아가기
	if (DistanceMoved >= MaxRange)
	{
		Direction = -1.0f;
	}

	// 이동 거리가 원점으로 돌아오면 방향을 바꿈
	// 부동소수점은 오차가 발생할 수 있기 때문에 0.0f 가 아닌 0.01f를 조건으로 넣어준다.
	else if (DistanceMoved <= 0.01f)
	{
		Direction = 1.0f;
		DistanceMoved = 0.0f;
		SwitchAxis();
	}
}

// 방향을 바꾸는 로직
void AMoveItem::SwitchAxis()
{
	switch (CurrentAxis)
	{
		case EMoveAxis::x: CurrentAxis = EMoveAxis::y; break;
		case EMoveAxis::y: CurrentAxis = EMoveAxis::z; break;
		case EMoveAxis::z: CurrentAxis = EMoveAxis::x; break;
	}
}