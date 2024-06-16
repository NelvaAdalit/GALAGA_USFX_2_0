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


	/*if (bEscudo)
	{
		GenerarEscudo();
		bEscudo = false;
	}
	*/
}

//void AVisitorDisparo::Visit(ANaveEnemigaEspia* NaveEspia)
//{
//	/*NaveEspia2=NaveEspia;
//	AtaqueDisparoMultiple();*/
//}

void AVisitorDisparo::Visit(ACanonHielo* CanonHielo)
{
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Visit CanonHielo"));*/
	
	CanonHielo2 = CanonHielo;
	AtaqueLineal();
}

void AVisitorDisparo::Visit(ACanonLazer* CanonLazer)
{
	
	AtaqueDisparoMultiple();
	CanonLazer2 = CanonLazer;

}



void AVisitorDisparo::AtaqueLineal()
{
	if (bCanFire && NumberFired < MaxProjectile) {
	
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparo Lineal"));
		bCanFire = false;

		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			
			FVector Location = GetActorLocation();

			Location.X += 500;
			Location.Z += 500;
			FRotator Rotation = GetActorRotation();

			if (CanonHielo2) {
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("CanonHielo2 is valid"));
				FVector Location1 = CanonHielo2->GetActorLocation();
				World->SpawnActor<AProyectil>(Location1, Rotation);
			}
			else {
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("CanonHielo2 is NULL"));
			}
			NumberFired++;
			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &AVisitorDisparo::ResetFire, rand() % 2 + 1, false);
		}
	}
}


//void AVisitorDisparo::GenerarEscudo()
//{ 
//		//creador de escudo
//	UWorld* const World = GetWorld();
//	if (World != NULL)
//	{
//		FVector Location = CanonHielo2->GetActorLocation()+FVector(100,0,0);
//		FRotator Rotation = CanonHielo2->GetActorRotation();
//		World->SpawnActor<AEscudoVisitor>(Location, Rotation);
//	}
//
//}

void AVisitorDisparo::AtaqueDisparoMultiple()
{

	if (bCanFire && NumberFired < MaxProjectile) {
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparo"));
		bCanFire = false;

		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Disparo9"));
			FVector Location = GetActorLocation();

			Location.X += 500;
			Location.Z += 500;
			FRotator Rotation = GetActorRotation();

			if (CanonLazer2) {
				FVector Location2 = CanonLazer2->GetActorLocation();

				FRotator Rotation1 = Rotation;
				FRotator Rotation2 = Rotation;
				FRotator Rotation3 = Rotation;
				Rotation1.Yaw += 30.f; // Diagonal derecha
				Rotation2.Yaw -= 30.f; // Diagonal izquierda

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
		bCanFire = true; // Permitir el siguiente disparo
		if (bFireCanonHieloNext && CanonHielo2) {
			AtaqueLineal(); // Disparar CanonHielo
			bFireCanonHieloNext = false; // Alternar al próximo disparo de CanonLazer
		}
		else if (!bFireCanonHieloNext && CanonLazer2) {
			AtaqueDisparoMultiple(); // Disparar CanonLazer
			bFireCanonHieloNext = true; // Alternar al próximo disparo de CanonHielo
		}
	}
	else
	{
		NumberFired = 0; // Reiniciar el contador de bombas para el próximo ciclo de disparos reabastecido
		bCanFire = false;
	}
}







