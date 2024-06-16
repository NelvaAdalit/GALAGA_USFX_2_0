// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "IVISITOR.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VisitorMovimientos.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API AVisitorMovimientos : public AActor, public IIVISITOR
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVisitorMovimientos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:

public:

	void Visit(class ACanonHielo* CanonHielo) override;
	void Visit(class ACanonLazer* CanonLazer) override;
	

	class ACanonHielo* CanonHielo2;
	class ACanonLazer* CanonLazer2;

	void MovimientoSempiterno(float DeltaTime);
	void MovimientoParabola(float DeltaTime);




	//parabola
	FVector InicialVelocidad;
	float Gravedad;
	float TiempoDeParabola;
	bool bMoveParabolico;
	float speed;
	float velocidad1 = -100;

public:
	bool bSempiterno;
	float   TiempoSempiterno;
};
