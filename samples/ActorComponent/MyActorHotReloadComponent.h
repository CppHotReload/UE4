// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "MyActorHotReloadComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UMyActorHotReloadComponent : public UActorComponent
{
	GENERATED_BODY() 

public:
	UMyActorHotReloadComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;      
	virtual void Gurke();      
public:	
	// Called every frame 
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = General)
		float MovementRadius;


};
  