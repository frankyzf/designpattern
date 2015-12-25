//
// Created by feng on 12/25/15.
//

#include "FactoryMethod.h"

int  main(){
    auto pfactory = new design::FactoryMethod();
    auto p = pfactory->Create();
    cout << p->str() << endl;
    delete pfactory;
    delete p;
    pfactory = new design::FactoryMethodA();
    p = pfactory->Create();
    cout << p->str() << endl;
    delete pfactory;
    delete p;
    pfactory = new design::FactoryMethodB();
    p = pfactory->Create();
    cout << p->str() << endl;
    delete pfactory;
    delete p;
    return 1;
}