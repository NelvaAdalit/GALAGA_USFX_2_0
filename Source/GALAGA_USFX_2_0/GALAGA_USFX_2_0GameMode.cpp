// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_2_0GameMode.h"
#include "GALAGA_USFX_2_0Pawn.h"
#include "FabriNaveArea.h"


AGALAGA_USFX_2_0GameMode::AGALAGA_USFX_2_0GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGALAGA_USFX_2_0Pawn::StaticClass();
}

void AGALAGA_USFX_2_0GameMode::BeginPlay()
{
	Super::BeginPlay();

	AFabriNaves* FabriNaveArea = GetWorld()->SpawnActor<AFabriNaveArea>(AFabriNaveArea::StaticClass());
	//AFabriNaves* FabriNaveTerrestrre = GetWorld()->SpawnActor<AFabriNaveTerrestre>(AFabriNaveTerrestre::StaticClass());

	FVector PosicionNaveEnemiga = FVector(250.0f, 250.0f, 270.f);
	//FVector PosicionNaveEnemigaTerrestre = FVector(250.0f, 250.0f, 270.f);


	UWorld* World = GetWorld();

	if (World != nullptr) {

		FVector PosicionNaveEnemigaAreas = PosicionNaveEnemiga;
		for (int i = 0; i < 11; i++) {

			PosicionNaveEnemigaAreas = FVector(PosicionNaveEnemiga.X + 100.0f, PosicionNaveEnemiga.Y + i * 150, PosicionNaveEnemiga.Z);
			ANaveEnemiga* NaveEnemiga = FabriNaveArea->CrearNaveEnemiga("NaveEnemigaAerea");
			NaveEnemiga->SetActorLocation(PosicionNaveEnemigaAreas);



		}

		









	}
}

void AGALAGA_USFX_2_0GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}

