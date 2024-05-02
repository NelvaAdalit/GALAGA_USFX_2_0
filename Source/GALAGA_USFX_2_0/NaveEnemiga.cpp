// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemiga.h"	
#include "GALAGA_USFX_2_0Projectile.h"


ANaveEnemiga::ANaveEnemiga()

{
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	ShipMeshComponent->SetupAttachment(RootComponent);
	//ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	RootComponent = ShipMeshComponent;

	PrimaryActorTick.bCanEverTick = true;

	SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));

	SetActorRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));


	velocidad = 250.0f;
	limiteInferior = -1800.0f;


	Tiempo_Disparo = 0;
	Tiempo_Disparo_Generar = 0;
	Distancia_Disparo = FVector(90.f, 0.f, 0.f);

			
}




void ANaveEnemiga::BeginPlay()
{
}

void ANaveEnemiga::Tick(float DeltaTime)
{
}


