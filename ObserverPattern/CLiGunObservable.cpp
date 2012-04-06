//
//  CLiGunObservable.cpp
//  ObserverPattern
//
//  Created by Gun Li on 4/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "CLiGunObservable.h"

CLiGunObservable::CLiGunObservable()
{}

CLiGunObservable::~CLiGunObservable()
{}

void CLiGunObservable::addObserver(IObserver *pObserver)
{
    m_observerList.push_back(pObserver);
}

void CLiGunObservable::deleteObserver(IObserver *pObserver)
{
    ObserverList_C_iterator it = m_observerList.begin();
    while (it != m_observerList.end()) {
        string name = (*it)->getName();
        if (name.compare(pObserver->getName()) == 0) {
            //找到了，删除
        }
        it ++;
    }
}