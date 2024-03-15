// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFileManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFileManager.h"



bool UTextFileManager:: SaveArrayText(FString filePath, FString fileName, TArray<FString> textToSave)
{
	// Set complete file path
	FString saveDirectory = filePath + "\\" + fileName;
	return FFileHelper::SaveStringArrayToFile(textToSave, *saveDirectory);
}

bool UTextFileManager::SaveStringToFile(FString filePath, FString fileName, FString textToSave)
{
	FString saveDirectory = filePath + "\\" + fileName;
	return FFileHelper::SaveStringToFile(*textToSave, *saveDirectory);
}


