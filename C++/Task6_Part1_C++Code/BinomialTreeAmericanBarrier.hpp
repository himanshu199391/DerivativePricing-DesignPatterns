//
//  BinomialTreeAmericanBarrier.hpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#ifndef BinomialTreeAmericanBarrier_hpp
#define BinomialTreeAmericanBarrier_hpp

#include <stdio.h>
#include <vector>
#include "Parameters.hpp"
#include "TreeProducts.hpp"
#include "Arrays.hpp"


struct PayOffStructure{
    
    double stock_price;
    double payoff;
    
};

class BinomialTreeAmericanBarrier
{
    
public:
    BinomialTreeAmericanBarrier(double Spot_,
                                const Parameters& r_,
                                const Parameters& d_,
                                double Volatility_,
                                unsigned long Steps,
                                double Time);
    
    
    double GetThePrice(const TreeProduct& TheProduct);
    
protected:
    
    void BuildTree();
    
private:
    
    double Spot;
    Parameters r;
    Parameters d;
    double Volatility;
    unsigned long Steps;
    double Time;
    bool TreeBuilt;
    
    std::vector<std::vector<PayOffStructure > > TheTree;
    MJArray Discounts;
};

#endif /* BinomialTreeAmericanBarrier_hpp */
