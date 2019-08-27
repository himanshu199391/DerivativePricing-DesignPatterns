//
//  TreeAmerican.hpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#ifndef TreeAmerican_hpp
#define TreeAmerican_hpp

#include <stdio.h>
#include "TreeProducts.hpp"
#include "PayOffBridge.hpp"

class TreeAmerican : public TreeProduct
{
    
public:
    
    TreeAmerican(double FinalTime,
                 const PayOffBridge& ThePayOff_);
    
    virtual TreeProduct* clone() const;
    virtual double FinalPayOff(double Spot) const;
    virtual double PreFinalValue(double Spot,
                                 double Time,
                                 double DiscountedFutureValue) const;
    virtual ~TreeAmerican(){}
    
private:
    
    PayOffBridge ThePayOff;
    
};



#endif /* TreeAmerican_hpp */
