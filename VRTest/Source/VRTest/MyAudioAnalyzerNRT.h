// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AudioAnalyzerNRT.h"
#include "MyAudioAnalyzerNRT.generated.h"

/**
 * 
 */
UCLASS()
class VRTEST_API UMyAudioAnalyzerNRT : public UAudioAnalyzerNRT
{
	GENERATED_BODY()
	virtual FName GetAnalyzerNRTFactoryName() const override;

	void UpdateResults();
	void ChangeSoundWave();

public:
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<USoundWave> newSoundWave;
};
