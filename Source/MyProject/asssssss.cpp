// Fill out your copyright notice in the Description page of Project Settings.


#include "asssssss.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
Aasssssss::Aasssssss()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder < UStaticMesh > morirMeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

	if (morirMeshAsset.Succeeded())
	{
		morirMesh.SetStaticMesh(morirMeshAsset.Object);
	}
	morirMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MorirMesh"));

	RootComponent = &morirMesh;

}

// Called when the game starts or when spawned
void Aasssssss::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aasssssss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

