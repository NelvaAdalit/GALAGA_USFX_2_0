// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveALFAN1.h"
#include "GALAGA_USFX_2_0Projectile.h"

// Sets default values
ANaveALFAN1::ANaveALFAN1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/BulletLevel1.BulletLevel1'"));
	MallaAlfa= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	MallaAlfa->SetupAttachment(RootComponent);
	MallaAlfa->SetStaticMesh(ShipMesh.Object);
	RootComponent = MallaAlfa;

	SetActorRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));

	Tiempo_Disparo = 0;
	Tiempo_Disparo_Generar = 0;
	Distancia_Disparo = FVector(90.f, 0.f, 0.f);
}

// Called when the game starts or when spawned
void ANaveALFAN1::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANaveALFAN1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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

