// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS(ABSTRACT)
class GALAGA_USFX_2_0_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	ANaveEnemiga();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;
protected:
	float velocidad;
	float velocidadDisparo;
	float resistencia;
	float danoProducido;
	float valorDestruccion;
	float recompensa;
	float energia;
	float tiempoDisparo;
	float tiempoReaparicion;
	FString nombre;
	FVector posicion;





protected:

	virtual void Disparar() PURE_VIRTUAL(AModeloCanon::Disparar, ;)
	virtual void ResetFire() PURE_VIRTUAL(AModeloCanon::ResetFire, ;)
   FTimerHandle TimerHandle_ShotTimerExpired;

public:
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetVelocidadDisparo() const { return velocidadDisparo; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetValorDestruccion() const { return valorDestruccion; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE float GetRecompensa() const { return recompensa; }
	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE float GetTiempoReaparicion() const { return tiempoReaparicion; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetVelocidadDisparo(float _velocidadDisparo) { velocidadDisparo = _velocidadDisparo; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetValorDestruccion(float _valorDestruccion) { valorDestruccion = _valorDestruccion; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetRecompensa(float _recompensa) { recompensa = _recompensa; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }
	FORCEINLINE void SetTiempoReaparicion(float _tiempoReaparicion) { tiempoReaparicion = _tiempoReaparicion; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }


public:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int dureza;
	int cantidadProyectiles;
	uint32 bCanFire : 1;//entero de 32 bits
	float FireRate;
	int MaxProjectile;
	int NumberFired;
	//int direccion = 1;
	float velocidadN = 6;

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:

	FVector ubicacionActual;
	float Limiteinferior = -1680;
	float LimiteSuperior = 1550;
	float LimiteIzquierdo = -1270.0;
	float LimiteDerecho = 1520;















};
