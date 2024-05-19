// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"
#include "MovimientoNN.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{

	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel1.EnemyLevel1'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);


	NombreNave = "Nave Enemiga Espia";

	MovementComponent = CreateDefaultSubobject<UMovimientoNN>(TEXT("MovementComponent"));


	VelocidadProyectil = 1000.0f;
	TiempoEntreProyectil = 1.0f;
	TiempoPrimerProyectil = 1.0f;
	SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));

	SetActorRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
}

void ANaveEnemigaEspia::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
	TiempoDisparo += DeltaTime;
	if (TiempoDisparo >= TiempoEntreProyectil)
	{
		Disparar();
		TiempoDisparo = 0.0f;
	}

}

void ANaveEnemigaEspia::Disparar()
{
	FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * +100 + FVector(0.0f, 0.0f, 0.0f);//distancia de disparo

	// Spawnear el proyectil
	//AProyectilNaveEnemiga* NewProjectile = GetWorld()->SpawnActor<AProyectilNaveEnemiga>(AProyectilNaveEnemiga::StaticClass(), SpawnLocation, FRotator::ZeroRotator);


}
