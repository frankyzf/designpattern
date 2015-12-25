//
// Created by feng on 12/25/15.
//

#include "Mediator.h"

int main(){
    auto pm = new design::Mediator();
    auto p1 = new design::ColledgeA();
    auto p2 = new design::ColledgeB();
    pm->Register("1", p1);
    pm->Register("2", p2);
    p1->Send("2", "mymsg");
    return 1;
}