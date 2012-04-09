//
//  main.cpp
//  ObserverPattern
//
//  Created by Gun Li on 4/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "CLiGunObservable.h"
#include "CLeaderRoyObserver.h"
#include "CLeaderBossObserver.h"
#include "IObserver.h"

int main(int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    CLiGunObservable *ligun = new CLiGunObservable;
    IObserver *observer1 = new CLeaderBossObserver("boss");
    IObserver *observer2 = new CLeaderRoyObserver("roy");
    ligun->addObserver(observer1);
    ligun->addObserver(observer2);
    ligun->eatSthWhenWork();
    ligun->haveRestWhenWork();
    printf("now ligun is fired.So remove the two observer.\n");
    ligun->deleteObserver(observer1);
    ligun->deleteObserver(observer2);
    delete observer1;
    delete observer2;
    delete ligun;
    
    return 0;
}

