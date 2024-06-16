// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_2_0GameMode.h"
#include "GALAGA_USFX_2_0Pawn.h"
#include "NaveEnemiga.h"	
#include "FacadeCanon.h"
#include "NaveEnemigaArea.h"

#include "NaveCombate.h"
#include "NaveNodrizaBase.h"
#include "BuilderNaveNodriza.h"
#include "NaveNodriza.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "Kismet/GameplayStatics.h"
#include "BallAdapter.h"
#include "RadarNave.h"

#include "IVISITABLE.h"
#include "VisitorDisparo.h"
#include "NaveEnemigaEspia.h"



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
	//Adaptador=GetWorld()->SpawnActor<ABallAdapter>(ABallAdapter::StaticClass(),FVector(0,0,0),FRotator::ZeroRotator);
	//Jugador->SetBounceBall(Adaptador);
	//Jugador->Lanzar();


	FormacionCanones = GetWorld()->SpawnActor<AFacadeCanon>();
	FormacionCanones->SpawnCanons(1);
	//FormacionCanones->IncreaseNivel();





	FRotator rotacionNave = FRotator(0.0f,0.0f, 0.0f);

	FVector PosicionInicialNavesAereas = FVector(-150, -2520, 214);
	FVector PosicionInicialNavesEspias = FVector(500.0f, 500.0f, 250.0f);
	FVector ColocacionInicialNaves = FVector(-500.0f, 50.0f, 270.f);



	//AplicarDisparoVisitantes(ANaveEnemigaEspia::StaticClass(), VisitorDisparo);


	//Pattern Observer

//castear el radar 

	
	//RadarNave = Cast <ARadarNave>(GetWorld()->SpawnActor(ARadarNave::StaticClass()));

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		FVector ColocacionActual = ColocacionInicialNaves;
		for (int i = 0; i < 5; i++) {

		/*
			ColocacionActual = FVector(1780.0f, 200.0f *i, 160.0f);
			ANaveEnemigaArea* NaveEnemigaAreaActual = World->SpawnActor<ANaveEnemigaArea>(ColocacionActual, rotacionNave);
			TANavesEnemigas.Add(NaveEnemigaAreaActual);*/

			//RadarNave->Suscribir(NaveEnemigaAreaActual);

		}
		
		for (int i = 0; i < 5; i++) {

			ColocacionActual = FVector(-1780.0f, -200.0f * i, 160.0f);
			ANaveEnemigaEspia* NaveEnemigaEspiaActual = World->SpawnActor<ANaveEnemigaEspia>(ColocacionActual, rotacionNave);
			TANavesEnemigas.Add(NaveEnemigaEspiaActual);

		}

		
	}



	//NaveNodriza = GetWorld()->SpawnActor<ANaveNodriza>(ANaveNodriza::StaticClass());
	//Director = GetWorld()->SpawnActor<ADirectorDeNaveNodriza>(ADirectorDeNaveNodriza::StaticClass());
	//Director->ConstruirNAVENODRIZA(NaveNodriza);
	//Director->establecerNavenodriza();
	//ANaveALFAN1* naveAlfa = Director->devolverNave();




}





void AGALAGA_USFX_2_0GameMode::Tick(float DeltaTime)
{
	

	Super::Tick(DeltaTime);

	TiempoTranscurrido++;

	if (TiempoTranscurrido >= 100)
	{
		int numeroEnemigo = FMath::RandRange(0, 9);
		if (GEngine)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));


			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));

		}
		//TANavesEnemigas[numeroEnemigo]->PrimaryActorTick.bCanEverTick = true;
		//TANavesEnemigas[numeroEnemigo]->SetVelocidad(0);
	}
	
}

