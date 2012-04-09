//
//  CLiGunObservable.cpp
//  ObserverPattern
//
//  Created by Gun Li on 4/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "CLiGunObservable.h"
using namespace std;

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
            printf("delete observer : %s\n",name.data());
        }
        it ++;
    }
}

void CLiGunObservable::notifyObservers(string context)
{
    ObserverList_C_iterator t = m_observerList.begin();
    while (t != m_observerList.end()) {
        (*t)->update(context);
        t++;
    }
}

void CLiGunObservable::haveRestWhenWork()
{
    printf("Ligun is having rest when work\n");
    notifyObservers("rest");
}

void CLiGunObservable::eatSthWhenWork()
{
    printf("Ligun is eating sth when work\n");
    notifyObservers("eat");
}