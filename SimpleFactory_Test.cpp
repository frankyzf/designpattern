//
// Created by feng on 12/25/15.
//
#include "common.h"
#include "SimpleFactory.h"

int main(){
    auto p = design::SimpleFactory::Create("ProductA");
    cout << p->str() << endl;
    p = design::SimpleFactory::Create("ProductB");
    cout << p->str() << endl;
    p = design::SimpleFactory::Create("dummy");
    cout << p->str() << endl;
}
