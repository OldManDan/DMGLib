// Singleton.h
// Author: Dan Giglio
// Created: 09/14/15
// Edited: 12/06/15
// Module: DMGLib_Utilities
// Version: 2.0

#ifndef __SINGLETON_H__
#define __SINGLETON_H__

template <typename Type>
class Singleton
{
    // The singular instance that will be referenced by this Singleton class
    static Type* s_pSingletonInstance;

public:

	// Access point: returns the current instance of this Singleton
    static Type* Get()
       {
              if(!s_pSingletonInstance)
                     s_pSingletonInstance = new Type();
              return s_pSingletonInstance;
       }

	// Deletes the current instance and sets its pointer to nullptr
    static void Destroy()
	{
		delete s_pSingletonInstance;
		s_pSingletonInstance = nullptr;
	}
};

// Initializes the value of s_pSingletonInstance to nullptr
template <typename Type>
Type* Singleton<Type>::s_pSingletonInstance = nullptr; 

#endif