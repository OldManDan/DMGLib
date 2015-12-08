//-----------------------------------------------------------------------------------------------------------------
// ConsoleRenderSystem.cpp
// Author: Dan Giglio
// Created: 2015/12/07
// Edited: 2015/12/07
//-----------------------------------------------------------------------------------------------------------------
// Notes:
// 
// 
//-----------------------------------------------------------------------------------------------------------------

#include <assert.h>

#include "ConsoleRenderSystem.h"
#include "ConsoleRenderDevice.h"

using namespace DMGLib_RenderSystem;


//-----------------------------------------------------------------------------------------------------------------
// Update
//-----------------------------------------------------------------------------------------------------------------
void RenderSystem::Update ()
{
    RenderAll ();
}

//-----------------------------------------------------------------------------------------------------------------
// Renders all devices in the m_renderables list.
//-----------------------------------------------------------------------------------------------------------------
void ConsoleRenderSystem::RenderAll ()
{
    for (ConsoleRenderDevice* device : m_renderables)
    {
        device->Render ();
    }
}

//-----------------------------------------------------------------------------------------------------------------
// Links a RenderDevice to this RenderSystem
//-----------------------------------------------------------------------------------------------------------------
void ConsoleRenderSystem::AttachDevice (RenderDevice* pDevice)
{
    if (!pDevice)
        return;

    ConsoleRenderDevice* pConsoleDevice = static_cast<ConsoleRenderDevice* >(pDevice);
    assert (dynamic_cast<ConsoleRenderDevice* >(pDevice));

    m_renderables.push_back(pConsoleDevice);
}

//-----------------------------------------------------------------------------------------------------------------
// Unlinks a RenderDevice to this RenderSystem
//-----------------------------------------------------------------------------------------------------------------
void ConsoleRenderSystem::DettachDevice (RenderDevice* pDevice)
{
    if (!pDevice)
        return;

    ConsoleRenderDevice* pConsoleDevice = static_cast<ConsoleRenderDevice*>(pDevice);
    assert (dynamic_cast<ConsoleRenderDevice*>(pDevice));

    auto findit = std::find (m_renderables.begin (), m_renderables.end (), pConsoleDevice);
    m_renderables.erase(findit);
}