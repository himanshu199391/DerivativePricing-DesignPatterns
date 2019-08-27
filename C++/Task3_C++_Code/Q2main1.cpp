//
//  main.cpp
//  Hw-4-Q2
//
//  Created by HIMANSHU KUMAR on 31/10/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#include <iostream>
#include <memory>
using namespace std;


class First
{
public:
    First(First& p);
    
    First(auto_ptr<int> x);
    void print(){
        cout<<*pimpl_;
    }
    auto_ptr<int> pimpl_;
};
First::First(auto_ptr<int> p)
{pimpl_ = p;
}
First::First(First& p)
{pimpl_ = p.pimpl_;
}



int main(int argc, const char * argv[]) {
    int x=9;
    int* a ;
    a=&x;
    
    auto_ptr<int> p3(a);
    First p1(p3);
    First p2(p1);
    //p1.print(); this will give null because p1 has only one auto_ptr which gave its control to p2
    p2.print();
    
    
    
    return 0;
}
