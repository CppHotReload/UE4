
#pragma once
#include "Components/ActorComponent.h"
#include "IsolatedComponent0452.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UIsolatedComponent0452 : public UActorComponent
{
	GENERATED_BODY() 

public:
	UIsolatedComponent0452();

protected:
	virtual void BeginPlay() override;      
	virtual void Gurke();      
public:	  
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	UPROPERTY(EditAnywhere, Category = General)
	float MovementRadius;
};