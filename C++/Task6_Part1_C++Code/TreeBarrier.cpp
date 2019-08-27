//
//  TreeBarrier.cpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#include "TreeBarrier.hpp"
#include "minmax.h"

TreeBarrier::TreeBarrier(double FinalTime,
                         const PayOffBridge& ThePayOff_)
: TreeProduct(FinalTime),
ThePayOff(ThePayOff_)
{
}

double TreeBarrier::FinalPayOff(double Spot) const
{
    return ThePayOff(Spot);
}

double TreeBarrier::PreFinalValue(double Spot,
                                  double Time,
                                  double DiscountedFutureValue) const
{
    return DiscountedFutureValue;
}

TreeProduct* TreeBarrier::clone() const
{
    return new TreeBarrier(*this);
}
