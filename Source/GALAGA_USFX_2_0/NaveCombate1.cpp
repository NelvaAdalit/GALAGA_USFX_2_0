// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveCombate1.h"

ANaveCombate1::ANaveCombate1()
{
		PrimaryActorTick.bCanEverTick = true;
		static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel3.EnemyLevel3'"));
		mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
		SetActorRelativeScale3D(FVector(2.0, 2.0, 2.0));
}
