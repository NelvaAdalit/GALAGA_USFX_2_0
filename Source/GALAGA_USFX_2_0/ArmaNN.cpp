// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaNN.h"

// Sets default values
AArmaNN::AArmaNN()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/BulletAmmunition2.BulletAmmunition2'"));
	Arma= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	Arma->SetupAttachment(RootComponent);
	Arma->SetStaticMesh(ShipMesh.Object);
	RootComponent = Arma;//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));

	SetActorRelativeScale3D(FVector(3.0f, 3.0f, 3.0f));
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

}

