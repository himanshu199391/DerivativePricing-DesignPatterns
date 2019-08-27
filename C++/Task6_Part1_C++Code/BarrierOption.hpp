//
//  BarrierOption.hpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#ifndef BarrierOption_hpp
#define BarrierOption_hpp

#include <stdio.h>
#include "Payoff3.hpp"

class PayOffBarrier : public PayOff
{
    
public:
    PayOffBarrier(double Barrier_, double Strike_, double Rebate = 0.0);
    virtual ~PayOffBarrier(){}
    virtual bool IsTouched(double Spot) const = 0;
    double GetBarrier() const { return Barrier; }
    double GetRebate() const { return Rebate; }
protected:
    double Barrier;
    double Rebate;
};

class PayOffKOCall : public PayOffBarrier //up & out call
{
public:
    PayOffKOCall(double Barrier_, double Strike_,double Rebate=0.0);
    virtual double operator()(double Spot) const;
    virtual ~PayOffKOCall(){}
    virtual bool IsTouched(double Spot) const;
    virtual PayOff* clone() const;
private:
};

class PayOffKOPut : public PayOffBarrier //down & out put
{
public:
    PayOffKOPut(double Barrier_, double Strike_,double Rebate=0.0);
    virtual double operator()(double Spot) const;
    virtual ~PayOffKOPut(){}
    virtual bool IsTouched(double Spot) const;
    virtual PayOff* clone() const;
private:
};

class PayOffKICall : public PayOffBarrier //up & in call
{
public:
    PayOffKICall(double Barrier_, double Strike_,double Rebate=0.0);
    virtual double operator()(double Spot) const;
    virtual ~PayOffKICall(){}
    virtual bool IsTouched(double Spot) const;
    virtual PayOff* clone() const;
private:
};

class PayOffKIPut : public PayOffBarrier //down & in put
{
public:
    PayOffKIPut(double Barrier_, double Strike_,double Rebate=0.0);
    virtual double operator()(double Spot) const;
    virtual ~PayOffKIPut(){}
    virtual bool IsTouched(double Spot) const;
    virtual PayOff* clone() const;
private:
};

class PayOffDownInCall : public PayOffBarrier //down & in call
{
public:
    PayOffDownInCall(double Barrier_, double Strike_, double Rebate = 0.0);
    virtual double operator()(double Spot) const;
    virtual ~PayOffDownInCall(){}
    virtual bool IsTouched(double Spot) const;
    virtual PayOff* clone() const;
private:
};

class PayOffDownOutCall : public PayOffBarrier //down & out call
{
public:
    PayOffDownOutCall(double Barrier_, double Strike_, double Rebate = 0.0);
    virtual double operator()(double Spot) const;
    virtual ~PayOffDownOutCall(){}
    virtual bool IsTouched(double Spot) const;
    virtual PayOff* clone() const;
private:
};

class PayOffUpInPut : public PayOffBarrier //up & in put
{
public:
    PayOffUpInPut(double Barrier_, double Strike_, double Rebate = 0.0);
    virtual double operator()(double Spot) const;
    virtual ~PayOffUpInPut(){}
    virtual bool IsTouched(double Spot) const;
    virtual PayOff* clone() const;
private:
};

class PayOffUpOutPut : public PayOffBarrier //up & out put
{
public:
    PayOffUpOutPut(double Barrier_, double Strike_, double Rebate = 0.0);
    virtual double operator()(double Spot) const;
    virtual ~PayOffUpOutPut(){}
    virtual bool IsTouched(double Spot) const;
    virtual PayOff* clone() const;
private:
};


#endif /* BarrierOption_hpp */
