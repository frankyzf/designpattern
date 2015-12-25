//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_BRIDGE_H
#define DESIGNPATTERN_BRIDGE_H

#include "common.h"
namespace design{
    class Implement{
    public:
        virtual void print(){
            cout << typeid(*this).name() << endl;
        }
    };
    class ImplementA: public Implement{

    };
    class ImplementB: public Implement{

    };
    class BridgeFunc{
    private:
        Implement* p;
    public:
        BridgeFunc(Implement* p):p(p){}
        virtual void myprint(){
            cout << typeid(*this).name() << endl;
            p->print();
        }
    };
    class BridgeFuncA: public BridgeFunc{
    public:
        BridgeFuncA(Implement* p):BridgeFunc(p){}
    };
}
#endif //DESIGNPATTERN_BRIDGE_H
