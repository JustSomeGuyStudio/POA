// Copyright 2023, Dakota Dawe, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SKGShooterFrameworkCoreEffectStatics.generated.h"

class USoundBase;

UCLASS()
class SKGSHOOTERFRAMEWORKCORE_API USKGShooterFrameworkCoreEffectStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
private:
	static void PlayImpactSoundEffectSpeedOfSound_Implementation(const UWorld* World, const float Delay, const FVector Location, USoundBase* Sound, const float VolumeMultiplier, float PitchMultiplier);
public:
	static float GetSpeedOfSoundDelay(const FVector& LocationA, const FVector& LocationB);
	static void PlayImpactSoundEffectSpeedOfSound(const UWorld* World, const float Delay, const FVector Location, USoundBase* Sound, const float VolumeMultiplier, float PitchMultiplier);
};
