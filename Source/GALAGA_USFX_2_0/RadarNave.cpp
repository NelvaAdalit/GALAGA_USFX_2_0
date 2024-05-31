// Fill out your copyright notice in the Description page of Project Settings.


#include "RadarNave.h"
#include "NaveEnemigaArea.h"
#include "EscudoNN.h"
#include "CanonBala.h"
#include "CapsulaBomba.h"
#include "ISuscriptor.h"

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

void ARadarNave::Suscribir(IISuscriptor* Suscriptor)
{
	if(Suscriptor){
		Suscriptores.Add(Suscriptor);
	}


}

void ARadarNave::Desuscribir(IISuscriptor* Suscriptor)
{
	if(Suscriptor){
		Suscriptores.Remove(Suscriptor);
	}
}
	

void ARadarNave::Notificar(const FString& Accion)
{
	//con un for recorro los suscriptes y les envio la accion

	for (IISuscriptor* Suscriptor : Suscriptores) {
		NaveEnemigaAerea = Cast <ANaveEnemigaArea>(GetWorld()->SpawnActor(ANaveEnemigaArea::StaticClass()));


		FVector CanonBalaP= FVector(200, -500, 350);

		if (NaveEnemigaAerea->GetEnergiaNave() == 140)
		{

			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Propulsor Creado"));
			CanonBala = Cast <ACanonBala>(GetWorld()->SpawnActor(ACanonBala::StaticClass()));
			ACanonBala* NuevoCanonBala = GetWorld()->SpawnActor <ACanonBala>(CanonBalaP, FRotator::ZeroRotator);
			NaveEnemigaAerea->RENOVAR("CanonBala");

		}


		NaveEnemigaAerea = Cast <ANaveEnemigaArea>(GetWorld()->SpawnActor(ANaveEnemigaArea::StaticClass()));


		FVector PosicionEscudo = FVector(200, -500, 300);

		if (NaveEnemigaAerea->GetEnergiaNave() == 120)
		{

			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Escudo Creado"));
			Escudo = Cast <AEscudoNN>(GetWorld()->SpawnActor(AEscudoNN::StaticClass()));
			AEscudoNN* NuevoEscudo = GetWorld()->SpawnActor <AEscudoNN>(PosicionEscudo, FRotator::ZeroRotator);
			NaveEnemigaAerea->RENOVAR("Escudos");
		}
		
		NaveEnemigaAerea = Cast <ANaveEnemigaArea>(GetWorld()->SpawnActor(ANaveEnemigaArea::StaticClass())); {
			FVector PosicionCapsulaBomba= FVector(400, 500, 250);

			if (NaveEnemigaAerea->GetEnergiaNave() == 100)
			{

				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Dron Creado"));
				Bomba = Cast <ACapsulaBomba>(GetWorld()->SpawnActor(ACapsulaBomba::StaticClass()));
				ACapsulaBomba* NuevoBomba= GetWorld()->SpawnActor <ACapsulaBomba>(PosicionCapsulaBomba, FRotator::ZeroRotator);
				NaveEnemigaAerea->RENOVAR("CapsulaBomba");
			}
			

		}
	}
}



