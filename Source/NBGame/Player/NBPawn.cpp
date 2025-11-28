#include "NBPawn.h"
#include "NBGame.h"

void ANBPawn::BeginPlay()
{
	Super::BeginPlay();

	FString NetRoleString = NBGameFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("CXPawn::BeginPlay() %s [%s]"), *NBGameFunctionLibrary::GetNetModeString(this), *NetRoleString);
	NBGameFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}

void ANBPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	FString NetRoleString = NBGameFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("CXPawn::PossessedBy() %s [%s]"), *NBGameFunctionLibrary::GetNetModeString(this), *NetRoleString);
	NBGameFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}
