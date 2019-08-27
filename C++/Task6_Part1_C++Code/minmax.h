//
//  minmax.h
//  Homework8
//
//  Created by HIMANSHU KUMAR on 12/13/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#ifndef minmax_h
#define minmax_h

template<class T> const T& max(const T& a, const T& b)
{
    return (a<b) ? b : a;
}


template<class T> const T& min(const T& a, const T& b)
{
    return (a>b) ? b : a;
}

#endif /* minmax_h */
