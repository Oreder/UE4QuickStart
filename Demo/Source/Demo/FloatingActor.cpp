// Fill out your copyright notice in the Description page of Project Settings.

#include "FloatingActor.h"


// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector newLocation = GetActorLocation();
	
	float deltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	newLocation.Z += deltaHeight * 200.0f;	// here we scales up by a factor of 20
	
	float deltaXY = (FMath::Cos(RunningTime + DeltaTime) - FMath::Cos(RunningTime));
	newLocation.X += deltaXY * 100.0f;
	newLocation.Y += deltaXY * 100.0f;

	RunningTime += DeltaTime;
	SetActorLocation(newLocation);
}

