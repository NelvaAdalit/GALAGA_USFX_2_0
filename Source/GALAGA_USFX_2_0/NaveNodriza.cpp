// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"
#include "NaveALFAN1.h"
#include "NaveNodrizaBase.h"

// Sets default values
ANaveNodriza::ANaveNodriza()
{

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANaveNodriza::BeginPlay()
{

	
}

void ANaveNodriza::Tick(float DeltaTime)
{


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
}

void ANaveNodriza::Construir_Propulsores()
{//nave hija 
	FVector Poscicion =FVector  (900.0f, 700.0f, 150.0f);
	FRotator Rotacion = FRotator(00.0f, 180.0f, 00.0f);
	ANaveALFAN1* Propulsores  = GetWorld()->SpawnActor<ANaveALFAN1>(Propulsores->StaticClass(), Poscicion, Rotacion);
}

void ANaveNodriza::Construir_Arma()
{
	//clase disparadora 
}

void ANaveNodriza::Construir_Movimiento()
{
	//UMovimientoNN* Movimiento = NewObject<UMovimientoNN>();
}

ANaveKelly* ANaveNodriza::GetNave()
{
	return nullptr;
}



//mover,vida



// Called when the game starts or when spawned


