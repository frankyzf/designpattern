//
// Created by feng on 12/25/15.
//

#include "Decorator.h"

int main(){
    auto p1 = new design::concreteDecoratorA();
    auto p2 = new design::concreteDecoratorB();
    p1->print();
    p2->print();
    delete p1, p2;
    return 1;
}