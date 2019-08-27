//
//  FuncToEval.cpp
//  ch9_Solvers_templates_and_implied_volatilities
//
//  Created by HIMANSHU KUMAR on 12/16/18.
//  Copyright © 2018 Jared Zhou. All rights reserved.
//

#include "FuncToEval.hpp"
#include<cmath>

using namespace std;

FuncToEval::FuncToEval(){}

//example of numerical integration, Dan Stefanica

double Func1::operator()(double x) const
{
    return 1.0/((x + 1.0) * (x + 1.0));
}

double Func2::operator()(double x) const
{
    return exp(-(x *x));
}
