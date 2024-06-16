// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DirectorDeNaveNodriza.h"
#include "FacadeCanon.h"
#include "GALAGA_USFX_2_0Pawn.h"
#include "GALAGA_USFX_2_0GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaArea;
class ANaveEnemigaEspia;
UCLASS(MinimalAPI)
class AGALAGA_USFX_2_0GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGALAGA_USFX_2_0GameMode();
private:
	//TArray<ANaveEnemigaArea*> TANavesEnemigasAerea;
	//ADirectorDeNaveNodriza* Director;

protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
public:


private:


	//UPROPERTY(VisibleAnywhere, Category = "Main")
	class ANaveNodriza* NaveNodriza;
	class ADirectorDeNaveNodriza* Director;
	AFacadeCanon* FormacionCanones;
public:
	 ANaveEnemigaArea*NaveEnemigaArea01;
	 ANaveEnemigaEspia*NaveEnemigaEspia01;

public:
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AGALAGA_USFX_2_0Pawn* Jugador;
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ABallAdapter* Adaptador;
public:

	/*TArray<ANaveEnemiga*>TANavesEnemigas;
	TArray<ANaveEnemigaArea*>TANavesEnemigasAerea;
	TArray<ANaveEnemigaEspia*>TANavesEnemigasEspia;*/
	int TiempoTranscurrido;
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TMap<FString, ANaveEnemiga*>TMapCambiarVelocidad;

	class ARadarNave* RadarNave;


	//VISITOR

	void AplicarDisparoVisitantes(ANaveEnemigaEspia* NaveEnemigaEspia);

	class IIVISITABLE* PersonajeVisitable;

	class AVisitorDisparo* VisitorDisparo;

	class ANaveEnemigaEspia* NaveEspia;

};



