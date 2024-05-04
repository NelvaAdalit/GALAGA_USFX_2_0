// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemigaArea.h"
#include "Kismet/GameplayStatics.h"
#include "GALAGA_USFX_2_0Projectile.h"
#include "Engine/InstancedStaticMesh.h"

ANaveEnemigaArea::ANaveEnemigaArea()
{
	PrimaryActorTick.bCanEverTick = true;

	 static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel2.EnemyLevel2'"));
	 mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	/* TiempoEntreProyectil = 1.5f;
	 TiempoPrimerProyectil = 0.0f;
	 VelocidadProyectil = 1000.0f;*/

	 SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));

	 SetActorRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));

	 Tiempo_Disparo = 0;
	 Tiempo_Disparo_Generar = 0;
	 Distancia_Disparo = FVector(90.f, 0.f, 0.f);
	 velocidad = 100;
	 NombreNave = "Nave Enemiga Area";
}

void ANaveEnemigaArea::Mover(float DeltaTime)
{
	//velocidad = -250;
	//ubicacionActual = GetActorLocation();
	//float NuevaX = velocidad * DeltaTime + ubicacionActual.X;
	////float NuevaY = velocidad * DeltaTime + ubicacionActual.Y;
	//FVector NuevaPosicion = FVector(NuevaX, ubicacionActual.Y, ubicacionActual.Z);
	//SetActorLocation(NuevaPosicion);


}

void ANaveEnemigaArea::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);

	// Contador de tiempo para el disparo
	Tiempo_Disparo += DeltaTime;
	if (Tiempo_Disparo >= Tiempo_Disparo_Generar) {
		Tiempo_Disparo = 0.f;

		// Declaración de la dirección y rotación del primer proyectil
		const FVector Direccion_Disparo = FVector(-1.f, 0.f, 0.f);
		const FRotator Rotacion_Disparo = Direccion_Disparo.Rotation();
		const FVector Ubicacion_Disparo = GetActorLocation() + Rotacion_Disparo.RotateVector(Distancia_Disparo);

		// Desplazamientos adicionales para los proyectiles restantes
		const float DesplazamientoEntreProyectiles = 50.f; // Ajusta según sea necesario
		const FVector DesplazamientoAdicional = FVector(0.f, DesplazamientoEntreProyectiles, 0.f);

		// Verificación de si el mundo no está vacío
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			// Spawn de los tres proyectiles
			World->SpawnActor<AGALAGA_USFX_2_0Projectile>(Ubicacion_Disparo, Rotacion_Disparo);
		}



	}

	//FVector PosicionActual = GetActorLocation();
	//float DesplazamientoX = Speed * DeltaTime;

	//FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX * -1, PosicionActual.Y, PosicionActual.Z);
	//SetActorLocation(NuevaPosicion);


	//TiempoPrimerProyectil += DeltaTime;

	//// Verificar si ha pasado el tiempo suficiente desde el último disparo
	//if (TiempoPrimerProyectil >= TiempoEntreProyectil)
	//{
	//	// Disparar
	//	Disparar();

	//	// Reiniciar el tiempo
	//	TiempoPrimerProyectil = 0.0f;
	//}

	////este codigo hace que vuelva ala posicion inicial
	//if (NuevaPosicion.X < LimiteInferior)
	//{
	//	SetActorLocation(FVector(1800.0f, PosicionActual.Y, 200.0f));
	//}

}
//
//
//
//void ANaveEnemigaArea::DisparoNave()
//{
//	// Obtén la ubicación de la nave caza para spawnear el proyectil
//	FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * -100 + FVector(10.0f, 0.0f, 0.0f);//distancia de disparo
//
//	// Spawnear el proyectil
//	AProyectilNaveEnemiga* NewProyectil = GetWorld()->SpawnActor<AProyectilNaveEnemiga>(AProyectilNaveEnemiga::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
//
//	if (NewProyectil)
//	{
//		// Modificar dirección y velocidad según sea necesario
//		FVector SpawnDirection = FVector(-1.0f, 0.f, 0.f);
//	}
//}
