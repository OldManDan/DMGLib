// Pair.hpp
// Author: Dan Giglio
// Created: 11/03/2015
// Edited: 11/03/2015
//
//---------------------------------------------------------------------------------------------------------------------
// Notes:
// This is my implementation of std::pair
//---------------------------------------------------------------------------------------------------------------------

#ifndef __Pair_h__
#define __Pair_h__

namespace dmg
{
    template <typename FType, typename SType>
    struct Pair
    {
    public:
        FType first;
        SType second;

        inline bool operator== (const Pair &rhs)
        {
            if (first == rhs->first && second == rhs->second)
            {
                return true;
            }
            else
                return false;   
        }
    };    
}

#endif //! __Pair_h__