// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "HotReloadBugs.h"
#include "CustomBlueprintFunctionLibrary_IsFixed.generated.h"

/**
 * 
 */
UCLASS()
class HOTRELOADBUGS_API UCustomBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Test")
	static void TestFunction(); 

	UFUNCTION(BlueprintCallable)
		static void TestFunctionA() {} 
};
 