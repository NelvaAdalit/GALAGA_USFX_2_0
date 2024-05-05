// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"
#include "NaveALFAN1.h"
#include "NaveNodrizaBase.h"

// Sets default values
ANaveNodriza::ANaveNodriza()
{

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Movimiento = CreateDefaultSubobject<UMovimientoNN>(TEXT("Movimiento"));
	vida =2 ;
}

void ANaveNodriza::BeginPlay()
{

	Super::BeginPlay();
}

void ANaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	vida++;
	if (vida % 40 == 0)
	{

		Construir_PatrullaEnigmaNN();

	}

}

void ANaveNodriza::Construir_Caso()
{
	FVector Poscicion = FVector(570.0f, 100.0f, 150.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	ANaveNodrizaBase* Caso = GetWorld()->SpawnActor<ANaveNodrizaBase>(Caso->StaticClass(), Poscicion, Rotacion);
	//estructura de la anave  nodriza

}

void ANaveNodriza::Construir_Escudo()
{
	FVector Poscicion = FVector(800.0f, 100.0f, 250.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	AEscudoNN* Escudo = GetWorld()->SpawnActor<AEscudoNN>(Escudo->StaticClass(), Poscicion, Rotacion);
}

void ANaveNodriza::Construir_PatrullaEnigmaNN()
{
	//patrulla

}

void ANaveNodriza::Construir_Arma()
{
	//clase disparadora 
}


ANaveKelly* ANaveNodriza::GetNave()
{
	return nullptr;
}




