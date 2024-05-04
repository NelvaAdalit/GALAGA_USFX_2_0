// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS(ABSTRACT)
class GALAGA_USFX_2_0_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

protected:
	ANaveEnemiga();
	float FireRate;
	FString NombreNaveEnemiga;
	FString VelocidadNaveEnemiga;
	FVector Posicion;
	FString DanoProducido;
	TArray<FString> ArmasNaveEnemiga;
	float velocidad;
	float limiteInferior;
	FString NombreNave;
	float DanoGenerado;
//	FVector Posicion;
	float TiempoDisparo;
	float PatronMovimiento;
	float CapacidadBalas;
	float Energia;
	float Peso;
	float Volumen;
	float Resistencia;
	float limiteInferiorX;
	float limiteSuperiorX;

public:
	float Speed;
	float LimiteInferior;
	FTimerHandle FireTimerHandle;
	FORCEINLINE float GetResistencia() const { return Resistencia; }
	FORCEINLINE float GetDanoGenerado() const { return DanoGenerado; }
	FORCEINLINE FVector GetPosicion() const { return Posicion; }
	FORCEINLINE float GetTiempoDisparo() const { return TiempoDisparo; }
	FORCEINLINE float GetPatronMovimiento() const { return PatronMovimiento; }
	FORCEINLINE float GetCapacidadBalas() const { return CapacidadBalas; }
	FORCEINLINE float GetEnergia() const { return Energia; }
	FORCEINLINE float GetPeso() const { return Peso; }
	FORCEINLINE float GetVolumen() const { return Volumen; }


	FORCEINLINE void SetResistencia(float _Resistencia) { Resistencia = _Resistencia; }
	FORCEINLINE void SetDanoGenerado(float _DanoGenerado) { DanoGenerado = _DanoGenerado; }
	FORCEINLINE void SetPosicion(FVector _Posicion) { Posicion = _Posicion; }
	FORCEINLINE void SetTiempoDisparo(float _TiempoDisparo) { TiempoDisparo = _TiempoDisparo; }
	FORCEINLINE void SetPatronMovimiento(float _PatronMovimiento) { PatronMovimiento = _PatronMovimiento; }
	FORCEINLINE void SetCapacidadBalas(float _CapacidadBalas) { CapacidadBalas = _CapacidadBalas; }
	FORCEINLINE void SetEnergia(float _Energia) { Energia = _Energia; }
	FORCEINLINE void SetPeso(float _Peso) { Peso = _Peso; }
	FORCEINLINE void SetVolumen(float _Volumen) { Volumen = _Volumen; }

	//FString GetNombreNaveEnemiga();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	/*FVector ubicacionActual;
	float Limiteinferior ;*/
	/*float LimiteSuperior = 1550;
	float LimiteIzquierdo = -1270.0;
	float LimiteDerecho = 1520;*/
	//FVector posicion;

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = mallaNaveEnemiga, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;

public:

	//float Tiempo_Disparo;
	//float Tiempo_Disparo_Generar;
	//FVector Distancia_Disparo;

	void Disparar() PURE_VIRTUAL(ANaveEnemiga::Disparar, );
	/*void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );*/
	

};
