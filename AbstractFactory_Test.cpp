//
// Created by feng on 12/25/15.
//

#include "AbstractFactory.h"

int main(){
    auto pf = new design::AbstractFactory();
    auto pa = pf->CreateA();
    auto pb = pf->CreateB();
    cout << pa->str() << ", " << pb->str() << endl;
    delete pf, pa, pb;

    pf = new design::AbstractFactory1();
    pa = pf->CreateA();
    pb = pf->CreateB();
    cout << pa->str() << ", " << pb->str() << endl;
    delete pf, pa, pb;

    pf = new design::AbstractFactory2();
    pa = pf->CreateA();
    pb = pf->CreateB();
    cout << pa->str() << ", " << pb->str() << endl;
    delete pf, pa, pb;

    return  1;
}