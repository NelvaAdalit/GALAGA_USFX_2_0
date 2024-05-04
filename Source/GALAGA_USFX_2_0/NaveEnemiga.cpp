// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.h"
//#include "Components/StaticMeshComponent.h"
//#include "UObject/ConstructorHelpers.h"
//#include "Engine/StaticMesh.h"
////#include "GALAGA_USFX_2_0Projectile.h"


ANaveEnemiga::ANaveEnemiga()

{
	PrimaryActorTick.bCanEverTick = true;
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	//ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;

	Speed = 250.0f;
	LimiteInferior = -1800.0f;
	FireRate = 1.5f;

	//SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));

	//SetActorRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));


	////Speed = 250.0f;
	//LimiteInferior = -1800.0f;

 


	

			
}




void ANaveEnemiga::BeginPlay()
{
}

void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*if (ubicacionActual.X > LimiteSuperior) {
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
	}*/
}


