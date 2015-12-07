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


namespace DMGLib_RenderSystem
{

    class ConsoleRenderDevice : RenderDevice
    {
        char m_char;

    public:
        ConsoleRenderDevice (const char &newChar);
        ~ConsoleRenderDevice ();
        
        // Renders this device's character to the console window.
        virtual void Render () override;

        // Sets the character for this render device.
        void SetCharacter (const char &newChar);
    };

}

#endif // __CONSOLERENDERDEVICE_H__
