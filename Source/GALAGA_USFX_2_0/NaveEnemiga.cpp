// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemiga.h"	
#include "Kismet/GameplayStatics.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "Engine/InstancedStaticMesh.h" 
#include "Components/StaticMeshComponent.h"

ANaveEnemiga::ANaveEnemiga()

{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel2.EnemyLevel2'"));
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	ShipMeshComponent->SetupAttachment(RootComponent);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	RootComponent = ShipMeshComponent;

	PrimaryActorTick.bCanEverTick = true;

	SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));

	SetActorRelativeScale3D(FVector(2.5f, 2.5f, 2.5f));

	Tiempo_Disparo = 0;
	Tiempo_Disparo_Generar = 0;
	Distancia_Disparo = FVector(90.f, 0.f, 0.f);

			
}

void ANaveEnemiga::mover()
{
}

void ANaveEnemiga::disparo()
{

}

void ANaveEnemiga::Escudo()
{
}

FString ANaveEnemiga::GetNombreNaveEnemiga()
{
	return NombreNaveEnemiga;
}

void ANaveEnemiga::BeginPlay()
{
}

void ANaveEnemiga::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);	

		// Contador de tiempo para el disparo
		Tiempo_Disparo += DeltaTime;
		if (Tiempo_Disparo >= Tiempo_Disparo_Generar) {
			Tiempo_Disparo = 0.f;

			// Declaración de la dirección y rotación del primer proyectil
			const FVector Direccion_Disparo = FVector(-1.f, 0.f, 0.f);
			const FRotator Rotacion_Disparo = Direccion_Disparo.Rotation();
			const FVector Ubicacion_Disparo = GetActorLocation() + Rotacion_Disparo.RotateVector(Distancia_Disparo);
			// Desplazamientos adicionales para los proyectiles restantes
			const float DesplazamientoEntreProyectiles = 50.f; // Ajusta según sea necesario
			const FVector DesplazamientoAdicional = FVector(0.f, DesplazamientoEntreProyectiles, 0.f);

			// Verificación de si el mundo no está vacío
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// Spawn de los tres proyectiles
				World->SpawnActor<AGALAGA_USFX_2_0Projectile>(Ubicacion_Disparo, Rotacion_Disparo);
			}
		}


}
