//-----------------------------------------------------------------------------------------------------------------
// Macros.h
// Author: Dan Giglio
// Created: 2015/12/06
// Edited: 2015/12/06
//-----------------------------------------------------------------------------------------------------------------
// Notes:
// 
// 
//-----------------------------------------------------------------------------------------------------------------

#ifndef __MACROS_H__
#define __MACROS_H__

namespace DMGLib_Utilities
{
    
#define SAFE_DELETE(_ptr_) delete _ptr_; _ptr_ = nullptr;

#define SAFE_DELETE_ARRAY(_ptr_) delete[] _ptr_; _ptr_ = nullptr;

}

#endif // __MACROS_H__
