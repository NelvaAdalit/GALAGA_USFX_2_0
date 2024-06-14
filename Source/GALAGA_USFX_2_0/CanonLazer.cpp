// Fill out your copyright notice in the Description page of Project Settings.


#include "CanonLazer.h"
#include"GALAGA_USFX_2_0Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "proyectilLazer.h"
#include "Kismet/GameplayStatics.h"

ACanonLazer::ACanonLazer()
{
		PrimaryActorTick.bCanEverTick = true;
		static ConstructorHelpers::FObjectFinder<UStaticMesh> CanonMesh(TEXT("StaticMesh'/Game/Meshes/BulletAmmunition1.BulletAmmunition1'"));
		meshCanion->SetStaticMesh(CanonMesh.Object);
		MaxProjectile = 6;
		NumberFired = 0;
		bCanFire = true;
		SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
}

void ACanonLazer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Disparar();
}

void ACanonLazer::Disparar()
{

	
}


void ACanonLazer::ResetFire()
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
