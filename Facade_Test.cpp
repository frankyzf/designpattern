//
// Created by feng on 12/25/15.
//

#include "Facade.h"

int main(){
    auto pa = new design::SystemA();
    auto pb = new design::SystemB();
    auto pc = new design::SystemC();
    auto p = new design::Facade(pa, pb, pc);
    p->perform();
    delete p, pa, pb, pc;
    return 1;
}