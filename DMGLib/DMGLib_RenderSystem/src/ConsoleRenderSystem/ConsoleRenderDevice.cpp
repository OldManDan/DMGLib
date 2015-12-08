//-----------------------------------------------------------------------------------------------------------------
// ConsoleRenderDevice.cpp
// Author: Dan Giglio
// Created: 2015/12/06
// Edited: 2015/12/06
//-----------------------------------------------------------------------------------------------------------------
// Notes:
// 
// 
//-----------------------------------------------------------------------------------------------------------------

#include <iostream>

#include "ConsoleRenderDevice.h"
#include "Windows/TextUtilities.h"

using namespace DMGLib_RenderSystem;
using namespace DMGLib_Utilities::TextUtilities;

//-----------------------------------------------------------------------------------------------------------------
// Constructor, sets m_char to the input parameter "&newChar".
//-----------------------------------------------------------------------------------------------------------------
ConsoleRenderDevice::ConsoleRenderDevice (const char &newChar, CoordinatesCallback callback)
    : m_char (newChar)
    , m_locationCallback (callback)
{ }

//-----------------------------------------------------------------------------------------------------------------
// Destructor
//-----------------------------------------------------------------------------------------------------------------
ConsoleRenderDevice::~ConsoleRenderDevice ()
{
    //
}

//-----------------------------------------------------------------------------------------------------------------
// Sets the character that this device will render.
//-----------------------------------------------------------------------------------------------------------------
void ConsoleRenderDevice::SetCharacter (const char &newChar)
{
    m_char = newChar;
}

//-----------------------------------------------------------------------------------------------------------------
// Renders this m_char to the console window.
//-----------------------------------------------------------------------------------------------------------------
void ConsoleRenderDevice::Render () const
{
    const Vector2D* pCurrentLocation = m_locationCallback ();
    SetCursorPosition(pCurrentLocation->X, pCurrentLocation->Y);
    std::cout << '@';
}