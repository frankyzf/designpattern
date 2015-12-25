//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_DECORATOR_H
#define DESIGNPATTERN_DECORATOR_H

#include "common.h"
namespace design{
    class component{
    public:
        virtual void print(){
            cout << typeid(*this).name() << endl;
        }
    };
    class decorator: public component{
    public:
        virtual void print(){
            addBehavior();
            component::print();
        }
        virtual void addBehavior(){
            cout << __func__ << typeid(*this).name() << endl;
        }
    };
    class concreteDecoratorA: public decorator {
    };
    class concreteDecoratorB: public decorator {
    };

}
#endif //DESIGNPATTERN_DECORATOR_H
