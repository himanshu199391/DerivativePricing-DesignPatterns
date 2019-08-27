//
//  PowerOption.cpp
//  Homework_3
//
//  Created by HIMANSHU KUMAR on 21/10/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#include <stdio.h>
#include"PowerOption.h"
#include<math.h>

PowerCallOption::PowerCallOption(double Strike_, unsigned long Power_): Strike(Strike_),Power(Power_){

}

double PowerCallOption::operator()(double Spot) const
{
    
    return std::max(pow(Spot,Power) - Strike,0.0);
}


PowerPutOption::PowerPutOption(double Strike_, unsigned long Power_): Strike(Strike_),Power(Power_){
    
}

double PowerPutOption::operator()(double Spot) const
{
    
    return std::max(Strike - pow(Spot,Power),0.0);
}
