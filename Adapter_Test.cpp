//
// Created by feng on 12/25/15.
//

#include "Adapter.h"

int main(){
    design::Adaptee* p = new design::Adaptee();
    auto pt = new design::Adapter(p);
    cout << pt->print() << endl;
    delete pt;
    delete p;
    return 1;
}