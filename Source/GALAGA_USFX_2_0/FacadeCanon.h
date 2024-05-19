// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModeloCanon.h"
#include "FacadeCanon.generated.h"

UCLASS()
class GALAGA_USFX_2_0_API AFacadeCanon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeCanon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	void SpawnCanons(int32 Nivel);
	void SpawnCanon(TSubclassOf<AModeloCanon> CanonClass, FVector Location);//llamar a las nietas de ModeloCanon poniendolas en un contenedor 
	void IncreaseNivel();//aumentar nivel
	void CleanUpCanones();//limpiar canones

	//ubicaciones en extremos
	FVector TopLeftCorner;
	FVector TopRightCorner;
	FVector DownLeftCorner;
	FVector DownRightCorner;

	TArray<AModeloCanon*> ExistingCanons;

	int32 NivelInicial;
	float  IntervaloNivel;
	float TiempoSpawn;
	FTimerHandle  IntervaloNivelimerHandle;
	int32 MaxNivel;	// Called every frame
	

};
