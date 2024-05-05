// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodrizaSergev.h"

// Sets default values
ANaveNodrizaSergev::ANaveNodrizaSergev()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	vida = 0;

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

	vida++;
	if (vida % 100 == 0)
	{
		Construir_PatrullaEnigmaNN();
		Construir_Arma();

	}

}

void ANaveNodrizaSergev::Construir_Caso()
{
	FVector Poscicion = FVector(900.0f, 700.0f, 150.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	ANaveNodrizaBase* Caso = GetWorld()->SpawnActor<ANaveNodrizaBase>(Caso->StaticClass(), Poscicion, Rotacion);

}

void ANaveNodrizaSergev::Construir_Escudo()
{
	/*FVector Poscicion = FVector(1000.0f, -400.0f, 250.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	AEscudoNN* Escudo = GetWorld()->SpawnActor<AEscudoNN>(Escudo->StaticClass(), Poscicion, Rotacion);*/
}

void ANaveNodrizaSergev::Construir_PatrullaEnigmaNN()
{
	FVector Poscicion = FVector(800.0f, 300.0f, 150.0f);
	FRotator Rotacion = FRotator(00.0f, 180.0f, 00.0f);
	APatrullaEnigmaNN* Propulsores = GetWorld()->SpawnActor<APatrullaEnigmaNN>(Propulsores->StaticClass(), Poscicion, Rotacion);
}

void ANaveNodrizaSergev::Construir_Arma()
{

	/*FVector Poscicion = FVector(800.0f,300.0f, 250.0f);

	for (int i = 0; i < 11; i++)
	{
		FRotator Rotacion = FRotator(00.0f, 0.0f, 00.0f);
		AArmaNN* Arma = GetWorld()->SpawnActor<AArmaNN>(Arma->StaticClass(), Poscicion, Rotacion);
		Arma->SetActorLocation(Poscicion);
		Poscicion.Y = Poscicion.Y + 100.0f;
	}*/




}


ANaveKelly* ANaveNodrizaSergev::GetNave()
{
	return nullptr;
}

