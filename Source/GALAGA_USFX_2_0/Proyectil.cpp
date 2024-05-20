// Fill out your copyright notice in the Description page of Project Settings.


#include "Proyectil.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "GALAGA_USFX_2_0GameMode.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
AProyectil::AProyectil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Projectile.Projectile'"));
	mallaProyectil= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	mallaProyectil->SetStaticMesh(ProjectileMeshAsset.Object);
	mallaProyectil->SetupAttachment(RootComponent);
	velocidadDisparo=-1000;
	Disparodano=20;
	mallaProyectil->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
}

// Called when the game starts or when spawned
void AProyectil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Colision += GetWorld()->DeltaTimeSeconds;
	TiempoDisparo(Colision);
	movimento(DeltaTime);
}


void AProyectil::movimento(float DeltaTime )
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidadDisparo * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}

void AProyectil::TiempoDisparo(float _Colision)
{
	if (Colision >= 2.0f)
	{
		Destroy();
	}
}

