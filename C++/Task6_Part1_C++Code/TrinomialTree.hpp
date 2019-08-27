//
//  TrinomialTree.hpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/16/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#ifndef TrinomialTree_hpp
#define TrinomialTree_hpp

#include <stdio.h>

#pragma warning( disable : 4786 )


#include "TreeProducts.hpp"
#include <vector>
#include "Parameters.hpp"
#include "Arrays.hpp"

namespace MyTrinomialTree{ 
    
    class TrinomialTree
    {
        
    public:
        TrinomialTree(double Spot_,
                      const Parameters& r_,
                      const Parameters& d_,
                      double Volatility_,
                      unsigned long Steps,
                      double Time);
        
        
        double GetThePrice(const TreeProduct& TheProduct);
        
        
        
        void BuildTree();
        
    private:
        
        double Spot;
        Parameters r;
        Parameters d;
        double Volatility;
        unsigned long Steps;
        double Time;
        bool TreeBuilt;
        MJArray Discounts;
        double up;
        double down;
        double prob_up;
        double prob_no_move;
        double prob_down;
        
        std::vector<std::vector<std::pair<double, double> > > TheTree;
        
    };
    
    
}

#endif /* TrinomialTree_hpp */
