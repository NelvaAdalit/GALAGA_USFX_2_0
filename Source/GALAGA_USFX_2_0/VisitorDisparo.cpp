// Fill out your copyright notice in the Description page of Project Settings.


#include "VisitorDisparo.h"
#include "NaveEnemigaEspia.h"
#include "CanonHielo.h"
#include "proyectilLazer.h"
#include "proyectil.h"


// Sets default values
AVisitorDisparo::AVisitorDisparo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaxProjectile = 6;
	NumberFired = 0;
	bCanFire = true;
}

// Called when the game starts or when spawned
void AVisitorDisparo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVisitorDisparo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVisitorDisparo::Visit(ANaveEnemigaEspia* NaveEspia)
{
}

void AVisitorDisparo::Visit(ACanonHielo* CanonHielo)
{ 
	TArray<AActor*> FoundActors;
	CanonHielo->GetAttachedActors(FoundActors);	
	for (AActor* Actor : FoundActors)
	{
		if (Actor->IsA(AProyectil::StaticClass()))
		{
			
			AtaqueLineal();
		}
	}
	
}

void AVisitorDisparo::AtaqueCirular()
{
}

void AVisitorDisparo::AtaqueParabola()
{
}

void AVisitorDisparo::AtaqueLineal()
{
	
	if (bCanFire && NumberFired < MaxProjectile) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparo"));
		bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

		// creador de proycetiles
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparo6"));
			FVector Location = GetActorLocation();
			Location.X += 500;
			Location.Z += 400;
			FRotator Rotation = GetActorRotation();
			World->SpawnActor<AProyectil>(Location, Rotation);
			NumberFired++;

			// Establecer el temporizador para el próximo disparo
			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &AVisitorDisparo::ResetFire, rand() % 6 + 1, false);






		}
	}
}

void AVisitorDisparo::AtaqueLinealInverso()
{
}

void AVisitorDisparo::AtaqueRebote()
{
}

void AVisitorDisparo::ResetFire()
{
	if (NumberFired < MaxProjectile)
	{
		bCanFire = true;  // Permitir el siguiente disparo
		AtaqueLineal();         // Disparar automáticamente la siguiente bomba
	}
	else
	{
		NumberFired = 0;   // Reiniciar el contador de bombas para el próximo ciclo de disparos reabastecido
		bCanFire = false;
	}
}

