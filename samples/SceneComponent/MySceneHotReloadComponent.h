// Fill out your copyright notice in the Description page of Project Settings.
 
#pragma once

#include "Components/SceneComponent.h"
#include "MySceneHotReloadComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UMySceneHotReloadComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMySceneHotReloadComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	float MovementRadius; 

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	float test;
	int p;   
};
