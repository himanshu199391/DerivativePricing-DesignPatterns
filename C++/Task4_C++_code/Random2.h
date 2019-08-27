//
//
//                        Random2.h
//
//

//Modified version of random2.h to accommodate vector container
//Since C++11, Boost rngs part of std library, #include<random>

#ifndef RANDOM2_H
#define RANDOM2_H

#include "Arrays.h"
#include<vector>

using namespace std;

class RandomBase
{
public:
    
    RandomBase(unsigned long Dimensionality);
    RandomBase(){}
    
    virtual ~RandomBase(){}
    
    inline unsigned long GetDimensionality() const;
    
    virtual RandomBase* clone() const=0;
    
    virtual void Skip(unsigned long numberOfPaths)=0;
    virtual void SetSeed(unsigned long Seed) =0;
    virtual void Reset()=0;
    
    virtual void ResetDimensionality(unsigned long NewDimensionality);
    
    virtual void GetUniforms(MJArray& variates)=0;
    virtual void GetUniforms(vector<double>& variates);
    
    virtual void GetGaussians(MJArray& variates);
    virtual void GetGaussians(vector<double>& variates);
    
private:
    unsigned long Dimensionality;
    
};

unsigned long RandomBase::GetDimensionality() const
{
    return Dimensionality;
}
#endif
