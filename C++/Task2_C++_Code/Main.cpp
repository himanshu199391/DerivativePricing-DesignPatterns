
//
//  VanillaMain1.cpp
//  Homework_3
//
//  Created by HIMANSHU KUMAR on 21/10/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#include"SimpleMC2.h"
#include "DoubleDigital.h"
#include "PowerOption.h"
#include <iostream>

using namespace std;

int main()
{
    double Expiry;
    double Low, Up;
    double Spot;
    double Vol;
    double r;
    double Strike;
    unsigned long NumberOfPath;
    unsigned long Power;
    
    //read in parameters
    cout << "\nEnter expiry: \n";
    cin >> Expiry;
    
    cout << "\nEnter spot: \n";
    cin >> Spot;
    
    cout << "\nEnter vol: \n";
    cin >> Vol;
    
    cout << "\nEnter r: \n";
    cin >> r;
    
    cout << "\nEnter low barrier\n";
    cin >> Low;
    
    cout << "\nEnter up barrier\n";
    cin >> Up;
    
    cout << "\nPower: \n";
    cin >> Power;
    cout << "\nStrike: \n";
    cin >> Strike;


    cout << "\nNumber of paths: \n";
    cin >> NumberOfPath;
    
    
    PayOffDoubleDigital thePayOff(Low,Up); // prepare payoff object
    PowerCallOption theCallPayOff(Strike,Power);// prepare Call Power option object
    PowerPutOption thePutPayOff(Strike,Power); // prepare Call Power option object
    
    double CallPower = SimpleMonteCarlo2(theCallPayOff,
                                      Expiry,
                                      Spot,
                                      Vol,
                                      r,
                                      NumberOfPath);
    
    double PutPower = SimpleMonteCarlo2(thePutPayOff,
                                         Expiry,
                                         Spot,
                                         Vol,
                                         r,
                                         NumberOfPath);
    
    
    double result = SimpleMonteCarlo2(thePayOff,
                                         Expiry,
                                         Spot,
                                         Vol,
                                         r,
                                         NumberOfPath);
    
    
    cout << "\n the price for double digital with low barrier = "<<Low << " and up barrier = "<<Up<<" is "<< result<<"\n";
    cout << "\n the price for Power Call with Strike = "<<Strike << " and Power = "<< Power<<" is "<< CallPower<<"\n";
    cout << "\n the price for Power Put with Strike = "<<Strike << " and Power = "<< Power<<" is "<< PutPower<<"\n";
    
    double temp;
    cin >> temp;
    
    return 0;
}




/*

Enter expiry:
1

Enter spot:
100

Enter vol:
0.2

Enter r:
0.05

Enter low barrier
100

Enter up barrier
120

Number of paths:
1000000

the price for double digital with low barrier = 100 and up barrier = 120 is 0.320139
 
 */

