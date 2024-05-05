// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaNN.h"

// Sets default values
AArmaNN::AArmaNN()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/BulletEnemyLevel2.BulletEnemyLevel2'"));
	Arma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	Arma->SetStaticMesh(ShipMesh.Object);
	;//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));

	SetActorRelativeScale3D(FVector(3.0f, 3.0f, 3.0f));

	velocidad = 500.0f;

	RootComponent = Arma;
}

// Called when the game starts or when spawned
void AArmaNN::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmaNN::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AArmaNN::Mover(float DeltaTime)
{
	FVector PosActual = GetActorLocation();

	FVector NuevaPos = PosActual + FVector(-velocidad * DeltaTime, 0.0f, 0.0f);

	SetActorLocation(NuevaPos);
}

