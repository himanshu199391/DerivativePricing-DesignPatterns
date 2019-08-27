//
//  main.cpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#include <iostream>
#include <vector>

//using namespace std;



using namespace std;
#include <cmath>

#include "TreeAmerican.hpp"

#include "BarrierOption.hpp"
#include "TreeBarrier.hpp"
#include "TreeAmericanBarrier.hpp"

#include "BinomialTreeAmericanBarrier.hpp"


int main()
{
    
    double Expiry;
    double Strike(100.0);
    
    double Barrier(100.0);
    
    double Spot(90.0);
    double Vol;
    double r;
    double d;
    double Rebate;
    unsigned long Steps;
    
    cout<<"ATM KI options with 15% barrier from strike"<<endl;
    
    cout<<"\nEnter expiry\n";
    cin>>Expiry;
    
    cout << "\nEnter vol\n";
    cin >> Vol;
    
    cout << "\nEnter Rebate\n";
    cin >> Rebate;
    
    
    
    cout << "\nr\n";
    cin >> r;
    
    cout << "\nd\n";
    cin >> d;
    
    cout << "\nNumber of steps\n";
    cin >> Steps;
    cout << endl;
    
    
    
    
    PayOffKICall thePayOffKICall(Barrier*1.15, Strike, Rebate);
    PayOffKIPut thePayOffKIPut(Barrier*.85, Strike ,Rebate);
    
    ParametersConstant rParam(r);
    ParametersConstant dParam(d);
    
    //pricing american ki options
    TreeAmericanBarrier americanKICall(Expiry, thePayOffKICall);
    TreeAmericanBarrier americanKIPut(Expiry, thePayOffKIPut);
    
    BinomialTreeAmericanBarrier theTree(Spot, rParam, dParam, Vol, Steps, Expiry);
    
    double americanKICall1 = theTree.GetThePrice(americanKICall);
    
    double americanKIPut1 = theTree.GetThePrice(americanKIPut);
    
    cout << "Binomial tree pricing:" << endl;
    cout << "American KI call " << americanKICall1 << endl;
    cout << "American KI put " << americanKIPut1 << endl;
    cout << endl;
    
    
    
    
    double tmp;
    cin >> tmp;
    
    return 0;
}
