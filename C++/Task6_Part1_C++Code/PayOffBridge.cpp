//
//  PayOffBridge.cpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#include "PayOffBridge.hpp"


PayOffBridge::PayOffBridge() :ThePayOffPtr(nullptr)
{}

PayOffBridge::PayOffBridge(const PayOffBridge& original)
{
    if (original.ThePayOffPtr == nullptr)
        ThePayOffPtr = nullptr;
    else
        ThePayOffPtr = original.ThePayOffPtr->clone();
}

PayOffBridge::PayOffBridge(const PayOff& innerPayOff)
{
    ThePayOffPtr = innerPayOff.clone();
}


PayOffBridge::~PayOffBridge()
{
    delete ThePayOffPtr;
}

PayOffBridge& PayOffBridge::operator=(const PayOffBridge& original)
{
    if (this != &original)
    {
        delete ThePayOffPtr;
        ThePayOffPtr = original.ThePayOffPtr->clone();
    }
    
    return *this;
}
