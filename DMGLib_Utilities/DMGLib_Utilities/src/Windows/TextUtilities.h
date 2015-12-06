// TextUtilites.h
// Author: Dan Giglio
// Created: 09/27/15
// Edited: 12/06/15
// Module: DMGLib_Utilities

#ifndef __TEXTUTILITIES_H__
#define __TEXTUTILITIES_H__

#if _WIN32

namespace DMGLibUtilities
{
    namespace TextUtilities
    {

	    //Makes the console text Red
	    const void RedText();

	    //Makes the console text Green
	    const void GreenText();

	    //Makes the console text Blue
	    const void BlueText();

	    //Makes the console text White
	    const void WhiteText();

        // Sets the cursor to a specific location in the console window.
        const void SetCursorPosition (int x, int y);

    }
}

#endif

#endif