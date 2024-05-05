// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveALFAN1.h"
#include "GALAGA_USFX_2_0Projectile.h"

// Sets default values
ANaveALFAN1::ANaveALFAN1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel3.EnemyLevel3'"));
	MallaAlfa = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	MallaAlfa->SetupAttachment(RootComponent);
	MallaAlfa->SetStaticMesh(ShipMesh.Object);
	RootComponent = MallaAlfa;

	SetActorRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));

}

// Called when the game starts or when spawned
void ANaveALFAN1::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANaveALFAN1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

