//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_FACADE_H
#define DESIGNPATTERN_FACADE_H

#include "common.h"
namespace  design{
    class SystemA {
    public:
        void performA(){
            cout << typeid(*this).name() << ":" << __func__ << endl;
        }
    };
    class SystemB {
    public:
        void performB(){
            cout << typeid(*this).name() << ":" << __func__ << endl;
        }
    };
    class SystemC {
    public:
        void performC(){
            cout << typeid(*this).name() << ":" << __func__ << endl;
        }
    };

    class Facade{
        SystemA* pa;
        SystemB* pb;
        SystemC* pc;
    public:
        Facade(SystemA* pa, SystemB* pb, SystemC* pc):
        pa(pa), pb(pb), pc(pc){}
        void perform(){
            pa->performA();
            pb->performB();
            pc->performC();
        }
    };
}
#endif //DESIGNPATTERN_FACADE_H
