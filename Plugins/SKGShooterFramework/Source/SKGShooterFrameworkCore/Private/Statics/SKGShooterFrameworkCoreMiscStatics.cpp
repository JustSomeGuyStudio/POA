// Copyright 2023, Dakota Dawe, All rights reserved


#include "Statics/SKGShooterFrameworkCoreMiscStatics.h"

bool USKGShooterFrameworkCoreMiscStatics::IsWorldTearingDown(const UObject* WorldContextObject)
{
	return WorldContextObject && WorldContextObject->GetWorld() ? WorldContextObject->GetWorld()->bIsTearingDown : false;
}
