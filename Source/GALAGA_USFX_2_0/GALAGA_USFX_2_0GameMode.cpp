// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_2_0GameMode.h"
#include "GALAGA_USFX_2_0Pawn.h"
#include "NaveEnemiga.h"	
#include "NaveEnemigaArea.h"
#include "NaveEnemigaEspia.h"
#include "FabriNaves.h"
#include "NaveNodrizaBase.h"
#include "BuilderNaveNodriza.h"
#include "NaveNodriza.h"
#include "NaveNodrizaMarkarean01.h"
#include "NaveNodrizaSergev.h"
#include "ProyectilNaveEnemiga.h"
#include "GALAGA_USFX_2_0Projectile.h"


AGALAGA_USFX_2_0GameMode::AGALAGA_USFX_2_0GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;	
	DefaultPawnClass = AGALAGA_USFX_2_0Pawn::StaticClass();

}

void AGALAGA_USFX_2_0GameMode::BeginPlay()
{
	Super::BeginPlay();
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
			ANaveEnemiga* NewAerea = AFabriNaves::OrdenarNaveEnemiga("Nave Enemiga Area", World, FVector(0.0f, 200.0f * i, 160.0f), FRotator::ZeroRotator);
			//TANavesEnemigas.Add(NewAerea);
		}
		
		for (int z = 0; z < 6; z++) {

		         ANaveEnemiga*NuevasNaveEnemigaEspia=AFabriNaves::OrdenarNaveEnemiga("Nave Enemiga Espia",World,FVector(1780.0f,-100.0*z,200.0f), FRotator::ZeroRotator);
		         TANavesEnemigas.Push(NuevasNaveEnemigaEspia);
		
		}
	}


	
	FVector PosicionInicialNvaesNodrizas = FVector(500.0f, 500.0f, 150.0f);
	/*ANaveNodrizaBase* NaveNodriza=World->SpawnActor<ANaveNodrizaBase>(PosicionInicialNvaesNodrizas, FRotator::ZeroRotator);*/

	Director = GetWorld()->SpawnActor<ADirectorDeNaveNodriza>();//esto no se hace otro
	IBuilderNaveNodriza*ContruirNaveNodriza = GetWorld()->SpawnActor<ANaveNodriza>();
	ANaveKelly* KellyNave = Director->NaveNodriza(ContruirNaveNodriza);
	IBuilderNaveNodriza*ConstruirNaveNodrizaMarkarean01=GetWorld()->SpawnActor<ANaveNodrizaMarkarean01>();
	ANaveKelly* KellyNaveMarkarean01 = Director->NaveNodrizaMarkarean01(ConstruirNaveNodrizaMarkarean01);
	IBuilderNaveNodriza*ConstruirNaveNodrizaSergev=GetWorld()->SpawnActor<ANaveNodrizaSergev>();
	ANaveKelly* KellyNaveSergev = Director->NaveNodrizaSergev(ConstruirNaveNodrizaSergev);
	

	/*HACER ESTO: PARA OTRO TIPO DE NAVE NODRIZA/TENGO QUE HACER TRES CONCRETS 
	IBuilderNaveNodriza*ContruirNaveNodriza2 = GetWorld()->SpawnActor<ANaveNodriza02>();
	ANaveKelly* KellyNave2 = Director->NaveNodriza(ContruirNaveNodriza2);*/
	///tengo que crear 
	//si quiero otro constructor creo otra clase que implemente la interfaz IBuilderNaveNodriza 










}

void AGALAGA_USFX_2_0GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}

