// TextUtilites.h
// Author: Dan Giglio
// Created: 09/27/15
// Edited: 12/06/15
// Module: DMGLib_Utilities

#ifndef __TEXTUTILITIES_H__
#define __TEXTUTILITIES_H__

#if _WIN32

namespace DMGLib_Utilities
{
    namespace TextUtilities
    {

	    // Makes the console text Red
	    const void RedText();

	    // Makes the console text Green
	    const void GreenText();

	    // Makes the console text Blue
	    const void BlueText();

	    // Makes the console text White
	    const void WhiteText();

        // Sets the cursor to a specific location in the console window.
        const void SetCursorPosition (unsigned int x, unsigned int y);

        // Sets the console window to size x, y.
        const void SetConsoleSize (unsigned int x, unsigned int y);
    }
}

#endif // _WIN32

#endif // __TEXTUTILITIES_H__