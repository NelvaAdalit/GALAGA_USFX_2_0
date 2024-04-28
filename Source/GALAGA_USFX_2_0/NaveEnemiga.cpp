// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"


ANaveEnemiga::ANaveEnemiga()

{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	ShipMeshComponent->SetupAttachment(RootComponent);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	RootComponent = ShipMeshComponent;

	PrimaryActorTick.bCanEverTick = true;
			
}

void ANaveEnemiga::mover()
{
}

void ANaveEnemiga::disparo()
{
}

void ANaveEnemiga::Escudo()
{
}

FString ANaveEnemiga::GetNombreNaveEnemiga()
{
	return NombreNaveEnemiga;
}

void ANaveEnemiga::BeginPlay()
{
}

void ANaveEnemiga::Tick(float DeltaTime)
{
}
