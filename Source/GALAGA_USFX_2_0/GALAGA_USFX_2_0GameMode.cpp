// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_2_0GameMode.h"
#include "GALAGA_USFX_2_0Pawn.h"
#include "NaveEnemiga.h"	
#include "FacadeCanon.h"
#include "NaveEnemigaArea.h"
#include "NaveEnemigaEspia.h"
#include "NaveCombate.h"
#include "FabriNaves.h"
#include "NaveNodrizaBase.h"
#include "BuilderNaveNodriza.h"
#include "NaveNodriza.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "Kismet/GameplayStatics.h"
#include "BallAdapter.h"



AGALAGA_USFX_2_0GameMode::AGALAGA_USFX_2_0GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;	
	DefaultPawnClass = AGALAGA_USFX_2_0Pawn::StaticClass();

}

void AGALAGA_USFX_2_0GameMode::BeginPlay()
{
	Super::BeginPlay();

	Jugador=Cast<AGALAGA_USFX_2_0Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	Adaptador=GetWorld()->SpawnActor<ABallAdapter>(ABallAdapter::StaticClass(),FVector(0,0,0),FRotator::ZeroRotator);
	Jugador->SetBounceBall(Adaptador);
	Jugador->Lanzar();
	FormacionCanones = GetWorld()->SpawnActor<AFacadeCanon>();
	FormacionCanones->SpawnCanons(1);
	//FormacionCanones->IncreaseNivel();





	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
	//FVector ColocacionInicialNaves = FVector(-500.0f, 50.0f, 270.f);
	FVector PosicionInicialNavesEspias = FVector(-150, -2520, 214);
	//
	UWorld* World = GetWorld();
	if (World)
	{
		//FVector ColocacionActual = ColocacionInicialNaves;
		// Crear las naves enemigas
		for (int i = 0; i < 5; i++)
		{
			//ColocacionActual = FVector(ColocacionActual.X+250, ColocacionActual.Y + i , ColocacionActual.Z);
			ANaveEnemiga* NewAerea = AFabriNaves::OrdenarNaveEnemiga("Nave Enemiga Area", World, FVector(780.0f, 400.0f * i, 160.0f), FRotator::ZeroRotator);
			
			//TANavesEnemigas.Add(NewAerea);
		}
		
		for (int z = 0; z < 6; z++) {

		         ANaveEnemiga*NuevasNaveEnemigaEspia=AFabriNaves::OrdenarNaveEnemiga("Nave Enemiga Espia",World,FVector(780.0f,-200.0*z,100.0f), FRotator::ZeroRotator);
		        // TANavesEnemigas.Push(NuevasNaveEnemigaEspia);
		
		}
		for (int j = 0; j < 7; j++) {
			ANaveEnemiga*NuevasNaveEnemigaCombate = AFabriNaves::OrdenarNaveEnemiga("Nave Enemiga Combate", World, FVector(1800.0f, -100.0f * j, 160.0f), FRotator::ZeroRotator);
			//TANavesEnemigas.Push(NuevasNaveEnemigaCombate);
		}
	}


	NaveNodriza = GetWorld()->SpawnActor<ANaveNodriza>(ANaveNodriza::StaticClass());
	Director = GetWorld()->SpawnActor<ADirectorDeNaveNodriza>(ADirectorDeNaveNodriza::StaticClass());
	Director->ConstruirNAVENODRIZA(NaveNodriza);
	Director->establecerNavenodriza();
	ANaveALFAN1* naveAlfa = Director->devolverNave();

}

void AGALAGA_USFX_2_0GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}

