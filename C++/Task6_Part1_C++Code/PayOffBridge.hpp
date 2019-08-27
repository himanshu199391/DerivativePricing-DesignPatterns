//
//  PayOffBridge.hpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#ifndef PayOffBridge_hpp
#define PayOffBridge_hpp

#include <stdio.h>
#include "PayOff3.hpp"


class PayOffBridge
{
public:
    PayOffBridge();
    PayOffBridge(const PayOffBridge& original);
    PayOffBridge(const PayOff& innerPayOff);
    
    inline double operator()(double Spot) const;
    ~PayOffBridge();
    PayOffBridge& operator=(const PayOffBridge& original);
    inline double GetStrike() const;
    inline void SetStrike(double Strike);
private:
    
    PayOff* ThePayOffPtr;
    
};

inline double PayOffBridge::operator()(double Spot) const
{
    return ThePayOffPtr->operator ()(Spot);
}

inline double PayOffBridge::GetStrike() const
{
    return ThePayOffPtr->GetStrike();
}

inline void PayOffBridge::SetStrike(double Strike)
{
    return ThePayOffPtr->SetStrike(Strike);
}



#endif /* PayOffBridge_hpp */
