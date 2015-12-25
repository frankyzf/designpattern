//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_ADPTER_H
#define DESIGNPATTERN_ADPTER_H

#include "common.h"
namespace  design{
    class Adaptee {
    public:
        virtual string str(){
            return typeid(*this).name();
        }
    };
    class Target{
    public:
        virtual string print()= 0;
    };

    class Adapter : public Target {
    private:
        Adaptee* p = nullptr;
    public:
        Adapter(Adaptee* p):p(p){}
        string print() {
            return p->str();
        }
    };
}

#endif //DESIGNPATTERN_ADPTER_H
