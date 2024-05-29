// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.h"
#include "proyectilLazer.h"


ANaveEnemiga::ANaveEnemiga()

{
	PrimaryActorTick.bCanEverTick = true;
    mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
    mallaNaveEnemiga->SetupAttachment(RootComponent);
    RootComponent = mallaNaveEnemiga;
    SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
    SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));

	velocidad = 100.0f;
	energia = 100.0f;

}

void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ubicacionActual.X > LimiteSuperior) {
		SetActorLocation(FVector(0.0f, ubicacionActual.Y, ubicacionActual.Z));


	}
	if (ubicacionActual.X < Limiteinferior) {
		SetActorLocation(FVector(1530.0f, ubicacionActual.Y, ubicacionActual.Z));
	}

	if (ubicacionActual.Y > LimiteDerecho) {
		SetActorLocation(FVector(ubicacionActual.X, 0.0f, ubicacionActual.Z));
	}
	if (ubicacionActual.Y < LimiteIzquierdo) {
		SetActorLocation(FVector(ubicacionActual.X, 100.0f, ubicacionActual.Z));
	}



}


