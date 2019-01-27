// Fill out your copyright notice in the Description page of Project Settings.

#include "FunctionLibrary_CPP.h"

void UFunctionLibrary_CPP::SetSkyLightCubemapAngle(USkyLightComponent* Target, float Angle)
{
	if (Target != nullptr)
	{
		Target->SourceCubemapAngle = Angle;
		//skyLight->Update
	}
}

void UFunctionLibrary_CPP::SetReflectionCaptureCubemap(UReflectionCaptureComponent* Target, UTextureCube* Cubemap)
{
	if (Target != nullptr && Cubemap != nullptr)
	{
		Target->Cubemap = Cubemap;

		UWorld* World = Target->GetWorld();
		Target->MarkDirtyForRecaptureOrUpload();
		Target->UpdateReflectionCaptureContents(World, TEXT("Sky lighting updated - global cubemap re-captured"), false);
		//Target->SetCaptureCompleted();
	}
}

void UFunctionLibrary_CPP::SetReflectionCaptureCubemapAngle(UReflectionCaptureComponent* Target, float Angle)
{
	if (Target != nullptr)
	{
		Target->SourceCubemapAngle = Angle;

		UWorld* World = Target->GetWorld();
		Target->MarkDirtyForRecaptureOrUpload();
		Target->UpdateReflectionCaptureContents(World, TEXT("Sky lighting updated - global cubemap re-captured"), false);
	}
}