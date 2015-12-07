// Rng.cpp
// Author: Dan Giglio
// Created: 09/25/15
// Edited: 12/06/15
// Module: DMGLib_Utilities

#include "Rng.h"
#include <time.h>
#include <stdlib.h>

using namespace DMGLib_Utilities;

RNG::RNG()
{
	srand((unsigned int)time(0));
}

int RNG::RandRange(int minValue, int maxValue)
{
	int value = (rand() % (maxValue - minValue)) + minValue;
	return value;
}
