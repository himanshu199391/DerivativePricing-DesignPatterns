//
//  TreeAmericanBarrier.hpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#ifndef TreeAmericanBarrier_hpp
#define TreeAmericanBarrier_hpp

#include <stdio.h>
#include "TreeProducts.hpp"
#include "PayOffBridge.hpp"

class TreeAmericanBarrier : public TreeProduct
{
    
public:
    
    enum Type {PayOffKOCall, PayOffKOPut, PayOffKICall, PayOffKIPut};
    
    Type ThePayOff_;
    
    TreeAmericanBarrier(double FinalTime,
                        const PayOffBridge& ThePayOff_);
    
    virtual TreeProduct* clone() const;
    virtual double FinalPayOff(double Spot) const;
    virtual double PreFinalValue(double Spot,
                                 double Time,
                                 double DiscountedFutureValue) const;
    virtual ~TreeAmericanBarrier(){}
    
private:
    
    PayOffBridge ThePayOff;
    
};

#endif /* TreeAmericanBarrier_hpp */
