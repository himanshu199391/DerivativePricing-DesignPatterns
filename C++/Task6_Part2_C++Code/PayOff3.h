//
//  PayOff3.h
//  ch10_factory_pattern
//
//  Created by cheerzzh on 24/6/14.
//  Copyright (c) 2014年 Jared Zhou. All rights reserved.
//

#ifndef __ch10_factory_pattern__PayOff3__
#define __ch10_factory_pattern__PayOff3__
#include "Arrays.h"

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



#endif /* defined(__ch10_factory_pattern__PayOff3__) */
