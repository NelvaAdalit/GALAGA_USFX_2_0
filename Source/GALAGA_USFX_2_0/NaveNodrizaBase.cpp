// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodrizaBase.h"

// Sets default values
ANaveNodrizaBase::ANaveNodrizaBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza5.Nodriza5'"));
	MeshNaveNodrizaBase= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeshComponent"));
	MeshNaveNodrizaBase->SetupAttachment(RootComponent);
	MeshNaveNodrizaBase->SetStaticMesh(ShipMesh.Object);
	RootComponent = MeshNaveNodrizaBase;
	SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
	SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
}

// Called when the game starts or when spawned
void ANaveNodrizaBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveNodrizaBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

