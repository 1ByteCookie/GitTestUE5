// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

#include "Camera/CameraComponent.h" 
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AMyActor::AMyActor()
	:	Mesh(nullptr)
	,	Camera(nullptr)
	,	CameraBoom(nullptr)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh		= CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Camera		= CreateDefaultSubobject<UCameraComponent>("Camera");
	CameraBoom	= CreateDefaultSubobject<USpringArmComponent>("CameraBoom");

	Camera->AttachToComponent(CameraBoom, FAttachmentTransformRules::KeepRelativeTransform);

	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->bEnableCameraLag		= true;
	CameraBoom->TargetArmLength			= 300.0f;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

