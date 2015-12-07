//-----------------------------------------------------------------------------------------------------------------
// RenderSystem.h
// Author: Dan Giglio
// Created: 2015/12/06
// Edited: 2015/12/06
//-----------------------------------------------------------------------------------------------------------------
// Notes:
// 
// 
//-----------------------------------------------------------------------------------------------------------------

#ifndef __RENDERSYSTEM_H__
#define __RENDERSYSTEM_H__

#include <vector>


namespace DMGLib_RenderSystem
{
    class RenderDevice;

    class RenderSystem
    {
        // List of all renderables present in the scene.
        std::vector<RenderDevice* > m_renderables;

        // Renders all devices in the m_renderables list
        void RenderAll ();

    public:
        RenderSystem ();
        ~RenderSystem ();

        // Updates all renderables.
        void Update ();
    };

}


#endif // __RENDERSYSTEM_H__
