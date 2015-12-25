//
// Created by feng on 12/25/15.
//

#include "Bridge.h"

int main(){
    auto pa = new design::ImplementA();
    auto pb = new design::ImplementB();
    auto p = new design::BridgeFunc(pa);
    p->myprint();
    auto p2 = new design::BridgeFuncA(pb);
    p2->myprint();
    delete p, p2, pa,pb;

    return 1;
}