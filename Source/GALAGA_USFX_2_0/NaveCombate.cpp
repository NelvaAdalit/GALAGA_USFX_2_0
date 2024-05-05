// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCombate.h"

ANaveCombate::ANaveCombate()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel2.EnemyLevel2'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));

	SetActorRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));

	NombreNave = "Nave Enemiga Combate";

}

void ANaveCombate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveCombate::Mover(float DeltaTime)
{

	if (GetActorLocation().X < -1800) {
		SetActorLocation(FVector(0.0f, 00, 250));
	}
}
