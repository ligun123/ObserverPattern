//
//  IObservable.h
//  ObserverPattern
//
//  Created by Gun Li on 4/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ObserverPattern_IObservable_h
#define ObserverPattern_IObservable_h
#include "IObserver.h"

class IObservable {
public:
    IObservable(){}
    
    virtual ~IObservable(){}
    
    //actions
    virtual void addObserver(IObserver *pObserver) = 0;
    virtual void deleteObserver(IObserver *pObserver) = 0;
    virtual void notifyObservers(std::string context) = 0;
};

#endif
