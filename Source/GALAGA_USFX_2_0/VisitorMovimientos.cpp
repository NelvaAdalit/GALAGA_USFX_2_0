// Fill out your copyright notice in the Description page of Project Settings.


#include "VisitorMovimientos.h"
#include "CanonHielo.h"
#include "CanonLazer.h"

// Sets default values
AVisitorMovimientos::AVisitorMovimientos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TiempoSempiterno = 0;
    TiempoDeParabola=0;
    bMoveParabolico=false;
    bSempiterno = false;
}

// Called when the game starts or when spawned
void AVisitorMovimientos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVisitorMovimientos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bMoveParabolico)
	{
		TiempoDeParabola += DeltaTime;

		MovimientoParabola(DeltaTime);

	}

	if (bSempiterno)
	{
		TiempoSempiterno += DeltaTime;

		MovimientoSempiterno(DeltaTime);

	}

}

void AVisitorMovimientos::Visit(ACanonHielo* CanonHielo)
{
	    float DeltaTime = CanonHielo->GetWorld()->GetDeltaSeconds();
		CanonHielo2 = CanonHielo;
	    bMoveParabolico = true;
		
	

		
}

void AVisitorMovimientos::Visit(ACanonLazer* CanonLazer)
{
	float DeltaTime = CanonLazer->GetWorld()->GetDeltaSeconds();
	CanonLazer2 = CanonLazer;
	bSempiterno = true;

}

void AVisitorMovimientos::MovimientoSempiterno(float DeltaTime)
{
	if (!CanonLazer2) return;

	FVector CurrentLocation = CanonLazer2->GetActorLocation();
	float Velocidad = 100.0f;
	float Amplitude = 1.0f; 
	float NewZ = CurrentLocation.Z + Amplitude * FMath::Sin(TiempoSempiterno * Velocidad * 0.01f);

	FVector NewLocation = FVector(CurrentLocation.X, CurrentLocation.Y, NewZ);
	CanonLazer2->SetActorLocation(NewLocation);

}


void AVisitorMovimientos::MovimientoParabola(float DeltaTime)
{
	if (!CanonHielo2) return;
	FVector NewLocation =CanonHielo2->GetActorLocation();
	NewLocation.X -= velocidad1 * DeltaTime;
	NewLocation.Y += velocidad1 * FMath::Sin(CanonHielo2->GetWorld()->GetTimeSeconds()) * CanonHielo2->GetWorld()->GetDeltaSeconds();
	CanonHielo2->SetActorLocation(NewLocation);


}



