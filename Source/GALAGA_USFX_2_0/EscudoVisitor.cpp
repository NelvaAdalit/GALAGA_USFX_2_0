// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoVisitor.h"

// Sets default values
AEscudoVisitor::AEscudoVisitor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	EscudoVisitor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	EscudoVisitor->SetStaticMesh(ProjectileMeshAsset.Object);
	EscudoVisitor->SetupAttachment(RootComponent);
	EscudoVisitor->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
}

// Called when the game starts or when spawned
void AEscudoVisitor::BeginPlay()
{

	Super::BeginPlay();
	
}

// Called every frame
void AEscudoVisitor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

