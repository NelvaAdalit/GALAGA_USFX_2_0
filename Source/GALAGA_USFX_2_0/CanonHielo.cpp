// Fill out your copyright notice in the Description page of Project Settings.


#include "CanonHielo.h"
#include"GALAGA_USFX_2_0Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Proyectil.h"
#include "VisitorDisparo.h"
#include "Kismet/GameplayStatics.h"

ACanonHielo::ACanonHielo()
{
		PrimaryActorTick.bCanEverTick = true;
		static ConstructorHelpers::FObjectFinder<UStaticMesh> CanonMesh(TEXT("StaticMesh'/Game/Meshes/Shield.Shield'"));
		meshCanion->SetStaticMesh(CanonMesh.Object);
		MaxProjectile = 6;
		NumberFired = 0;
		bCanFire = true;
		SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
}

void ACanonHielo::BeginPlay()
{
	Super::BeginPlay();

	VisitorDisparo = Cast<AVisitorDisparo>(GetWorld()->SpawnActor(AVisitorDisparo::StaticClass()));

}

void ACanonHielo::Accept(IIVISITOR* Visitor)
{
	Visitor->Visit(this);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Visitando CanonHielo"));


}

void ACanonHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Disparar();
	if (VisitorDisparo) {
	
		VisitorDisparo->Visit(this);
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se encontro el visitor"));
	
	}

}

void ACanonHielo::Disparar()
{

	//if (bCanFire && NumberFired < MaxProjectile) {
	//	bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

	//	// creador de proycetiles
	//	UWorld* const World = GetWorld();
	//	if (World != NULL)
	//	{
	//		FVector Location = GetActorLocation();
	//		FRotator Rotation = GetActorRotation();
	//		World->SpawnActor<AProyectil>(Location, Rotation);
	//		NumberFired++;

	//		// Establecer el temporizador para el próximo disparo
	//		FTimerHandle TimerHandle;
	//		GetWorldTimerManager().SetTimer(TimerHandle, this, &ACanonHielo::ResetFire, rand() % 6 + 1, false);






	//	}
	//}
}

void ACanonHielo::ResetFire()
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


