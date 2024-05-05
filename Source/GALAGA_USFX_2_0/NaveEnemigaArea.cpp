// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemigaArea.h"
#include "Kismet/GameplayStatics.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "Engine/InstancedStaticMesh.h"

ANaveEnemigaArea::ANaveEnemigaArea()
{
	PrimaryActorTick.bCanEverTick = true;

	 static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel2.EnemyLevel2'"));
	 mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	 SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));

	 SetActorRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));

	 NombreNave = "Nave Enemiga Area";
	
	 Movimiento = CreateDefaultSubobject<UMovimientoNN>(TEXT("Movimiento"));

	
}

void ANaveEnemigaArea::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

}