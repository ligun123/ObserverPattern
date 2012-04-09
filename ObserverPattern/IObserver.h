//
//  IObserver.h
//  ObserverPattern
//
//  Created by Gun Li on 4/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ObserverPattern_IObserver_h
#define ObserverPattern_IObserver_h
using namespace std;

class IObserver {
protected:
    string m_name;
public:
    IObserver(){
    }
    IObserver(string pName){
        m_name = pName;
    }
    virtual ~IObserver(){};
    
    virtual void update(string context) = 0;
    virtual string getName() = 0;
};

#endif
