// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "FabriNaves.generated.h"


UCLASS()
class GALAGA_USFX_2_0_API AFabriNaves : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFabriNaves();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;




public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual ANaveEnemiga* CrearNaveEnemiga(FString NaveEnemigaSKU) PURE_VIRTUAL(AFabriNaves::CrearNaveEnemiga, return nullptr;);
	ANaveEnemiga* OrdenarNaveEnemiga(FString Categoria);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* mallaNaveEnemiga;



};

