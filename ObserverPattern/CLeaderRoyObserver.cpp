//
//  CLeaderRoyObserver.cpp
//  ObserverPattern
//
//  Created by Gun Li on 4/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "CLeaderRoyObserver.h"


void CLeaderRoyObserver::update(std::string context)
{
    if (context == "eat") {
        printf("Leader Roy kown ligun eating. He will eat the food witch Ligun eat.\n");
    }
    
    if (context == "rest") {
        printf("Leader roy know ligun have rest and He will have rest and Ligun must do work.\n");
    }
}
std::string CLeaderRoyObserver::getName()
{
    return m_name;
}