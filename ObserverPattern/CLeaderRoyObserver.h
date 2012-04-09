//
//  CLeaderRoyObserver.h
//  ObserverPattern
//
//  Created by Gun Li on 4/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//   观察者roy

#ifndef ObserverPattern_CLeaderRoyObserver_h
#define ObserverPattern_CLeaderRoyObserver_h
#include "IObserver.h"

class CLeaderRoyObserver : public IObserver{
public:
    CLeaderRoyObserver(std::string name)
    {
        m_name = name;
    }
    ~CLeaderRoyObserver(){};
    void update(std::string context);
    std::string getName();
};

#endif
