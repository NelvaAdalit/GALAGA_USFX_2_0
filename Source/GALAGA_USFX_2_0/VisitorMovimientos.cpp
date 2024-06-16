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

		AtaqueParabola(DeltaTime);

	}

	if (bSempiterno)
	{
		TiempoSempiterno += DeltaTime;

		AtaqueSempiterno(DeltaTime);

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

void AVisitorMovimientos::AtaqueSempiterno(float DeltaTime)
{
	if (!CanonLazer2) return;

	FVector CurrentLocation = CanonLazer2->GetActorLocation();
	float Velocidad = 100.0f; // Velocidad del movimiento
	float Amplitude = 1.0f; // Amplitud del movimiento sinusoidal, ajustada para un movimiento m�s contenido

	// Movimiento sinusoidal en el eje Z para un movimiento de arriba hacia abajo
	float NewZ = CurrentLocation.Z + Amplitude * FMath::Sin(TiempoSempiterno * Velocidad * 0.01f);

	FVector NewLocation = FVector(CurrentLocation.X, CurrentLocation.Y, NewZ);
	CanonLazer2->SetActorLocation(NewLocation);

}


void AVisitorMovimientos::AtaqueParabola(float DeltaTime)
{
	if (!CanonHielo2) return;
	FVector NewLocation =CanonHielo2->GetActorLocation();
	NewLocation.X -= velocidad1 * DeltaTime;
	NewLocation.Y += velocidad1 * FMath::Sin(CanonHielo2->GetWorld()->GetTimeSeconds()) * CanonHielo2->GetWorld()->GetDeltaSeconds();
	CanonHielo2->SetActorLocation(NewLocation);


}



