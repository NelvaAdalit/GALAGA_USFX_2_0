// Fill out your copyright notice in the Description page of Project Settings.

#include "ProyectilBomba.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "GALAGA_USFX_2_0GameMode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AProyectilBomba::AProyectilBomba()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Food.Food'"));
    mallaProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
    mallaProyectil->SetStaticMesh(ProjectileMeshAsset.Object);
    mallaProyectil->SetupAttachment(RootComponent);
    velocidadDisparo =1000;
    Disparodano = 20;
    mallaProyectil->SetRelativeScale3D(FVector(0.8f, 0.8f, 0.8f));
}

// Called when the game starts or when spawned
void AProyectilBomba::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AProyectilBomba::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Colision += GetWorld()->DeltaTimeSeconds;
    TiempoDisparo(Colision);
    movimento(DeltaTime);
}

// Called to bind functionality to input
void AProyectilBomba::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}
void AProyectilBomba::movimento(float DeltaTime)
{
    FVector CurrentLocation = GetActorLocation();
    FVector ForwardDirection = GetActorForwardVector();

    // Calcular la nueva ubicación con movimiento sinusoidal
    float Time = GetWorld()->GetTimeSeconds();
    float Amplitude = 100.0f; // Amplitud de la onda senoidal
    float Frequency = 4.0f;   // Frecuencia de la onda senoidal

    // Vector lateral (derecha) del actor
    FVector RightVector = GetActorRightVector();
    FVector Offset = RightVector * FMath::Sin(Time * Frequency) * Amplitude;

    // Nueva ubicación combinando el movimiento hacia adelante y el desplazamiento sinusoidal
    FVector NewLocation = CurrentLocation + (ForwardDirection * velocidadDisparo * DeltaTime) + Offset;
    SetActorLocation(NewLocation);
}


void AProyectilBomba::TiempoDisparo(float _Colision)
{
    if (Colision >= 2.0f)
    {
        Destroy();
    }
}


