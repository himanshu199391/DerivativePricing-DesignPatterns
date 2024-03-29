//
//
//
//
//                               PayOff1.h
//
//
//


#ifndef PAYOFF_H
#define PAYOFF_H

class PayOff
{

public:

    enum  OptionType {call, put, double_digital};
    PayOff(double Strike_, OptionType TheOptionsType_);
    PayOff(double Strike_Lower,double Strike_Upper, OptionType TheOptionsType_);
    double operator()(double Spot) const;

private:
    
    double Strike;
    double Strike_Low;
    double Strike_Up;
    OptionType TheOptionsType;

};

#endif

/*
 *
 * Copyright (c) 2002
 * Mark Joshi
 *
 * Permission to use, copy, modify, distribute and sell this
 * software for any purpose is hereby
 * granted without fee, provided that the above copyright notice
 * appear in all copies and that both that copyright notice and
 * this permission notice appear in supporting documentation.
 * Mark Joshi makes no representations about the
 * suitability of this software for any purpose. It is provided
 * "as is" without express or implied warranty.
*/

