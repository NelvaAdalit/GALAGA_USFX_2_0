// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodrizaMarkarean01.h"
#include "NaveNodrizaBase.h"
#include "EscudoNN.h"


// Sets default values
ANaveNodrizaMarkarean01::ANaveNodrizaMarkarean01()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	vida = 0;
}

// Called when the game starts or when spawned
void ANaveNodrizaMarkarean01::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveNodrizaMarkarean01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	vida++;
	if (vida % 100 == 0)
	{
		Construir_Arma();

	}

}

void ANaveNodrizaMarkarean01::Construir_Caso()
{

	FVector Poscicion = FVector(1000.0f, -700.0f, 150.0);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	ANaveNodrizaBase* Caso = GetWorld()->SpawnActor<ANaveNodrizaBase>(Caso->StaticClass(), Poscicion, Rotacion);

}

void ANaveNodrizaMarkarean01::Construir_Escudo()
{
	/*FVector Poscicion = FVector(600.0f, 100.0f, 250.0f);
	FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	AEscudoNN* Escudo = GetWorld()->SpawnActor<AEscudoNN>(Escudo->StaticClass(), Poscicion, Rotacion);*/

}

void ANaveNodrizaMarkarean01::Construir_PatrullaEnigmaNN()
{
}

void ANaveNodrizaMarkarean01::Construir_Arma()
{

	FVector Poscicion = FVector(1000.0f,-1230.0f, 250.0f);

	for (int i = 0; i < 11; i++)
	{
		FRotator Rotacion = FRotator(00.0f, 0.0f, 00.0f);
		AArmaNN* Arma = GetWorld()->SpawnActor<AArmaNN>(Arma->StaticClass(), Poscicion, Rotacion);
		Arma->SetActorLocation(Poscicion);
		Poscicion.Y = Poscicion.Y + 100.0f;
	}
}


ANaveKelly* ANaveNodrizaMarkarean01::GetNave()
{
	return nullptr;
}


