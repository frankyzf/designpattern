//
// Created by feng on 12/25/15.
//

#include "Singleton.h"
design::singleton* design::singleton::pinstance = nullptr;

int main(){
    auto p = design::singleton::Instance();
    cout << p->str() << endl;
    cout << p << endl;
    auto p1 = design::singleton::Instance();
    cout << p1 << endl;

    return 1;
}

