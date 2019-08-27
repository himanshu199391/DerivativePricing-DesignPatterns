//
//
//
//                  PayOff1.cpp
//
//

#include "PayOff1.h"
#include "minmax.h"

PayOff::PayOff(double Strike_, OptionType TheOptionsType_)
:
    Strike(Strike_),Strike_Low(0),Strike_Up(0), TheOptionsType(TheOptionsType_)
{
}

PayOff::PayOff(double Strike_Lower,double Strike_Upper, OptionType TheOptionsType_)  // Overloading the Constructor adding 2 arguments for Lower and Upper Strike Price
:
Strike(0),Strike_Low(Strike_Lower),Strike_Up(Strike_Upper), TheOptionsType(TheOptionsType_)
{
}

double PayOff::operator ()(double spot) const
{
    switch (TheOptionsType)
    {
    case call : 
        return max(spot-Strike,0.0);

    case put:
        return max(Strike-spot,0.0);
            
    case double_digital:   // added double digit Payoff case
            if (spot <= Strike_Low)
                return 0;
            if (spot >= Strike_Up)
                return 0;
            
            return 1;
            

    default: 
        throw("unknown option type found.");

    }
}

/*
 *
 * Copyright (c) 2002
 * Mark Joshi
 *
 * Permission to use, copy, modify, distribute and sell this
 * software for any purpose is hereby
 * granted without fee, provided that the above copyright notice
 * appear in all copies and that both that copyright notice and
 * this permission notice appear in supporting documentation.
 * Mark Joshi makes no representations about the
 * suitability of this software for any purpose. It is provided
 * "as is" without express or implied warranty.
*/

