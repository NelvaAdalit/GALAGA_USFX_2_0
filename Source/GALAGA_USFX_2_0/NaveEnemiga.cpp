// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.h"


ANaveEnemiga::ANaveEnemiga()

{
	PrimaryActorTick.bCanEverTick = true;
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	//ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	RootComponent = mallaNaveEnemiga;
	movimiento = true;
	velocidadY = 10;
	VelocidadMovimiento = 500.0f;

	MovimientoNN = CreateDefaultSubobject<UMovimientoNN>(TEXT("MovimientoNN"));

}

void ANaveEnemiga::BeginPlay()
{
}

void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    // Move the actor based on its velocity
    FVector NewLocation = GetActorLocation() + GetActorForwardVector() * VelocidadMovimiento * DeltaTime;

    // Check if the new location is within the bounds
    if (NewLocation.X < LimiteIzquierdo)
    {
        NewLocation.X = LimiteDerecho;
    }
    else if (NewLocation.X > LimiteDerecho)
    {
        NewLocation.X = LimiteIzquierdo;
    }

    if (NewLocation.Y < Limiteinferior)
    {
        NewLocation.Y = LimiteSuperior;
    }
    else if (NewLocation.Y > LimiteSuperior)
    {
        NewLocation.Y = Limiteinferior;
    }

    SetActorLocation(NewLocation);

}


