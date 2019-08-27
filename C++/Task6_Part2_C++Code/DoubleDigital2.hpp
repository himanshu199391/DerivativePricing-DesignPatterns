//
//  DoubleDigital2.hpp
//  ch10_factory_pattern
//
//  Created by HIMANSHU KUMAR on 12/15/18.
//  Copyright © 2018 Jared Zhou. All rights reserved.
//

#ifndef DoubleDigital2_hpp
#define DoubleDigital2_hpp

#include <stdio.h>
#include "PayOff3.h"

using namespace std;

class PayOffDoubleDigital : public PayOff
{
public:
    
    PayOffDoubleDigital(double LowerLevel_, double UpperLevel_);
    PayOffDoubleDigital(const MJArray& args);
    virtual double operator()(double Spot) const;
    virtual ~PayOffDoubleDigital(){}
    virtual PayOff* clone() const;
    
    double GetLowerLevel() const;
    double GetUpperLevel() const;
    void SetStrike(double LowerLevel_, double UpperLevel_);
    
private:
    double LowerLevel;
    double UpperLevel;
};


#endif /* DoubleDigital2_hpp */
