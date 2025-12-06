// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
void UMyGameInstance::StartGame()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName("Level_01"));
}
void UMyGameInstance::QuitGame()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
}
void UMyGameInstance::LoadMainMenu()
{
	UGameplayStatics::OpenLevel(this, FName("MainMenu"));
}