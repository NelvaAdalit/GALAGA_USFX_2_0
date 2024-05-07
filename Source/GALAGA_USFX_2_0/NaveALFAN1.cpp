// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveALFAN1.h"

// Sets default values
ANaveALFAN1::ANaveALFAN1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetActorRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	 
	vida = 0;
}

// Called when the game starts or when spawned
void ANaveALFAN1::BeginPlay()
{
	Super::BeginPlay();
	
}


void ANaveALFAN1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	vida++;

	if (vida%100==0)
	{
		SetPatrullaEnigma(avance);
		SetArma(numero);

	}
}

void ANaveALFAN1::SetCasco(int a)
{

	for (int f=0; f<a; f++) {
		FVector Poscicion = FVector(570.0f, 100.0f*f, 150.0f);
		FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
		Estructura = GetWorld()->SpawnActor<ACascoNN>(ACascoNN::StaticClass(), Poscicion, Rotacion);
	}
	

}

void ANaveALFAN1::SetEscudo(int d)
{
	for (int z = 0; z < d; z++) {
		FVector Poscicion = FVector(570.0f, 100.0f*z, 150.0f);
		FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
		 Escudo = GetWorld()->SpawnActor<AEscudoNN>(AEscudoNN::StaticClass(), Poscicion, Rotacion);
	}






}

void ANaveALFAN1::SetPatrullaEnigma(int a)
{
	avance = a;
	FVector Poscicion = FVector(800.0f, 300.0f, 150.0f);
	FRotator Rotacion = FRotator(00.0f, 180.0f, 00.0f);
	patrullaEneigma = GetWorld()->SpawnActor<APatrullaEnigmaNN>(APatrullaEnigmaNN::StaticClass(), Poscicion, Rotacion);

}

void ANaveALFAN1::SetArma(int l)
{
	numero = l;


	FVector Poscicion = FVector(800.0f,300.0f, 250.0f);


	for (int i = 0; i < 11; i++)
	{
		FRotator Rotacion = FRotator(00.0f, 0.0f, 00.0f);
		 Arma = GetWorld()->SpawnActor<AArmaNN>(AArmaNN::StaticClass(), Poscicion, Rotacion);
		Arma->SetActorLocation(Poscicion);
		Poscicion.Y = Poscicion.Y + 100.0f;
	}

}

