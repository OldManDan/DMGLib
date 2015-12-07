//-----------------------------------------------------------------------------------------------------------------
// ConsoleRenderDevice.h
// Author: Dan Giglio
// Created: 2015/12/06
// Edited: 2015/12/06
//-----------------------------------------------------------------------------------------------------------------
// Notes:
// 
// 
//-----------------------------------------------------------------------------------------------------------------

#ifndef __CONSOLERENDERDEVICE_H__
#define __CONSOLERENDERDEVICE_H__

#include "../RenderSystem/RenderDevice.h"
#include "DataStructures/Vector2D.h"
#include <functional>

using namespace DMGLib_Utilities;

namespace DMGLib_RenderSystem
{
    typedef std::function<Vector2D* (void)> CoordinatesCallback;

    class ConsoleRenderDevice : RenderDevice
    {
        char m_char;

        // Callback function to get the coordinates to render this device at.
        CoordinatesCallback m_location;

    public:
        ConsoleRenderDevice (const char &newChar, CoordinatesCallback);
        ~ConsoleRenderDevice ();
        
        // Renders this device's character to the console window.
        virtual void Render () override;

        // Sets the character for this render device.
        void SetCharacter (const char &newChar);
    };

}

#endif // __CONSOLERENDERDEVICE_H__
