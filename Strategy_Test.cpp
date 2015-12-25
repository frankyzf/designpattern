//
// Created by feng on 12/25/15.
//

#include "Strategy.h"

int main(){
    auto p = new design::Context();
    auto ps1 = new design::Strategy();
    auto ps2 = new design::Strategy2();
    p->addnum(1);
    p->addnum(2);
    p->SetStrategy(ps1);
    cout << p->GetSum() << endl;
    p->SetStrategy(ps2);
    cout << p->GetSum() << endl;
    return 1;
}