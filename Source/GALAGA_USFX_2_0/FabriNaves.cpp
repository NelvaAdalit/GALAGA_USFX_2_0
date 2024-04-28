// Fill out your copyright notice in the Description page of Project Settings.


#include "FabriNaves.h"



// Sets default values
AFabriNaves::AFabriNaves()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabriNaves::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void AFabriNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


ANaveEnemiga* AFabriNaves::OrdenarNaveEnemiga(FString Categoria)
{
	ANaveEnemiga* NaveEnemiga = CrearNaveEnemiga(Categoria);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Creando Nave Enemiga"));

	return NaveEnemiga;
}

