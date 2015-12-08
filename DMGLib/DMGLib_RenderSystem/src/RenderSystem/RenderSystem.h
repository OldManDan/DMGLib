//-----------------------------------------------------------------------------------------------------------------
// RenderSystem.h
// Author: Dan Giglio
// Created: 2015/12/06
// Edited: 2015/12/06
//-----------------------------------------------------------------------------------------------------------------
// Notes:
// 
// This needs to be subclassed from a pure virtual ComponentSystem interface.
// The RenderSystem knows about its components, but no other types of components.
// 
//-----------------------------------------------------------------------------------------------------------------

#ifndef __RENDERSYSTEM_H__
#define __RENDERSYSTEM_H__

#include <vector>


namespace DMGLib_RenderSystem
{
    class RenderDevice;

    // 
    class RenderSystem
    {
    protected:
        // Renders all devices in the m_renderables list
        virtual void RenderAll () = 0;

    public:
        virtual ~RenderSystem ();

        // Updates all renderables.
        virtual void Update () = 0;

        // Links a RenderDevice to this RenderSystem
        virtual void AttachDevice (RenderDevice* pDevice) = 0;

        // Unlinks a RenderDevice to this RenderSystem
        virtual void DettachDevice (RenderDevice* pDevice) = 0;
    };
}


#endif // __RENDERSYSTEM_H__
