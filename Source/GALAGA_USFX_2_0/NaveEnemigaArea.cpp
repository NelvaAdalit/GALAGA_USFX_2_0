// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemigaArea.h"
#include"GALAGA_USFX_2_0Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "proyectilLazer.h"
#include "Kismet/GameplayStatics.h"
#include "RadarNave.h"
#include "Proyectil.h"
#include "CanonBala.h"
#include "EscudoNN.h"
#include "NaveKelly.h"




ANaveEnemigaArea::ANaveEnemigaArea()
{
	PrimaryActorTick.bCanEverTick = true;

	 static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel2.EnemyLevel2'"));
	 mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	 SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));

	 SetActorRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
	 MaxProjectile = 10;
	 NumberFired = 0;
	 bCanFire = true;
	 
	// VidaNave = 10;
	 velocidad = -100;


}

void ANaveEnemigaArea::BeginPlay()
{
	Super::BeginPlay();

	
}

void ANaveEnemigaArea::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

	Mover(DeltaTime);
	Disparar();
	
}

void ANaveEnemigaArea::Mover(float DeltaTime)
{

	/*velocidad = -100;*/
	ubicacionActual = GetActorLocation();
	float NuevaX = velocidad * DeltaTime + ubicacionActual.X;
	FVector NuevaPosicion = FVector(NuevaX, ubicacionActual.Y, ubicacionActual.Z);
	SetActorLocation(NuevaPosicion);



  
}  


void ANaveEnemigaArea::Disparar()
{

	if (bCanFire && NumberFired < MaxProjectile) {
		bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

		// creador de proycetiles
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			FVector Location = GetActorLocation();
			FRotator Rotation = GetActorRotation();
			World->SpawnActor<AproyectilLazer>(Location, Rotation);
			NumberFired++;

			// Establecer el temporizador para el próximo disparo
			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &ANaveEnemigaArea::ResetFire, rand() % 6 + 1, false);

			EnergiaNave -= 20;
			if (EnergiaNave == 140)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ayuda"));
				AyudaEscudo();
			}
			if( EnergiaNave == 100 )
				AyudaPropulsores();
			}
		if (EnergiaNave == 80)
		{
				AyudaDronExtra();
		}

			GetEnergiaNave();
		}

	}



void ANaveEnemigaArea::ResetFire()
{
	if (NumberFired < MaxProjectile)
	{
		bCanFire = true;  // Permitir el siguiente disparo
		Disparar();         // Disparar automáticamente la siguiente bomba
	}
	else
	{
		NumberFired = 0;   // Reiniciar el contador de bombas para el próximo ciclo de disparos reabastecido
		bCanFire = false;
	}
}



void ANaveEnemigaArea::RENOVAR(FString _accion)
{
	if (_accion == "Escudos")
	{
		AyudaEscudo();
	}
	
	if (_accion == "Propulsores")
	{
		AyudaPropulsores();
	}

	if (_accion == "Dron")
	{
		AyudaDronExtra();
	}
	
	
	
}

void ANaveEnemigaArea::AyudaPropulsores()
{
	FVector PosicionPropulsores = FVector(170, 140, 200);

	ACanonBala* NuevoPropulsor = GetWorld()->SpawnActor <ACanonBala>(PosicionPropulsores, FRotator::ZeroRotator);

}

void ANaveEnemigaArea::AyudaEscudo()
{
	FVector PosicionEscudo = FVector(70, 20, 300);

    AEscudoNN* NuevoEscudo = GetWorld()->SpawnActor <AEscudoNN>(PosicionEscudo, FRotator::ZeroRotator);
	
}

void ANaveEnemigaArea::AyudaDronExtra()
{
	FVector PosicionDron = FVector(-170, 70, 300);
	ANaveKelly* NuevoDron = GetWorld()->SpawnActor <ANaveKelly>(PosicionDron, FRotator::ZeroRotator);
}









