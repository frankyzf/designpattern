//
// Created by feng on 12/25/15.
//

#include "State.h"

int main(){
    auto p = new design::Context();
    auto ps = new design::StateA(p);
    p->SetState(ps);
    p->ChangeState();
    p->ChangeState();
    delete p;

    return 1;
}