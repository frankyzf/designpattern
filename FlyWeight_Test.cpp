//
// Created by feng on 12/25/15.
//

#include "FlyWeight.h"
map<string, design::Product*> design::FlyWeight::mm;

int main(){
    auto p = design::FlyWeight::GetInstance("ProductA");
    cout << p->str() << endl;
    p =  design::FlyWeight::GetInstance("ProductB");
    cout << p->str() << endl;
    auto p1  = design::FlyWeight::GetInstance("ProductB");
    cout << p1->str() << endl;
    cout << "p:" << p << endl;
    cout << "p1:" << p1 << endl;

    return 1;
}