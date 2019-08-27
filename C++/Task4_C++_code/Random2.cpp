//
//  Random2.cpp
//  ch6_random_number_class
//
//  Created by cheerzzh on 19/6/14.
//  Copyright (c) 2014年 Jared Zhou. All rights reserved.
//

#include "Random2.h"
#include "Normals.h"
#include <cstdlib>

// the basic math functions should be in namespace std but aren't in VCPP6
#if !defined(_MSC_VER)
using namespace std;
#endif


void RandomBase::GetUniforms(vector<double>& variates)
{
    MJArray _variates(variates.size());
    
    for (unsigned long i(0); i < _variates.size(); ++i)
        _variates[i] = variates[i];
    
    GetUniforms(_variates);
    
    for (unsigned long i(0); i < _variates.size(); ++i)
        variates[i] = _variates[i];
}

void RandomBase::GetGaussians(MJArray& variates)
{
    GetUniforms(variates);
    
    for (unsigned long i=0; i < Dimensionality; i++)
    {
        double x = variates[i];
        variates[i] = InverseCumulativeNormal(x);
    }
}

void RandomBase::GetGaussians(vector<double>& variates)
{
    MJArray _variates(variates.size());
    
    for (unsigned long i(0); i < _variates.size(); ++i)
        _variates[i] = variates[i];
    
    GetGaussians(_variates);
    
    for (unsigned long i(0); i < _variates.size(); ++i)
        variates[i] = _variates[i];
}

void RandomBase::ResetDimensionality(unsigned long NewDimensionality)
{
    Dimensionality = NewDimensionality;
}

RandomBase::RandomBase(unsigned long Dimensionality_)
: Dimensionality(Dimensionality_)
{
}

