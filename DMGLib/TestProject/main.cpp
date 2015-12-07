//-----------------------------------------------------------------------------------------------------------------
// main.cpp
// Author: Dan Giglio
// Created: 2015/12/06
// Edited: 2015/12/06
//-----------------------------------------------------------------------------------------------------------------
// Notes:
// 
// 
//-----------------------------------------------------------------------------------------------------------------


#include "vld.h"
#include "DataStructures/Vector2D.h"
#include "ConsoleRenderSystem/ConsoleRenderDevice.h"
#include <conio.h>
#include <iostream>

using namespace DMGLib_RenderSystem;
using namespace DMGLib_Utilities;

Vector2D* TestCallback ();

int main ()
{
    CoordinatesCallback callback = TestCallback;
    ConsoleRenderDevice testDevice('@', callback);

    testDevice.Render();

    _getch ();
    return 0;
}

Vector2D* TestCallback ()
{   
    return new Vector2D (3, 3);
}