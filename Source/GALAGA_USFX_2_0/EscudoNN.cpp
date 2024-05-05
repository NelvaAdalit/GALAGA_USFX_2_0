// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoNN.h"

// Sets default values
AEscudoNN::AEscudoNN()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Shapes/Shape_Pipe_180.Shape_Pipe_180'"));
	Escudo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	Escudo->SetupAttachment(RootComponent);
	Escudo->SetStaticMesh(ShipMesh.Object);
	RootComponent = Escudo;//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));
    VelocidadMovimiento=100;
	SetActorRelativeScale3D(FVector(3.0f, 3.0f, 3.0f));
    SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
    
   
}

// Called when the game starts or when spawned
void AEscudoNN::BeginPlay()
{
	Super::BeginPlay();
    PosicionInicial = GetActorLocation();
}

// Called every frame
void AEscudoNN::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
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

