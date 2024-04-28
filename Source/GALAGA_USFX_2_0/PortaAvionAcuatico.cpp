// Fill out your copyright notice in the Description page of Project Settings.


#include "PortaAvionAcuatico.h"

// Sets default values
APortaAvionAcuatico::APortaAvionAcuatico()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APortaAvionAcuatico::BeginPlay()
{
	Super::BeginPlay();
	
}

void APortaAvionAcuatico::buildArsenal()
{
}

void APortaAvionAcuatico::buildCombustible()
{
}

void APortaAvionAcuatico::buildRestauracion()
{
}

void APortaAvionAcuatico::buildPista()
{
}

void APortaAvionAcuatico::buildInstalaciones()
{
}

void APortaAvionAcuatico::buildModelo()
{
}


APortaAviones* APortaAvionAcuatico::getPortaAviones()
{
	return nullptr;
}

// Called every frame
void APortaAvionAcuatico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

