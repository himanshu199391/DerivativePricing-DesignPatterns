//
//  NumericalIntegration.hpp
//  ch9_Solvers_templates_and_implied_volatilities
//
//  Created by HIMANSHU KUMAR on 12/16/18.
//  Copyright © 2018 Jared Zhou. All rights reserved.
//

#ifndef NumericalIntegration_hpp
#define NumericalIntegration_hpp

#include <stdio.h>
#include<cmath>


//code for computing an approximate value of an integral with given tolerance
template<
template<class> class T1,
class T2
>
double Numerical_integration( double Tolerance,
                             unsigned long Steps,
                             T1<T2>& TheNumericalRule)
{
    
    double i_old = TheNumericalRule(Steps);
    Steps*=2;
    double i_new = TheNumericalRule(Steps);
    
    do
    {
        i_old = i_new;
        Steps*=2;
        i_new =  TheNumericalRule(Steps);
    }
    while
        ( (fabs(i_new-i_old) > Tolerance) );
    
    return i_new;
}
#endif /* NumericalIntegration_hpp */
