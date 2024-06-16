// Fill out your copyright notice in the Description page of Project Settings.


#include "CanonLazer.h"
#include "VisitorDisparo.h"
#include "VisitorMovimientos.h"
#include "VisitorGenerarEscudo.h"
#include"GALAGA_USFX_2_0Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "proyectilLazer.h"
#include "Kismet/GameplayStatics.h"

ACanonLazer::ACanonLazer()
{
		PrimaryActorTick.bCanEverTick = true;
		static ConstructorHelpers::FObjectFinder<UStaticMesh> CanonMesh(TEXT("StaticMesh'/Game/Meshes/BulletAmmunition1.BulletAmmunition1'"));
		meshCanion->SetStaticMesh(CanonMesh.Object);
		
		SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
}

void ACanonLazer::BeginPlay()
{
	Super::BeginPlay();
	VisitorDisparo = Cast<AVisitorDisparo>(GetWorld()->SpawnActor(AVisitorDisparo::StaticClass()));
	VisitorMovimientos = Cast<AVisitorMovimientos>(GetWorld()->SpawnActor(AVisitorMovimientos::StaticClass()));
	VisitorEscudo = Cast<AVisitorGenerarEscudo>(GetWorld()->SpawnActor(AVisitorGenerarEscudo::StaticClass()));
}

void ACanonLazer::Accept(IIVISITOR* Visitor)
{


	Visitor->Visit(this);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Visitando CanonLazer"));
}

void ACanonLazer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AplicarVisitor();
}

void ACanonLazer::AplicarVisitor()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("Visitando VisitorDisparo3131"));
	if (VisitorDisparo) {
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("Visitando VisitorDisparo"));
		VisitorDisparo->Visit(this);
		
	}
	
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("No se encontro el visitor"));


	}
	if(VisitorMovimientos)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("se encontro el visitor"));
		VisitorMovimientos->Visit(this);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("No se encontro el visitor"));
	}
	if (VisitorEscudo) {
	
		VisitorEscudo->Visit(this);
	
	}
}




