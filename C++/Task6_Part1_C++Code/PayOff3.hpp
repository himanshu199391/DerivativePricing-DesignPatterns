//
//  PayOff3.hpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#ifndef PayOff3_hpp
#define PayOff3_hpp

#include <stdio.h>
#include "Arrays.hpp"

class PayOff
{
public:
    PayOff(double Strike_= 0.0);
    virtual double operator()(double Spot) const=0;
    virtual ~PayOff(){}
    virtual PayOff* clone() const=0;
    virtual double GetStrike() const;
    virtual void SetStrike(double Strike_);
protected:
    double Strike;
};

class PayOffCall : public PayOff
{
public:
    PayOffCall(double Strike_);
    PayOffCall(const MJArray& args);
    virtual double operator()(double Spot) const;
    virtual ~PayOffCall(){}
    virtual PayOff* clone() const;
private:
    
};

class PayOffPut : public PayOff
{
public:
    PayOffPut(double Strike_);
    PayOffPut(const MJArray& args);
    virtual double operator()(double Spot) const;
    virtual ~PayOffPut(){}
    virtual PayOff* clone() const;
private:
    
};


#endif /* PayOff3_hpp */
