// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomBlueprintFunctionLibrary_IsFixed.h"

void UCustomBlueprintFunctionLibrary::TestFunction()
{
    // Hot reload detects changes, but it isn't properly updated
    // Modify text, let hot reload recompile, and press play to see the old text still being written to log.
    UE_LOG(LogTemp, Warning, TEXT("\n\n\nTest output 4.\n\n\n"));   
} 
      