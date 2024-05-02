// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaArea.h"

ANaveEnemigaArea::ANaveEnemigaArea()
{
	PrimaryActorTick.bCanEverTick = true;

	 static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel2.EnemyLevel2'"));
	 ShipMeshComponent->SetStaticMesh(ShipMesh.Object);

	 NombreNave = "Nave Enemiga Area";
}

void ANaveEnemigaArea::Tick(float DeltaTime)

{
		Super::Tick(DeltaTime);
		FVector PosicionActual = GetActorLocation();	
		float Movimiento = velocidad * DeltaTime;	
		FVector NuevaPosicion = FVector(PosicionActual.X*-1, PosicionActual.Y, PosicionActual.Z );
		SetActorLocation(NuevaPosicion);


		if (NuevaPosicion.X < limiteInferior)
		{
			SetActorLocation(FVector(1800.0f, PosicionActual.Y, 200.0f));
		}
}

void ANaveEnemigaArea::DisparoNave()
{

}
