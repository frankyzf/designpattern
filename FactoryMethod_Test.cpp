//
// Created by feng on 12/25/15.
//

#include "FactoryMethod.h"

int  main(){
    auto p = design::FactoryMethod().Create();
    cout << p->str() << endl;
    delete p;
    p = design::FactoryMethodA().Create();
    cout << p->str() << endl;
    delete p;
    p = design::FactoryMethodB().Create();
    cout << p->str() << endl;
    delete p;
    return 1;
}