//
//  TreeProducts.cpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#include "TreeProducts.hpp"


TreeProduct::TreeProduct(double FinalTime_)
: FinalTime(FinalTime_)
{
}

double TreeProduct::GetFinalTime() const
{
    return FinalTime;
}
