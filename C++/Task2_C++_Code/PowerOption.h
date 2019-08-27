//
//  PowerOption.h
//  Homework_3
//
//  Created by HIMANSHU KUMAR on 21/10/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#ifndef PowerOption_h
#define PowerOption_h



#include "PayOff2.h"

class PowerCallOption : public PayOff
{
public:
    PowerCallOption(double Strike_, unsigned long Power_);
    virtual double operator()(double Spot) const;
    virtual ~PowerCallOption(){}
    
private:
    double Strike;
    unsigned long Power;
    
    
};

class PowerPutOption : public PayOff
{
public:
    PowerPutOption(double Strike_, unsigned long Power_);
    virtual double operator()(double Spot) const;
    virtual ~PowerPutOption(){}
    
private:
    double Strike;
    unsigned long Power;
    
    
};




#endif /* PowerOption_h */
