//
//  FuncToEval.hpp
//  ch9_Solvers_templates_and_implied_volatilities
//
//  Created by HIMANSHU KUMAR on 12/16/18.
//  Copyright © 2018 Jared Zhou. All rights reserved.
//

#ifndef FuncToEval_hpp
#define FuncToEval_hpp

#include <stdio.h>
class FuncToEval{
    
public:
    FuncToEval();
    virtual ~FuncToEval(){}
    virtual double operator()(double x) const = 0;
    
protected:
    double x;
};


class Func1: public FuncToEval{
    
public:
    Func1(){};
    virtual ~Func1(){};
    virtual double operator()(double x) const;
private:
    
};

class Func2 : public FuncToEval{
    
public:
    Func2(){};
    virtual ~Func2(){};
    virtual double operator()(double x) const;
private:
    
};

#endif /* FuncToEval_hpp */
