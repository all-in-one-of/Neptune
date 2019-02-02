// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/Engine/Classes/Components/SplineComponent.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CyberpunkSplineFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CYBERPUNK_API UCyberpunkSplineFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	UFUNCTION(BlueprintCallable, Category = "Spline", meta = (DefaultToSelf = "Target"))
		static void SetScaleAtSplinePoint(UPARAM(DisplayName = "Target [self]") USplineComponent* Target, int PointIndex, FVector Scale, bool bUpdateSpline = true);

};
