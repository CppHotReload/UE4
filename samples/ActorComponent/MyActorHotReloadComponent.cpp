// Fill out your copyright notice in the Description page of Project Settings.
#include "MyActorHotReloadComponent.h"

// Sets default values for this component's properties
UMyActorHotReloadComponent::UMyActorHotReloadComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;   

	// ... 
	MovementRadius = 0.0f;
}

// Called when the game starts 
void UMyActorHotReloadComponent::BeginPlay()       
{ 
	Super::BeginPlay();      
	    
	// ...                   

	AActor* Parent = GetOwner();          
	if (Parent)       
	{
		Parent->SetActorLocation(Parent->GetActorLocation());
	}   
	MovementRadius = 1.0f;   
}
  
void UMyActorHotReloadComponent::Gurke()    
{          
	//UE_LOG(LogTemp, Warning, TEXT("C++ Hot Reload [gurke]: %f"), gurke);        
}

// Called every frame       
void UMyActorHotReloadComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);   

	//UE_LOG(LogTemp, Warning, TEXT("C++ Hot Reload:\n%f"), MovementRadius);      
	// ...
	AActor* Parent = GetOwner(); 
	if (Parent)        
	{
		Parent->SetActorLocation(
			Parent->GetActorLocation() + 
			FVector( 
				FMath::FRandRange(-1, 1) * MovementRadius, 
				FMath::FRandRange(-1, 1) * MovementRadius,
				FMath::FRandRange(-1, 1) * MovementRadius));      
	}
	// When this will be executed will have the restored value of this privat variable
	Gurke();          
}
