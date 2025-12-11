// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "TheGauntletCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 *  Player character: movimento + attributi (salute, inventario chiavi/pietre)
 */

UCLASS()
class THEGAUNTLET_API ATheGauntletCharacter : public ACharacter
{
    GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UCameraComponent* FollowCamera;

protected:

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* JumpAction;

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* MoveAction;

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* LookAction;

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* MouseLookAction;

    UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* InteractAction;
    virtual void Tick(float DeltaSeconds) override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Stats")
    float MaxHealth = 100.f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Stats")
    float Health = 100.f;

    UPROPERTY(EditDefaultsOnly, Category="Health")
    float FallDamagePerSecond = 20.f;

    UPROPERTY(EditDefaultsOnly, Category="Health")
    float KillZ = -10.f;

    bool bIsTakingFallDamage = false;

    FTimerHandle FallDamageTimerHandle;

    UFUNCTION()
    void ApplyFallDamage();

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
    bool bHasKey = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
    int32 Stones = 0;

public:

    ATheGauntletCharacter();

protected:

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    void Move(const FInputActionValue& Value);

    void Look(const FInputActionValue& Value);

    void Interact(const FInputActionValue& Value);

public:

    UFUNCTION(BlueprintCallable, Category = "Input")
    virtual void DoMove(float Right, float Forward);

    UFUNCTION(BlueprintCallable, Category = "Input")
    virtual void DoLook(float Yaw, float Pitch);

    UFUNCTION(BlueprintCallable, Category = "Input")
    virtual void DoJumpStart();

    UFUNCTION(BlueprintCallable, Category = "Input")
    virtual void DoJumpEnd();


    UFUNCTION(BlueprintCallable, Category = "Stats")
    void ApplyDamage(float Amount);

    UFUNCTION(BlueprintCallable, Category = "Inventory")
    void AddStones(int32 Amount);

    UFUNCTION(BlueprintCallable, Category = "Inventory")
    void SetHasKey(bool bNewHasKey);

public:

    FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

    FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};
