// Fill out your copyright notice in the Description page of Project Settings.


#include "RadarNave.h"
#include "NaveEnemigaArea.h"
#include "EscudoNN.h"

// Sets default values
ARadarNave::ARadarNave()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARadarNave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARadarNave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARadarNave::RenovarSuscripcion(IISuscriptor* Suscriptor)
{
	if(Suscriptor){
		Suscriptores.Add(Suscriptor);
	}

}

void ARadarNave::renovarProyectiles(IISuscriptor* Suscriptor)
{
	if(Suscriptor){
		Suscriptores.Remove(Suscriptor);
	}
}

void ARadarNave::AyudaPropulsores()
{

}

void ARadarNave::AyudaEscudo()
{
	NaveEnemigaAerea = Cast <ANaveEnemigaArea>(GetWorld()->SpawnActor(ANaveEnemigaArea::StaticClass()));


	FVector PosicionEscudo = FVector(200,500,250);
	
	if (NaveEnemigaAerea->GetEnergiaNave() == 140)
	{

		GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Escudo Creado"));
		Escudo = Cast <AEscudoNN>(GetWorld()->SpawnActor(AEscudoNN::StaticClass()));
		AEscudoNN* NuevoEscudo = GetWorld()->SpawnActor <AEscudoNN>(PosicionEscudo, FRotator::ZeroRotator);
	}
	NaveEnemigaAerea->RENOVAR("Escudos");
}

void ARadarNave::Notificar(const FString& Accion)
{

}

void ARadarNave::AyudaDronExtra()
{

}

