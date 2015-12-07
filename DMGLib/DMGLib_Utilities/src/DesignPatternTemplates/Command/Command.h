//-----------------------------------------------------------------------------------------------------------------
// Command.h
// Author: Dan Giglio
// Created: 2015/12/07
// Edited: 2015/12/07
//-----------------------------------------------------------------------------------------------------------------
// Notes:
// 
// This is the baseline for a templated command pattern.
//-----------------------------------------------------------------------------------------------------------------

#ifndef __COMMAND_H__
#define __COMMAND_H__

template <typename Type>
class Command
{
    
public:
    virtual ~Command ();

    virtual void Execute(Type* pType) = 0;
};

#endif // __COMMAND_H__
