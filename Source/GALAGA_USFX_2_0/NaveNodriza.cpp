// Fill out your copyright notice in the Description page of Project Settings.


// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"


// Sets default values
ANaveNodriza::ANaveNodriza()
{

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 100.0f;
}

void ANaveNodriza::BeginPlay()
{

	Super::BeginPlay();

	NaveFinal = GetWorld()->SpawnActor<ANaveALFAN1>(ANaveALFAN1::StaticClass());
	NaveFinal->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

void ANaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

void ANaveNodriza::Construir_Casco()
{
	NaveFinal->SetCasco(1);

}

void ANaveNodriza::Construir_Escudo()
{
	NaveFinal ->SetEscudo(4);

}

void ANaveNodriza::Construir_PatrullaEnigmaNN()
{
	NaveFinal->SetPatrullaEnigma(3);
}

void ANaveNodriza::Construir_Arma()
{

	//NaveFinal->SetArma(1);
}

ANaveALFAN1* ANaveNodriza::devolverNave()
{
	return NaveFinal;

}








