//
//  TreeAmerican.cpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#include "TreeAmerican.hpp"

#include<algorithm>

using namespace std;

TreeAmerican::TreeAmerican(double FinalTime,
                           const PayOffBridge& ThePayOff_)
: TreeProduct(FinalTime),
ThePayOff(ThePayOff_)
{
}

TreeProduct* TreeAmerican::clone() const
{
    return new TreeAmerican(*this);
}

double TreeAmerican::FinalPayOff(double Spot) const
{
    return ThePayOff(Spot);
}

double TreeAmerican::PreFinalValue(double Spot,
                                   double , 
                                   double DiscountedFutureValue) const
{
    return max(ThePayOff(Spot), DiscountedFutureValue);
}
