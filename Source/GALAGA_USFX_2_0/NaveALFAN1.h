// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CascoNN.h"
#include "EscudoNN.h"
#include "PatrullaEnigmaNN.h"
#include "ArmaNN.h"
#include "NaveNodrizaInterfaz.h"
#include "NaveALFAN1.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API ANaveALFAN1 : public AActor,public INaveNodrizaInterfaz
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveALFAN1();
	class ACascoNN* Estructura;
	class AEscudoNN* Escudo;
	class AArmaNN* Arma;
	class APatrullaEnigmaNN* patrullaEneigma;
	int vida;
	int numero;
	int avance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaAlfa;

	void SetCasco(int a) override;
    void SetEscudo(int d) override;
	void SetPatrullaEnigma(int a) override;
	void SetArma(int l) override;





};
