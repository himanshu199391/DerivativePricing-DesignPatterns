//
//  NumericalRule.hpp
//  ch9_Solvers_templates_and_implied_volatilities
//
//  Created by HIMANSHU KUMAR on 12/16/18.
//  Copyright © 2018 Jared Zhou. All rights reserved.
//

#ifndef NumericalRule_hpp
#define NumericalRule_hpp

#include <stdio.h>
//Trapezoidal rule
template<class T>
class Trapezium_rule
{
public:
    Trapezium_rule(double Low_, double High_, T& TheFunction_)
    :Low(Low_), High(High_), TheFunction(TheFunction_), Steps(0)
    {};
    
    double operator()(unsigned long Steps) const{
        double h=(double)((High-Low)/Steps);
        double i_trap=TheFunction(Low)/2.0 + TheFunction(High)/2.0;
        
        for(unsigned long i = 1;i <=Steps;++i){
            i_trap+=TheFunction(Low+(double)(i*h));
        };
        
        return i_trap*=h;
    };
    
private:
    T TheFunction;
    double Low;
    double High;
    unsigned long Steps;
};


#endif /* NumericalRule_hpp */
