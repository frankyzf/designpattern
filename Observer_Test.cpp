//
// Created by feng on 12/25/15.
//

#include "Observer.h"

int main(){
    auto p = new design::Observer();
    auto pt = new design::Target();
    pt->AddObserver(p);
    pt->ChangeState();

    delete p , pt;
    return 1;
}