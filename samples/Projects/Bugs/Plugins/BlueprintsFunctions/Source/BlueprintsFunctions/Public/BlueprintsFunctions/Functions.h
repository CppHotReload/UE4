//
//  Copyright (c) since 2014 - 2020 C++ Hot Reload SL. All rights reserved
//
#pragma once

#include "BlueprintsFunctions/BlueprintsFunctionsPCH.h"
#include "Functions.generated.h"

/**
* 
*/
UCLASS()
class BLUEPRINTSFUNCTIONS_API UFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Blueprints Functions|Test")
	static void Test(); 
	
	UFUNCTION(BlueprintCallable, Category = "Blueprints Functions|Test")
	static int Test2(float a, float b, float c); 


	UFUNCTION(BlueprintCallable, Category = "Blueprints Functions|Test")
	static FString Test3(); 
};
