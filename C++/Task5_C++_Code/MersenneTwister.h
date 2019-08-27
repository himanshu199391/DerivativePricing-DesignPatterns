//
//  MersenneTwister.h
//  ch6_random_number_class
//
//  Created by HIMANSHU KUMAR on 11/22/18.
//  Copyright © 2018 Jared Zhou. All rights reserved.
//

#ifndef MersenneTwister_h
#define MersenneTwister_h

#include "Random2.h"

#include<random>
#include<vector>

using namespace std;

class MersenneTwister
{
public:
    MersenneTwister(unsigned long Seed = 12411);
    
    static unsigned long Max();
    static unsigned long Min();
    
    void SetSeed(unsigned long Seed);
    void Skip(unsigned long numberOfPaths);
    
    double GetOneUniform(double a = 0.0, double b = 1.0);
    double GetOneGaussian(double m = 0.0, double s = 1.0);
    double GetOneLogNormal(double m, double s);
    double GetOneExponential(double lambda);
    double GetOnePoisson(double lambda);
    double GetOneGamma(double alpha, double beta);
    double GetOneBeta(double alpha, double beta);
    
private:
    unsigned long Seed;
    static mt19937 generator; 
};

class RandomMersenneTwister : public RandomBase
{
public:
    
    RandomMersenneTwister(unsigned long Dimensionality, unsigned long Seed = 12411);
    
    virtual RandomBase* clone() const;
    
    virtual void Skip(unsigned long numberOfPaths);
    virtual void SetSeed(unsigned long Seed);
    virtual void Reset();
    virtual void ResetDimensionality(unsigned long NewDimensionality);
    
    virtual void GetUniforms(MJArray& variates);
    virtual void GetUniforms(vector<double>& variates, double a = 0.0, double b = 1.0);
    
    virtual void GetGaussians(MJArray& variates);
    virtual void GetGaussians(vector<double>& variates, double m = 0.0, double s = 1.0);
    
    virtual void GetLogNormals(double m, double s, vector<double>& variates);
    virtual void GetExponentials(double lambda, vector<double>& variates);
    virtual void GetPoissons(double lambda, vector<double>& variates);
    virtual void GetGammas(double alpha, double beta, vector<double>& variates);
    virtual void GetBetas(double alpha, double beta, vector<double>& variates);
    
private:
    MersenneTwister InnerGenerator;
    unsigned long InitialSeed;
};
#endif /* MersenneTwister_h */
