// Fill out your copyright notice in the Description page of Project Settings.


#include "CanonBomba.h"
#include"GALAGA_USFX_2_0Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ProyectilBomba.h"
#include "Kismet/GameplayStatics.h"

ACanonBomba::ACanonBomba()
{
		PrimaryActorTick.bCanEverTick = true;
		static ConstructorHelpers::FObjectFinder<UStaticMesh> CanonMesh(TEXT("StaticMesh'/Game/Meshes/MissileAmmunition.MissileAmmunition'"));
		meshCanion->SetStaticMesh(CanonMesh.Object);
		//variables para controlar el disparo
		MaxProjectile = 6;
		NumberFired = 0;
		bCanFire= true;
		SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	

}

void ACanonBomba::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
	    Disparar();
}

void ACanonBomba::Disparar()
{
	if (bCanFire && NumberFired < MaxProjectile) {
		bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

		// creador de proycetiles
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			FVector Location = GetActorLocation();
			FRotator Rotation = GetActorRotation();
			World->SpawnActor<AProyectilBomba>(Location, Rotation);
			NumberFired++;

			// Establecer el temporizador para el próximo disparo
			FTimerHandle TimerHandle;// Temporizador para el siguiente disparo
			GetWorldTimerManager().SetTimer(TimerHandle, this, &ACanonBomba::ResetFire, rand() % 6 + 1, false);
			// Disparar cada 1-6 segundos porque el temporizador se establece en 1-6 segundos






		}
	}
}

void ACanonBomba::ResetFire()
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
