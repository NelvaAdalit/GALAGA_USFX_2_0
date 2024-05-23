// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilBala.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "GALAGA_USFX_2_0GameMode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AProyectilBala::AProyectilBala()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	mallaProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	mallaProyectil->SetStaticMesh(ProjectileMeshAsset.Object);
	mallaProyectil->SetupAttachment(RootComponent);
	velocidadDisparo = -800;
	Disparodano = 20;
	mallaProyectil->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));

}

// Called when the game starts or when spawned
void AProyectilBala::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectilBala::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Colision += GetWorld()->DeltaTimeSeconds;
	TiempoDisparo(Colision);
	movimento(DeltaTime);

}

// Called to bind functionality to input
void AProyectilBala::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AProyectilBala::movimento(float DeltaTime)
{
	// Posición actual del actor
	FVector CurrentLocation = GetActorLocation();

	// Movimiento hacia adelante
	FVector ForwardMovement = -GetActorForwardVector() * velocidadDisparo * DeltaTime;

	// Movimiento en curva utilizando la función seno
	// Usamos el tiempo total del mundo para crear una variación constante
	float Time = GetWorld()->GetTimeSeconds();
	float Amplitude = 10.0f; // Amplitud de la onda
	float Frequency = 2.0f;   // Frecuencia de la onda

	// Movimiento ondulatorio en el eje Y
	float SineWave = Amplitude * FMath::Sin(Frequency * Time);

	// Nueva ubicación con movimiento ondulatorio añadido
	FVector NewLocation = CurrentLocation + ForwardMovement;// Movimiento hacia adelante
	NewLocation.Y += SineWave;// Movimiento ondulatorio en el eje Y

	// Establecer la nueva ubicación del actor
	SetActorLocation(NewLocation);
}


void AProyectilBala::TiempoDisparo(float _Colision)
{
	if (Colision >= 2.0f)
	{
		Destroy();
	}
}


