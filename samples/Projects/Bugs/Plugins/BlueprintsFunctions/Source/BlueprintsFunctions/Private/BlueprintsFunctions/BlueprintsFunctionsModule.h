#pragma once

#include "BlueprintsFunctions.h"
#include "ModuleManager.h"
class FInputPluginModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void Right();
	UFUNCTION(BlueprintImplementableEvent, Category = "Test")
	void Right_BP();
	
	void Left();
	UFUNCTION(BlueprintImplementableEvent, Category = "Test")
	void Left_BP();
	
	void Accept();
	UFUNCTION(BlueprintImplementableEvent, Category = "Test")
	void Accept_BP();
};