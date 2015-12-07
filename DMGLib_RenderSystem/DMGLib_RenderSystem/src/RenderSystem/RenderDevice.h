//-----------------------------------------------------------------------------------------------------------------
// RenderDevice.h
// Author: Dan Giglio
// Created: 2015/12/06
// Edited: 2015/12/06
//-----------------------------------------------------------------------------------------------------------------
// Notes:
// 
// 
//-----------------------------------------------------------------------------------------------------------------

#ifndef __RENDERDEVICE_H__
#define __RENDERDEVICE_H__

namespace DMGLib_RenderSystem
{

    class RenderDevice
    {
    

    public:
        
        // Renders this device.
        virtual void Render () = 0;
    
    };

}

#endif // __RENDERDEVICE_H__
