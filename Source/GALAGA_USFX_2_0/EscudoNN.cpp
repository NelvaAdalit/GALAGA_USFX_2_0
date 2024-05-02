// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoNN.h"

// Sets default values
AEscudoNN::AEscudoNN()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Life.Life'"));
	Escudo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	Escudo->SetupAttachment(RootComponent);
	Escudo->SetStaticMesh(ShipMesh.Object);
	RootComponent = Escudo;//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));

	SetActorRelativeScale3D(FVector(3.0f, 3.0f, 3.0f));

}

// Called when the game starts or when spawned
void AEscudoNN::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscudoNN::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

