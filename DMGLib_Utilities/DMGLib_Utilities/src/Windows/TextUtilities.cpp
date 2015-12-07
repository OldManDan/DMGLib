// Utilites.cpp
// Author: Dan Giglio
// Created: 09/20/15
// Edited: 12/06/15
// Module: DMGLib_Utilities

#if _WIN32

#include <windows.h>
#include "TextUtilities.h"

using namespace DMGLib_Utilities::TextUtilities;

//---------------------------------------------------------------------------------------------------------------------
// Makes the console text Blue
//---------------------------------------------------------------------------------------------------------------------
const void DMGLib_Utilities::TextUtilities::BlueText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
}

//---------------------------------------------------------------------------------------------------------------------
// Makes the console text Green
//---------------------------------------------------------------------------------------------------------------------
const void DMGLib_Utilities::TextUtilities::GreenText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
}

//---------------------------------------------------------------------------------------------------------------------
// Makes the console text White
//---------------------------------------------------------------------------------------------------------------------
const void DMGLib_Utilities::TextUtilities::WhiteText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

//---------------------------------------------------------------------------------------------------------------------
// Makes the console text Red
//---------------------------------------------------------------------------------------------------------------------
const void DMGLib_Utilities::TextUtilities::RedText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
}

const void DMGLib_Utilities::TextUtilities::SetCursorPosition (unsigned int x, unsigned int y)
{
    COORD coord;

    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), coord);
}

const void DMGLib_Utilities::TextUtilities::SetConsoleSize (unsigned int x, unsigned int y)
{
    HWND console = GetConsoleWindow ();
    RECT r;
    GetWindowRect (console, &r); // Stores the consoles current dimensions

    MoveWindow (console, r.left, r.top, x, y, TRUE);

    
#if 0
    //-----------------------------------------------------------------------------------------------------------------
    // Work in progress:
    // Remove the scrollbars from the console window.
    //-----------------------------------------------------------------------------------------------------------------
    HANDLE hOut;
    CONSOLE_SCREEN_BUFFER_INFO SBInfo;
    COORD NewSBSize;
    int Status;

    hOut = GetStdHandle (STD_OUTPUT_HANDLE);

    GetConsoleScreenBufferInfo (hOut, &SBInfo);
    NewSBSize.X = SBInfo.dwSize.X - 2;
    NewSBSize.Y = SBInfo.dwSize.Y;

    Status = SetConsoleScreenBufferSize (hOut, NewSBSize);
#endif

}

#endif