// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextFileManager.generated.h"

/**
 * 
 */
UCLASS()
class OMOTIONSIM_API UTextFileManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Custom")
	static bool SaveArrayText(FString filePath, FString fileName, TArray<FString> textToSave);
		
	UFUNCTION(BlueprintCallable, Category = "Custom")
	static bool SaveStringToFile(FString filePath, FString fileName, FString textToSave);

};
