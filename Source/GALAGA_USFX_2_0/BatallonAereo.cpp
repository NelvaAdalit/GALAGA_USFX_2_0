// Fill out your copyright notice in the Description page of Project Settings.


#include "BatallonAereo.h"

// Sets default values
ABatallonAereo::ABatallonAereo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABatallonAereo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABatallonAereo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABatallonAereo::SetPelotonAlfa(FString tipo, FVector ubicacion, int cantidad)
{
}

void ABatallonAereo::SetPelotonBeta(FString tipo, FVector ubicacion, int cantidad)
{
}

void ABatallonAereo::SetPelotonOmega(FString tipo, FVector ubicacion, int cantidad)
{
}

void ABatallonAereo::SetPelotonEnigma(FString tipo, FVector ubicacion, int cantidad)
{
}

ABatallonAereo* ABatallonAereo::getBatallonInterfaz() const
{
	return nullptr;
}

void ABatallonAereo::JuntaPelotones()
{
}

