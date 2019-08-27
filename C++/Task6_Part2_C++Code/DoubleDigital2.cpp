//
//  DoubleDigital2.cpp
//  ch10_factory_pattern
//
//  Created by HIMANSHU KUMAR on 12/15/18.
//  Copyright © 2018 Jared Zhou. All rights reserved.
//

#include "DoubleDigital2.hpp"
PayOffDoubleDigital::PayOffDoubleDigital(double LowerLevel_, double UpperLevel_)
: PayOff(), LowerLevel(LowerLevel_), UpperLevel(UpperLevel_)
{}

PayOffDoubleDigital::PayOffDoubleDigital(const MJArray& args)
: PayOff(), LowerLevel(args[0]), UpperLevel(args[1])
{}

double PayOffDoubleDigital::operator()(double Spot) const
{
    if ((Spot < LowerLevel) || (Spot > UpperLevel))        return 0;
    else    return 1;
}


PayOff* PayOffDoubleDigital::clone() const
{
    return new PayOffDoubleDigital(*this);
}

double PayOffDoubleDigital::GetLowerLevel() const { return LowerLevel; }
double PayOffDoubleDigital::GetUpperLevel() const { return UpperLevel; }

void  PayOffDoubleDigital::SetStrike(double LowerLevel_, double UpperLevel_)
{
    LowerLevel = LowerLevel_;
    UpperLevel = UpperLevel_;
}
