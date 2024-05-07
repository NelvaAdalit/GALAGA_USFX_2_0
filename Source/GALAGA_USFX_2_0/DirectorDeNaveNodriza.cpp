// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorDeNaveNodriza.h"

// Sets default values
ADirectorDeNaveNodriza::ADirectorDeNaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorDeNaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorDeNaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorDeNaveNodriza::ConstruirNAVENODRIZA(AActor* _naveNODRIZA)
{
	BuilderNaveNN = Cast<IBuilderNaveNodriza>(_naveNODRIZA);
}


ANaveALFAN1* ADirectorDeNaveNodriza::devolverNave()
{

	if (BuilderNaveNN) {

		return BuilderNaveNN->devolverNave();


	}
	else {
		return nullptr;

	}

}

void ADirectorDeNaveNodriza::establecerNavenodriza()
{
	BuilderNaveNN->Construir_Casco();
	BuilderNaveNN->Construir_Escudo();
	BuilderNaveNN->Construir_PatrullaEnigmaNN();
	BuilderNaveNN->Construir_Arma();
}

	

