// Fill out your copyright notice in the Description page of Project Settings.


#include "proyectilLazer.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "GALAGA_USFX_2_0GameMode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AproyectilLazer::AproyectilLazer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/BulletEnemyLevel2.BulletEnemyLevel2'"));
	mallaProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	mallaProyectil->SetStaticMesh(ProjectileMeshAsset.Object);
	mallaProyectil->SetupAttachment(RootComponent);
	velocidadDisparo = -1000;
	Disparodano = 20;
	mallaProyectil->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));

}

// Called when the game starts or when spawned
void AproyectilLazer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AproyectilLazer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Colision += GetWorld()->DeltaTimeSeconds;
	TiempoDisparo(Colision);
	movimento(DeltaTime);

}

void AproyectilLazer::movimento(float DeltaTime)
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidadDisparo * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}

void AproyectilLazer::TiempoDisparo(float _Colision)
{
	if (Colision >= 2.0f)
	{
		Destroy();
	}
}

