//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_ABSTRACTFACTORY_H
#define DESIGNPATTERN_ABSTRACTFACTORY_H

#include "common.h"

namespace design{
    class ProductA{
    public:
        virtual string str(){
            return typeid(*this).name();
        }
    };
    class ProductA1: public ProductA{

    };
    class ProductA2: public ProductA{

    };

    class ProductB{
    public:
        virtual string str(){
            return typeid(*this).name();
        }
    };
    class ProductB1: public ProductB{

    };
    class ProductB2: public ProductB{

    };

    class AbstractFactory{
    public:
        virtual ProductA* CreateA(){
            return new ProductA();
        }
        virtual ProductB* CreateB(){
            return new ProductB();
        };
    };

    class AbstractFactory1: public AbstractFactory{
    public:
        virtual ProductA* CreateA(){
            return new ProductA1();
        }
        virtual ProductB* CreateB(){
            return new ProductB1();
        }
    };

    class AbstractFactory2: public AbstractFactory{
    public:
        virtual ProductA* CreateA(){
            return new ProductA2();
        }
        virtual ProductB* CreateB(){
            return new ProductB2();
        }
    };
}

#endif //DESIGNPATTERN_ABSTRACTFACTORY_H
