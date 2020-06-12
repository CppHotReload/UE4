
#include "IsolatedComponent0771.h"

UIsolatedComponent0771::UIsolatedComponent0771()
{
	PrimaryComponentTick.bCanEverTick = true;   
	MovementRadius = 0.0f;
}

void UIsolatedComponent0771::BeginPlay()       
{
	Super::BeginPlay();      

	AActor* Parent = GetOwner();          
	if (Parent)       
	{
		Parent->SetActorLocation(Parent->GetActorLocation());
	}  
	MovementRadius = 1.0f;   
}

void UIsolatedComponent0771::Gurke()    
{         
	//UE_LOG(LogTemp, Warning, TEXT("C++ Hot Reload [gurke]: %f"), gurke);        
}

void UIsolatedComponent0771::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);   

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
	Gurke();          
}
