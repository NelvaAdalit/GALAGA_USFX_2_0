// Fill out your copyright notice in the Description page of Project Settings.


#include "PAvionesTerrestre.h"

// Sets default values
APAvionesTerrestre::APAvionesTerrestre()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APAvionesTerrestre::BeginPlay()
{
	Super::BeginPlay();
	
}

void APAvionesTerrestre::buildArsenal()
{
}

void APAvionesTerrestre::buildCombustible()
{
}

void APAvionesTerrestre::buildRestauracion()
{
}

void APAvionesTerrestre::buildPista()
{
}

void APAvionesTerrestre::buildInstalaciones()
{
}

void APAvionesTerrestre::buildModelo()
{
}



APortaAviones* APAvionesTerrestre::getPortaAviones()
{
	return nullptr;
}

// Called every frame
void APAvionesTerrestre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

