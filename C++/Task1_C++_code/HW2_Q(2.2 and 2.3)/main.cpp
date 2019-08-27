//
//  main.cpp
//  Payoff_class_with_inheritance
//
//  Created by cheerzzh on 23/5/14.
//  Copyright (c) 2014年 Jared Zhou. All rights reserved.
//

#include"SimpleMC2.h"
#include <chrono>
#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int main()
{
    
    clock_t start1,end1;
    start1=clock();
    
    double Expiry;
    double Strike;
    double Spot;
    double Vol;
    double r;
    double Strike_Low, Strike_Up;
    unsigned long NumberOfPath;
    
    //read in parameters
    cout << "\nEnter expiry: \n";
    cin >> Expiry;
    
    cout << "\nEnter Strike: \n";
    cin >> Strike;
    
    cout << "\nEnter spot: \n";
    cin >> Spot;
    
    cout << "\nEnter vol: \n";
    cin >> Vol;
    
    cout << "\nEnter r: \n";
    cin >> r;
    
    cout << "\nEnter low barrier\n";
    cin >> Strike_Low;
    
    cout << "\nEnter up barrier\n";
    cin >> Strike_Up;
    
    cout << "\nNumber of paths: \n";
    cin >> NumberOfPath;
    
    PayOff callPayOff(Strike, PayOff::call);//PayOff object
    PayOff putPayOff(Strike, PayOff::put);
    PayOff doubleDigitalPayoff(Strike_Low, Strike_Up, PayOff::double_digital); // Payoff Object for Double Digital
    
    double resultCall = SimpleMonteCarlo2(callPayOff,
                                          Expiry,
                                          Spot,
                                          Vol,
                                          r,
                                          NumberOfPath);
    
    double resultput = SimpleMonteCarlo2(putPayOff,
                                         Expiry,
                                         Spot,
                                         Vol,
                                         r,
                                         NumberOfPath);
    
    double resultDouble = SimpleMonteCarlo2(doubleDigitalPayoff,  
                                           Expiry,
                                           Spot,
                                           Vol,
                                           r,
                                           NumberOfPath);
    
    cout <<"\nthe price are "<< resultCall<<" for the call and \n"<<resultput<<" for the put\n";
    
    cout << "\n the price for double digital with low barrier = "<<Strike_Low << " and up barrier = "<<Strike_Up<<" is "<< resultDouble<<"\n";
    
    
    end1 = clock();
    cout<<"Elapsed time-clock :"<< (double)(end1-start1)/ CLOCKS_PER_SEC<<"\n";
    
    return 0;
}


