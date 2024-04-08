// Copyright 2023, Dakota Dawe, All rights reserved


#include "Statics/SKGShooterFrameworkCoreEffectStatics.h"

#include "Engine/World.h"
#include "Sound/SoundAttenuation.h"
#include "Sound/SoundBase.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

constexpr float SpeedOfSound = 343.0f;

float USKGShooterFrameworkCoreEffectStatics::GetSpeedOfSoundDelay(const FVector& LocationA, const FVector& LocationB)
{
	const float Distance = FVector::Distance(LocationA, LocationB) * 0.01f;
	return Distance / SpeedOfSound;
}

void USKGShooterFrameworkCoreEffectStatics::PlayImpactSoundEffectSpeedOfSound(const UWorld* World, const float Delay,
	const FVector Location, USoundBase* Sound, const float VolumeMultiplier, float PitchMultiplier)
{
	if (World && Sound)
	{
		FTimerHandle FSoundDelay;
		const FTimerDelegate SoundDelayDelegate = FTimerDelegate::CreateStatic(&USKGShooterFrameworkCoreEffectStatics::PlayImpactSoundEffectSpeedOfSound_Implementation, World, Delay, Location, Sound, VolumeMultiplier, PitchMultiplier);
		World->GetTimerManager().SetTimer(FSoundDelay, SoundDelayDelegate, Delay, false);
	}
}

void USKGShooterFrameworkCoreEffectStatics::PlayImpactSoundEffectSpeedOfSound_Implementation(const UWorld* World,
	const float Delay, const FVector Location, USoundBase* Sound, const float VolumeMultiplier,
	float PitchMultiplier)
{
	UGameplayStatics::SpawnSoundAtLocation(World, Sound, Location, FRotator::ZeroRotator, VolumeMultiplier, PitchMultiplier, 0.0f, Sound->AttenuationSettings);
}