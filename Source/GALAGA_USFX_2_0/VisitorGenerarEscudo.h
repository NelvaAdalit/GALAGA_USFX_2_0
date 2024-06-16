// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "IVISITOR.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VisitorGenerarEscudo.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API AVisitorGenerarEscudo : public AActor, public IIVISITOR
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVisitorGenerarEscudo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:

	void Visit(class ANaveEnemigaEspia* NaveEspia) override {};
	void Visit(class ACanonHielo* CanonHielo) override;
	void Visit(class ACanonLazer* CanonLazer) override;
	void GenerarEscudoHielo();
	class AEscudoVisitor* EscudoActivo;
	class ACanonHielo* CanonHielo2;
	class ACanonLazer* CanonLazer2;
	class ANaveEnemigaEspia* NaveEspia2;
	void DesactivarEscudo();
	bool bEscudo;
	FTimerHandle HandleActivarEscudo;
	FTimerHandle HandleDesactivarEscudo;
};
