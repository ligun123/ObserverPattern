//
//  CLiGunObservable.h
//  ObserverPattern
//
//  Created by Gun Li on 4/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//  被观察者-LiGun

#ifndef ObserverPattern_CLiGunObservable_h
#define ObserverPattern_CLiGunObservable_h
#include "IObservable.h"
#include <vector>
using namespace std;

typedef vector<IObserver*>::const_iterator ObserverList_C_iterator;

class CLiGunObservable : public IObservable {
private:
    vector<IObserver*> m_observerList;
    
public:
    //member functions
    CLiGunObservable();
    ~CLiGunObservable();
    void addObserver(IObserver *pObserver);
    void deleteObserver(IObserver *pObserver);
    void notifyObservers(std::string context);
};


#endif
