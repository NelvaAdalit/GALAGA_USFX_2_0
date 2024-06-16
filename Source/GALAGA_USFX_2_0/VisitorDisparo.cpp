// Fill out your copyright notice in the Description page of Project Settings.


#include "VisitorDisparo.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "NaveEnemigaEspia.h"
#include "CanonHielo.h"
#include "Proyectil.h"
#include "proyectilLazer.h"
#include "CanonLazer.h"
#include "EscudoVisitor.h"

// Sets default values
AVisitorDisparo::AVisitorDisparo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MaxProjectile = 100;
	NumberFired = 0;
	bCanFire = true;
	bFireCanonHieloNext = true;


}

// Called when the game starts or when spawned
void AVisitorDisparo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVisitorDisparo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	
}



void AVisitorDisparo::Visit(ACanonHielo* CanonHielo)
{
	
	
	CanonHielo2 = CanonHielo;
	DisparoLineal();
}

void AVisitorDisparo::Visit(ACanonLazer* CanonLazer)
{
	
	DisparoMultiple();
	CanonLazer2 = CanonLazer;

}



void AVisitorDisparo::DisparoLineal()
{
	if (bCanFire && NumberFired < MaxProjectile) {
	

		bCanFire = false;

		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			
			FVector Location = GetActorLocation();

			Location.X += 500;
			Location.Z += 500;
			FRotator Rotation = GetActorRotation();

			if (CanonHielo2) {
				
				FVector Location1 = CanonHielo2->GetActorLocation();
				World->SpawnActor<AProyectil>(Location1, Rotation);
			}
			else {
			
			}
			NumberFired++;
			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &AVisitorDisparo::ResetFire, rand() % 2 + 1, false);
		}
	}
}



void AVisitorDisparo::DisparoMultiple()
{

	if (bCanFire && NumberFired < MaxProjectile) {
		
		bCanFire = false;

		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			
			FVector Location = GetActorLocation();

			Location.X += 500;
			Location.Z += 500;
			FRotator Rotation = GetActorRotation();

			if (CanonLazer2) {
				FVector Location2 = CanonLazer2->GetActorLocation();

				FRotator Rotation1 = Rotation;
				FRotator Rotation2 = Rotation;
				FRotator Rotation3 = Rotation;
				Rotation1.Yaw += 30.f; 
				Rotation2.Yaw -= 30.f; 
				World->SpawnActor<AproyectilLazer>(Location2, Rotation1);
				World->SpawnActor<AproyectilLazer>(Location2, Rotation2);
				World->SpawnActor<AproyectilLazer>(Location2, Rotation3);
			}
			NumberFired++;
			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &AVisitorDisparo::ResetFire, rand() % 6 + 1, false);
		}
	}
}

void AVisitorDisparo::ResetFire()
{
	if (NumberFired < MaxProjectile)
	{
		bCanFire = true; 
		if (bFireCanonHieloNext && CanonHielo2) {
			DisparoLineal();
			bFireCanonHieloNext = false; 
		}
		else if (!bFireCanonHieloNext && CanonLazer2) {
		    DisparoMultiple();
			bFireCanonHieloNext = true; 
		}
	}
	else
	{
		NumberFired = 0; 
		bCanFire = false;
	}

}







