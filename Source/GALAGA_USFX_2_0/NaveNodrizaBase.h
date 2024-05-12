// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveNodrizaBase.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API ANaveNodrizaBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveNodrizaBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshNaveNodrizaBase;
public:
	FVector PosicionInicial;
    int  VelocidadMovimiento;

	float Limiteinferior = -1680;
	float LimiteSuperior = 1800;
	float LimiteIzquierdo = -1910;
	float LimiteDerecho = 1600;


};
