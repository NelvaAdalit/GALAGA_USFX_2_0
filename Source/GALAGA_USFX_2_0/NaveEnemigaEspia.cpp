// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"


ANaveEnemigaEspia::ANaveEnemigaEspia()
{

	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel1.EnemyLevel1'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);




}

void ANaveEnemigaEspia::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{


}

void ANaveEnemigaEspia::Disparar()
{



}
