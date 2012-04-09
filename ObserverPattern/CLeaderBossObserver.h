//
//  CLeaderBossObserver.h
//  ObserverPattern
//
//  Created by Gun Li on 4/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//  观察者boss

#ifndef ObserverPattern_CLeaderBossObserver_h
#define ObserverPattern_CLeaderBossObserver_h
#include "IObserver.h"

class CLeaderBossObserver : public IObserver{
public:
    CLeaderBossObserver(std::string name)
    {
        m_name = name;
    }
    ~CLeaderBossObserver(){};
    std::string getName();
    void update(std::string context);
};

#endif
