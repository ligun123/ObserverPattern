//
//  CLeaderBossObserver.cpp
//  ObserverPattern
//
//  Created by Gun Li on 4/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "CLeaderBossObserver.h"

std::string CLeaderBossObserver::getName()
{
    return m_name;
}
void CLeaderBossObserver::update(std::string context)
{
    if (context == "eat") {
        printf("Leader Boss will cat ligun's gongzi.\n");
    }
    
    if (context == "rest") {
        printf("Leader Boss will fire ligun because he rest when work.\n");
    }
}