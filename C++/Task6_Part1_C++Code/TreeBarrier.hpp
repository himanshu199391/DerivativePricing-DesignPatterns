//
//  TreeBarrier.hpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#ifndef TreeBarrier_hpp
#define TreeBarrier_hpp

#include <stdio.h>
#include "TreeProducts.hpp"
#include "PayOffBridge.hpp"

class TreeBarrier : public TreeProduct
{
    
public:
    
    TreeBarrier(double FinalTime,
                const PayOffBridge& ThePayOff_);
    
    virtual TreeProduct* clone() const;
    virtual double FinalPayOff(double Spot) const;
    virtual double PreFinalValue(double Spot,
                                 double Time,
                                 double DiscountedFutureValue) const;
    virtual ~TreeBarrier(){}
    
private:
    
    PayOffBridge ThePayOff;
    
};


#endif /* TreeBarrier_hpp */
