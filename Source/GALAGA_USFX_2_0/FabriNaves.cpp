// Fill out your copyright notice in the Description page of Project Settings.


#include "FabriNaves.h"
#include "NaveEnemigaArea.h"
#include "NaveEnemigaEspia.h"
#include "NaveCombate.h"
AFabriNaves::AFabriNaves()
{
		PrimaryActorTick.bCanEverTick = true;
}

void AFabriNaves::BeginPlay()
{
	Super::BeginPlay();
}

void AFabriNaves::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}

ANaveEnemiga* AFabriNaves::OrdenarNaveEnemiga(FString NombreNave, UWorld* World, FVector Posicion, FRotator Rotacion)
{
	FVector PosicionNave = Posicion;
	if (NombreNave == "Nave Enemiga Area") {
	
		ANaveEnemigaArea* NaveEnemigaArea = World->SpawnActor<ANaveEnemigaArea>(PosicionNave, Rotacion);
		return NaveEnemigaArea;
	
	}

	FVector PosicionNaveEspia = Posicion;
	if (NombreNave == "Nave Enemiga Espia") {
		ANaveEnemigaEspia* NaveEnemigaEspias = World->SpawnActor<ANaveEnemigaEspia>(PosicionNaveEspia, Rotacion);
	
	
	
	}
	FVector PosicionNaveCombate = Posicion;
	if (NombreNave == "Nave	Enemiga Combate") {
		ANaveCombate* NaveCombate = World->SpawnActor<ANaveCombate>(PosicionNaveCombate, Rotacion);
		
	}

	return nullptr;
}
