//
//  main1.cpp
//  Hw-4-Q2
//
//  Created by HIMANSHU KUMAR on 31/10/18.
//  Copyright © 2018 HIMANSHU KUMAR. All rights reserved.
//

#include <stdio.h>
#include <memory>
// file c.h
//
class C
{
public:
    C();
    /*...*/
private:
    class Simple; // forward declaration
    std::auto_ptr<Simple> pimpl_;
};

// file c.cpp
//
class C::Simple { /*...*/ };

C::C() : pimpl_( new Simple ) { }

//Now the destructor doesn't need to worry about deleting the pimpl_ pointer, because the auto_ptr will handle it automatically.
