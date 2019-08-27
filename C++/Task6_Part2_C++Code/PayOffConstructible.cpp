//
//  PayOffConstructible.cpp
//  ch10_factory_pattern
//
//  Created by cheerzzh on 24/6/14.
//  Copyright (c) 2014年 Jared Zhou. All rights reserved.
//

#include "PayOffConstructible.h"

namespace {
    PayOffHelper<PayOffCall> RegisterCall("call");
    PayOffHelper<PayOffPut> RegisterPut("put");
    PayOffHelper<PayOffDoubleDigital> RegisterDoubleDigital("double digital");
}


