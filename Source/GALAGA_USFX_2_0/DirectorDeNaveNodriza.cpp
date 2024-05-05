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

ANaveKelly* ADirectorDeNaveNodriza::NaveNodriza(IBuilderNaveNodriza* Nave)
{
	if (Nave) {
		Nave->Construir_Arma();
		Nave->Construir_PatrullaEnigmaNN();
		Nave->Construir_Escudo();
		Nave->Construir_Caso();
		return Nave->GetNave();
	
	
	}
	return nullptr;
}

ANaveKelly* ADirectorDeNaveNodriza::NaveNodrizaMarkarean01(IBuilderNaveNodriza* Nave)
{
	if (Nave) {
		Nave->Construir_Arma();
		Nave->Construir_PatrullaEnigmaNN();
		Nave->Construir_Escudo();
		Nave->Construir_Caso();
		return Nave->GetNave();
	}
	return nullptr;
}

ANaveKelly* ADirectorDeNaveNodriza::NaveNodrizaSergev(IBuilderNaveNodriza* Nave)
{
	if (Nave) {
		Nave->Construir_Arma();
		Nave->Construir_PatrullaEnigmaNN();
		Nave->Construir_Escudo();
		Nave->Construir_Caso();
		return Nave->GetNave();
	}
	return nullptr;
}

