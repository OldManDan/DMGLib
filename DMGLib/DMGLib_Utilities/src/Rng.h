// Rng.h
// Author: Dan Giglio
// Created: 09/25/15
// Edited: 12/06/15
// Module: DMGLib_Utilities

#ifndef __RNG_H__
#define __RNG_H__

namespace DMGLib_Utilities
{
    class RNG
    {

    public:
	    int RandRange(int minValue, int maxValue);

    private:
	    // Constructor
	    RNG();
    };
}

#endif