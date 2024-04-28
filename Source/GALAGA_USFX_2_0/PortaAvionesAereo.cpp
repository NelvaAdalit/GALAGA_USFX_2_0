// Fill out your copyright notice in the Description page of Project Settings.


#include "PortaAvionesAereo.h"

// Sets default values
APortaAvionesAereo::APortaAvionesAereo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



// Called when the game starts or when spawned
void APortaAvionesAereo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APortaAvionesAereo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APortaAvionesAereo::setArsenal(FString arsenal)
{
}

void APortaAvionesAereo::setCombustibe(FString combustible)
{
}

void APortaAvionesAereo::setRestauracion(FString restauracion)
{
}

void APortaAvionesAereo::setCobertizo(FString cobertizo)
{
}

void APortaAvionesAereo::setMovimientoMotorPAA(AMovimientoMotorPAA* MovimientoMotorPAA)
{
    


}

void APortaAvionesAereo::setChasisPAA(AChasisPAA* ChasisPAA)
{
}


