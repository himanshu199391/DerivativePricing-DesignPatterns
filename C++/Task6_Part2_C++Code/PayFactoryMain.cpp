//
//  main.cpp
//  ch10_factory_pattern
//
//  Created by cheerzzh on 24/6/14.
//  Copyright (c) 2014年 Jared Zhou. All rights reserved.
//

/* Uses
 PayOff3.cpp
 PayOffBridge.cpp
 PayOffFactory.cpp
 PayOffRegistration.cpp
 */


#include "PayOff3.h"
#include "PayOffConstructible.h"
#include "PayOffBridge.h"
#include "PayOffFactory.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    
    
    double Strike;
    std::string name;
    
    cout << "Enter strike\n";
    cin >> Strike;
    
    cout << "\npay-off name\n";
    cin >> name;
    MJArray args1(2); args1[0] = .9 * Strike; args1[1] = 1.1 * Strike;
    
    string doubleDigital("double digital");

    PayOff* PayOffPtr = PayOffFactory::Instance().CreatePayOff(doubleDigital, args1);

    
    if (PayOffPtr != NULL)
    {
        double Spot;
        cout << "\nspot\n";
        cin >> Spot;
        
        cout << "\n" << PayOffPtr->operator ()(Spot) << "\n";
        delete PayOffPtr;
    }
    
    double tmp;
    cin >> tmp;
    
    return 0;
}
