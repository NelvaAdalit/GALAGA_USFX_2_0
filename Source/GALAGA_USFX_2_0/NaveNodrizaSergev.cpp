// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodrizaSergev.h"

// Sets default values
ANaveNodrizaSergev::ANaveNodrizaSergev()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveNodrizaSergev::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveNodrizaSergev::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveNodrizaSergev::Construir_Caso()
{
	FVector Poscicion = FVector(570.0f, 100.0f, 150.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	ANaveNodrizaBase* Caso = GetWorld()->SpawnActor<ANaveNodrizaBase>(Caso->StaticClass(), Poscicion, Rotacion);

}

void ANaveNodrizaSergev::Construir_Escudo()
{
	FVector Poscicion = FVector(600.0f, 100.0f, 250.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	AEscudoNN* Escudo = GetWorld()->SpawnActor<AEscudoNN>(Escudo->StaticClass(), Poscicion, Rotacion);
}

void ANaveNodrizaSergev::Construir_Propulsores()
{
	FVector Poscicion = FVector(800.0f, 300.0f, 150.0f);
	FRotator Rotacion = FRotator(00.0f, 180.0f, 00.0f);
	APropulsoresNN* Propulsores = GetWorld()->SpawnActor<APropulsoresNN>(Propulsores->StaticClass(), Poscicion, Rotacion);
}

void ANaveNodrizaSergev::Construir_Arma()
{
	FVector Poscicion = FVector(800.0f, 400.0f, 250.0f);
	FRotator Rotacion = FRotator(00.0f, 180.0f, 00.0f);
	AArmaNN* Arma = GetWorld()->SpawnActor<AArmaNN>(Arma->StaticClass(), Poscicion, Rotacion);

}

void ANaveNodrizaSergev::Construir_Movimiento()
{
}

ANaveKelly* ANaveNodrizaSergev::GetNave()
{
	return nullptr;
}

