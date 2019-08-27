//
//  Arrays.hpp
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#ifndef Arrays_hpp
#define Arrays_hpp

#include <stdio.h>
#ifdef USE_VAL_ARRAY

#include <valarray>

typedef  std::valarray<double> MJArray;

#else   // ifdef USE_VAL_ARRAY


class MJArray
{
    
public:
    
    explicit MJArray(unsigned long size=0);
    MJArray(const MJArray& original);
    
    ~MJArray();
    
    MJArray& operator=(const MJArray& original);
    MJArray& operator=(const double& val);
    
    MJArray& operator+=(const MJArray& operand);
    MJArray& operator-=(const MJArray& operand);
    MJArray& operator/=(const MJArray& operand);
    MJArray& operator*=(const MJArray& operand);
    
    MJArray& operator+=(const double& operand);
    MJArray& operator-=(const double& operand);
    MJArray& operator/=(const double& operand);
    MJArray& operator*=(const double& operand);
    
    MJArray apply(double f(double)) const;
    void print() const;
    
    inline double operator[](unsigned long i) const;
    inline double& operator[](unsigned long i);
    
    inline unsigned long size() const;
    
    void resize(unsigned long newSize);
    
    double sum() const;
    double min() const;
    double max() const;
    
    //exercise 7.5
    MJArray merge(const MJArray& array);
    
    void remove_duplicate();
    
private:
    
    
    double* ValuesPtr;
    double* EndPtr;
    
    
    unsigned long Size;
    unsigned long Capacity;
    
    
};

inline double MJArray::operator[](unsigned long i) const
{
#ifdef RANGE_CHECKING
    if (i >= Size)
    {
        throw("Index out of bounds");
    }
#endif
    
    return ValuesPtr[i];
}


inline double& MJArray::operator[](unsigned long i)
{
#ifdef  RANGE_CHECKING
    if (i >= Size)
    {
        throw("Index out of bounds");
    }
#endif
    
    return ValuesPtr[i];
}

inline unsigned long MJArray::size() const
{
    return Size;
}



#endif // ifdef USE_VAL_ARRAY

#endif // ifndef MJARRAYS_H

