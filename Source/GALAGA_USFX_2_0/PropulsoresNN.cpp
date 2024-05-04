// Fill out your copyright notice in the Description page of Project Settings.


#include "PropulsoresNN.h"

// Sets default values
APropulsoresNN::APropulsoresNN()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));
	Propulsores = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	Propulsores->SetupAttachment(RootComponent);
	Propulsores->SetStaticMesh(ShipMesh.Object);
	RootComponent = Propulsores;//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));

	SetActorRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	

}

// Called when the game starts or when spawned
void APropulsoresNN::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APropulsoresNN::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

