// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemigaArea.h"


ANaveEnemigaArea::ANaveEnemigaArea()
{
	PrimaryActorTick.bCanEverTick = true;

	 static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel2.EnemyLevel2'"));
	 mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	 SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));

	 SetActorRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));


	
}

void ANaveEnemigaArea::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

}

void ANaveEnemigaArea::movimento(float DeltaTime)
{
}
