// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaNN.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "GALAGA_USFX_2_0GameMode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AArmaNN::AArmaNN()
{
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Shapes/Shape_Sphere.Shape_Sphere'"));
    mallaProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
    mallaProyectil->SetStaticMesh(ProjectileMeshAsset.Object);
    mallaProyectil->SetupAttachment(RootComponent);
    velocidadDisparo = 1000;
    Disparodano = 20;
    mallaProyectil->SetRelativeScale3D(FVector(0.3f, 0.3f, 0.3f));
}

// Called when the game starts or when spawned
void AArmaNN::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmaNN::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Colision += GetWorld()->DeltaTimeSeconds;
    TiempoDisparo(Colision);
    movimento(DeltaTime);
}

void AArmaNN::movimento(float DeltaTime)
{
    FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidadDisparo * GetWorld()->GetDeltaSeconds();
    SetActorLocation(NewLocation);

}

void AArmaNN::TiempoDisparo(float _Colision)
{

}



