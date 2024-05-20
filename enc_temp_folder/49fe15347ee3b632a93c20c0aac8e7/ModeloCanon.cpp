// Fill out your copyright notice in the Description page of Project Settings.


#include "ModeloCanon.h"

// Sets default values
AModeloCanon::AModeloCanon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CanonMesh(TEXT("StaticMesh'/Game/Meshes/Speed.Speed'"));
	// Create the mesh component
	meshCanion = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CanonMesh"));
	meshCanion->SetupAttachment(RootComponent);
	RootComponent = meshCanion;
	meshCanion->SetStaticMesh(CanonMesh.Object);

}

// Called when the game starts or when spawned
void AModeloCanon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AModeloCanon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

