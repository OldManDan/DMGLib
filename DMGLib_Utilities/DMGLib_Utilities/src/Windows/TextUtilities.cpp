// Utilites.cpp
// Author: Dan Giglio
// Created: 09/20/15
// Edited: 12/06/15
// Module: DMGLib_Utilities

#if _WIN32

#include <windows.h>
#include "TextUtilities.h"

using namespace DMGLibUtilities::TextUtilities;

//---------------------------------------------------------------------------------------------------------------------
// Makes the console text Blue
//---------------------------------------------------------------------------------------------------------------------
const void DMGLibUtilities::TextUtilities::BlueText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
}

//---------------------------------------------------------------------------------------------------------------------
// Makes the console text Green
//---------------------------------------------------------------------------------------------------------------------
const void DMGLibUtilities::TextUtilities::GreenText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
}

//---------------------------------------------------------------------------------------------------------------------
// Makes the console text White
//---------------------------------------------------------------------------------------------------------------------
const void DMGLibUtilities::TextUtilities::WhiteText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

//---------------------------------------------------------------------------------------------------------------------
// Makes the console text Red
//---------------------------------------------------------------------------------------------------------------------
const void DMGLibUtilities::TextUtilities::RedText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
}

const void DMGLibUtilities::TextUtilities::SetCursorPosition (int x, int y)
{
    COORD coord;

    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), coord);
}

#endif