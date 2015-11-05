// Singleton.h
// Author: Dan Giglio
// Created: 09/14/15
// Edited: 09/22/15
// Version: 2.0

#ifndef __SINGLETON_H__
#define __SINGLETON_H__

template <typename Type>
class Singleton
{
    // The singular instance that will be referenced by this Singleton class
    static Type* s_pSingletonInstance;

public:
#if 0 // Removing in favor of creating the instance using the Get() handle
    // Sets the Singleton<Type> to the new instance. 
    static void SetSingleton(Type* pSingletonInstance)
	{
		// If there is already an instance, delete it.
		if (s_pSingletonInstance)
			Destroy();
		s_pSingletonInstance = pSingletonInstance;
	}
#endif

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

// Initalizes the value of s_pSingletonInstance to nullptr
template <typename Type>
Type* Singleton<Type>::s_pSingletonInstance = nullptr; 

#endif