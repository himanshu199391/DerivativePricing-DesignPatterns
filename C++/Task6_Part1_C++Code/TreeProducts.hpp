//
//  TreeProducts.hpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#ifndef TreeProducts_hpp
#define TreeProducts_hpp

#include <stdio.h>
class TreeProduct
{
public:
    
    TreeProduct(double FinalTime_);
    virtual double FinalPayOff(double Spot) const=0;
    virtual double PreFinalValue(double Spot,
                                 double Time,
                                 double DiscountedFutureValue) const=0;
    virtual ~TreeProduct(){}
    virtual TreeProduct* clone() const=0;
    double GetFinalTime() const;
    
private:
    double FinalTime;
    
};

#endif

