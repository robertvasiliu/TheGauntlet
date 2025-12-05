// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class THEGAUNTLET_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "GameFlow")
    void StartGame();

    UFUNCTION(BlueprintCallable, Category = "GameFlow")
    void QuitGame();

    UFUNCTION(BlueprintCallable, Category = "GameFlow")
    void LoadMainMenu();
};
