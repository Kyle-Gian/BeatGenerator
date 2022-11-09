// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAudioAnalyzerNRT.h"

FName UMyAudioAnalyzerNRT::GetAnalyzerNRTFactoryName() const
{
	return Super::GetAnalyzerNRTFactoryName();
}

void UMyAudioAnalyzerNRT::UpdateResults()
{
}

void UMyAudioAnalyzerNRT::ChangeSoundWave()
{
	if (Sound && newSoundWave)
	{
		Sound = newSoundWave;
		AnalyzeAudio();
		UpdateResults();
	}
}
