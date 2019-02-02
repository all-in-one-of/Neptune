// Fill out your copyright notice in the Description page of Project Settings.

#include "CyberpunkSplineFunctionLibrary.h"

void UCyberpunkSplineFunctionLibrary::SetScaleAtSplinePoint(USplineComponent* Target, int PointIndex, FVector Scale, bool bUpdateSpline)
{
	if (Target != nullptr) // If spline exists
	{
		const int32 NumPoints = Target->GetNumberOfSplinePoints(); // Num of points

		if ((PointIndex >= 0) && (PointIndex < NumPoints)) // Valid index
		{
			Target->SplineCurves.Scale.Points[PointIndex].OutVal = Scale; // Assign scale

			if (bUpdateSpline) // Optionally update the spline
				Target->UpdateSpline();
		}
	}
}