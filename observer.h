#ifndef OBSERVER_H
#define OBSERVER_H
#include<iostream>

using namespace std;

class Observer
{
    public:
        Observer();
        virtual ~Observer();
        virtual void Update() = 0;
    protected:

    private:
};

#endif // OBSERVER_H


//Observer.cpp
#include "Observer.h"

Observer::Observer()
{
    //ctor
}

Observer::~Observer()
{
    //dtor
}

void Observer::Update(){
    cout << "test" << endl;
}
