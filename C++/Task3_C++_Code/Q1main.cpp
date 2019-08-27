//
//  main.cpp
//  HW-4_Q-1
//
//  Created by HIMANSHU KUMAR on 31/10/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    clock_t start;
    double duration;
    int i, n, p;
    double * pointer;
    
    start = clock();
    n = 0;
    p = 10;
    
    while (n<10000){
        
        pointer = new double[p];
        delete[] pointer;
        n++;
        
    }
    
    duration = (clock() - start) / (double)CLOCKS_PER_SEC;
    
    cout << "duration: " << duration << '\n';
    
    
    
    return 0;
}
