//
// Created by feng on 12/25/15.
//

#include "Proxy.h"


int main(){
    auto p = new design::Proxy();
    p->print();
    delete p;
    return 1;
}