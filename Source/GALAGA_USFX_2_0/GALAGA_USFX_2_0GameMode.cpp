// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_2_0GameMode.h"
#include "GALAGA_USFX_2_0Pawn.h"
#include "NaveEnemiga.h"	
#include "NaveEnemigaArea.h"
#include "FabriNaves.h"
#include "NaveNodrizaBase.h"
#include "BuilderNaveNodriza.h"
#include "NaveNodriza.h"
#include "NaveNodrizaMarkarean01.h"
#include "NaveNodrizaSergev.h"


AGALAGA_USFX_2_0GameMode::AGALAGA_USFX_2_0GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;	
	DefaultPawnClass = AGALAGA_USFX_2_0Pawn::StaticClass();

}

void AGALAGA_USFX_2_0GameMode::BeginPlay()
{
	Super::BeginPlay();

	FVector PosicionInicialNvaesAreas = FVector(-150, -250, 0);	
	
	UWorld* World = GetWorld();
	if (World)
	{
		// Crear las naves enemigas
		for (int i = 0; i < 6; i++)
		{
			ANaveEnemiga* NuveasNavesAereas = AFabriNaves::OrdenarNaveEnemiga("Nave Enemiga Area", World, FVector(0.0f, 200.0f * i, 160.0f), FRotator::ZeroRotator);;
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

