//
//  PayOff3.cpp
//  ch10_factory_pattern
//
//  Created by cheerzzh on 24/6/14.
//  Copyright (c) 2014年 Jared Zhou. All rights reserved.
//

#include "PayOff3.h"
#include <algorithm>


using namespace std;

PayOff::PayOff(double Strike_) :Strike(Strike_){}

double PayOff::GetStrike() const{ return Strike; }

void PayOff::SetStrike(double Strike_) { Strike =  Strike_; }

PayOffCall::PayOffCall(double Strike_) : PayOff(Strike_)
{}

PayOffCall::PayOffCall(const MJArray& args) : PayOff(args[0])
{}

double PayOffCall::operator () (double Spot) const
{
    return max(Spot-Strike,0.0);
}

PayOff* PayOffCall::clone() const
{
    return new PayOffCall(*this);
}

PayOffPut::PayOffPut(double Strike_) : PayOff(Strike_)
{}

PayOffPut::PayOffPut(const MJArray& args) : PayOff(args[0])
{}

double PayOffPut::operator () (double Spot) const
{
    return max(Strike-Spot,0.0);
}

PayOff* PayOffPut::clone() const
{
    return new PayOffPut(*this);
}
