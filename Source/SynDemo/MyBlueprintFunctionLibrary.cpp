// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"


//获得计算机名
FString UMyBlueprintFunctionLibrary::GetComputerName()
{
	return FPlatformProcess::ComputerName();
}