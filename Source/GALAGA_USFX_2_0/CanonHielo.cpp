// Fill out your copyright notice in the Description page of Project Settings.


#include "CanonHielo.h"
#include"GALAGA_USFX_2_0Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Proyectil.h"
#include "VisitorDisparo.h"
#include "VisitorMovimientos.h"
#include "VisitorGenerarEscudo.h"
#include "Kismet/GameplayStatics.h"

ACanonHielo::ACanonHielo()
{
		PrimaryActorTick.bCanEverTick = true;
		static ConstructorHelpers::FObjectFinder<UStaticMesh> CanonMesh(TEXT("StaticMesh'/Game/Meshes/Shield.Shield'"));
		meshCanion->SetStaticMesh(CanonMesh.Object);
	
		SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
}

void ACanonHielo::BeginPlay()
{
	Super::BeginPlay();

	VisitorDisparo = Cast<AVisitorDisparo>(GetWorld()->SpawnActor(AVisitorDisparo::StaticClass()));
	VisitorMovimientos = Cast<AVisitorMovimientos>(GetWorld()->SpawnActor(AVisitorMovimientos::StaticClass()));
	VisitorGenerarEscudo = Cast<AVisitorGenerarEscudo>(GetWorld()->SpawnActor(AVisitorGenerarEscudo::StaticClass()));
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Visitando damckackajc CanonHielo"));

	

}

void ACanonHielo::Accept(IIVISITOR* Visitor)
{

	Visitor->Visit(this);

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Visitando CanonHielo"));


}

void ACanonHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	AplicarVisitor();

	//AplicarGenerarEscudo();

	


}

void ACanonHielo::AplicarVisitor()
{
	if (VisitorDisparo) {

		VisitorDisparo->Visit(this);
	}
	else {
		
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se encontro el visitor"));

	}
	
	if(VisitorMovimientos)
	{
		VisitorMovimientos->Visit(this);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se encontro el visitor"));
	}
	if (VisitorGenerarEscudo) {

		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Visitando CanonHielo"));
		VisitorGenerarEscudo->Visit(this);
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se encontro el visitor"));

	}
	

}

void ACanonHielo::AplicarGenerarEscudo()
{
	
}




