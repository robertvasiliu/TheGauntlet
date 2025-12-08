// Copyright Epic Games, Inc. All Rights Reserved.


#include "TheGauntletPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "Blueprint/UserWidget.h"
#include "TheGauntlet.h"
#include "Widgets/Input/SVirtualJoystick.h"

void ATheGauntletPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ShouldUseTouchControls() && IsLocalPlayerController())
	{

		MobileControlsWidget = CreateWidget<UUserWidget>(this, MobileControlsWidgetClass);

		if (MobileControlsWidget)
		{

			MobileControlsWidget->AddToPlayerScreen(0);

		} else {

			UE_LOG(LogTheGauntlet, Error, TEXT("Could not spawn mobile controls widget."));

		}

	}
}

void ATheGauntletPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    if (IsLocalPlayerController())
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
            ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
        {
            for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
            {
                if (CurrentContext)
                {
                    Subsystem->AddMappingContext(CurrentContext, 0);
                }
            }
            if (!ShouldUseTouchControls())
            {
                for (UInputMappingContext* CurrentContext : MobileExcludedMappingContexts)
                {
                    if (CurrentContext)
                    {
                        Subsystem->AddMappingContext(CurrentContext, 0);
                    }
                }
            }
        }
    }
}


bool ATheGauntletPlayerController::ShouldUseTouchControls() const
{
	return SVirtualJoystick::ShouldDisplayTouchInterface() || bForceTouchControls;
}

void ATheGauntletPlayerController::ShowMenuMode()
{
	bShowMouseCursor = true;

	FInputModeGameAndUI Mode;
	Mode.SetHideCursorDuringCapture(false);
	Mode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	SetInputMode(Mode);
}
void ATheGauntletPlayerController::ShowGameMode()
{
	bShowMouseCursor = false;
	FInputModeGameOnly Mode;
	Mode.SetConsumeCaptureMouseDown(false);
	SetInputMode(Mode);
}
