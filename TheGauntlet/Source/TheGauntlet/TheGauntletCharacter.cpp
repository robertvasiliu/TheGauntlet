// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheGauntletCharacter.h"
#include "GauntletGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "TheGauntlet.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ATheGauntletCharacter::ATheGauntletCharacter()
{
    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
    GetCharacterMovement()->JumpZVelocity = 500.f;
    GetCharacterMovement()->AirControl = 0.35f;
    GetCharacterMovement()->MaxWalkSpeed = 500.f;
    GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
    GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
    GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->TargetArmLength = 400.0f;
    CameraBoom->bUsePawnControlRotation = true;

    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
    FollowCamera->bUsePawnControlRotation = false;

    Health = MaxHealth;
}

void ATheGauntletCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        if (JumpAction)
        {
            EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ATheGauntletCharacter::DoJumpStart);
            EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ATheGauntletCharacter::DoJumpEnd);
        }
        if (MoveAction)
        {
            EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATheGauntletCharacter::Move);
        }
        if (LookAction)
        {
            EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ATheGauntletCharacter::Look);
        }
        if (MouseLookAction)
        {
            EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &ATheGauntletCharacter::Look);
        }
        if (InteractAction)
        {
            EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ATheGauntletCharacter::Interact);
        }
    }
    else
    {
        UE_LOG(LogTemplateCharacter, Error,
            TEXT("'%s' Failed to find an Enhanced Input component!"), *GetNameSafe(this));
    }
}

void ATheGauntletCharacter::Move(const FInputActionValue& Value)
{
    const FVector2D MovementVector = Value.Get<FVector2D>();
    DoMove(MovementVector.X, MovementVector.Y);
}

void ATheGauntletCharacter::Look(const FInputActionValue& Value)
{
    const FVector2D LookAxisVector = Value.Get<FVector2D>();
    DoLook(LookAxisVector.X, LookAxisVector.Y);
}

void ATheGauntletCharacter::Interact(const FInputActionValue& Value)
{

}

void ATheGauntletCharacter::DoMove(float Right, float Forward)
{
    if (Controller)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        AddMovementInput(ForwardDirection, Forward);
        AddMovementInput(RightDirection, Right);
    }
}

void ATheGauntletCharacter::DoLook(float Yaw, float Pitch)
{
    if (Controller)
    {
        AddControllerYawInput(Yaw);
        AddControllerPitchInput(Pitch);
    }
}

void ATheGauntletCharacter::DoJumpStart()
{
    Jump();
}

void ATheGauntletCharacter::DoJumpEnd()
{
    StopJumping();
}

void ATheGauntletCharacter::ApplyDamage(float Amount)
{
    Health = FMath::Clamp(Health - Amount, 0.f, MaxHealth);
}

void ATheGauntletCharacter::AddStones(int32 Amount)
{
    Stones = FMath::Max(0, Stones + Amount);
}

void ATheGauntletCharacter::SetHasKey(bool bNewHasKey)
{
    bHasKey = bNewHasKey;
}
void ATheGauntletCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    const float Z = GetActorLocation().Z;

    if (!bIsTakingFallDamage && Z < KillZ)
    {
        bIsTakingFallDamage = true;

        GetWorldTimerManager().SetTimer(
            FallDamageTimerHandle,
            this,
            &ATheGauntletCharacter::ApplyFallDamage,
            1.0f,
            true
        );
    }
    else if (bIsTakingFallDamage && Z >= KillZ)
    {
        bIsTakingFallDamage = false;
        GetWorldTimerManager().ClearTimer(FallDamageTimerHandle);
    }
}

void ATheGauntletCharacter::ApplyFallDamage()
{
    Health = FMath::Max(0.f, Health - FallDamagePerSecond);

    if (Health <= 0.f)
    {
        GetWorldTimerManager().ClearTimer(FallDamageTimerHandle);

        if (GEngine)
            GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Character: Health <= 0"));

        if (AGauntletGameMode* GM = Cast<AGauntletGameMode>(UGameplayStatics::GetGameMode(this)))
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, TEXT("Cast GM OK"));
            GM->HandlePlayerDeath();
        }
        else if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("Cast GM FAILED"));
        }
    }

}
