//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_FACTORYMETHOD_H
#define DESIGNPATTERN_FACTORYMETHOD_H

#include "common.h"

namespace design{
    class Product{
    public:
        virtual string str(){
            return typeid(*this).name();
        }
    };
    class ProductA: public Product{

    };
    class ProductB: public Product{

    };

    class FactoryMethod {
    public:
        virtual Product* Create(){
            return new Product();
        }
    };

    class FactoryMethodA: public FactoryMethod{
    public:
        virtual Product* Create(){
            return new ProductA();
        }
    };

    class FactoryMethodB: public FactoryMethod{
    public:
        virtual Product* Create(){
            return new ProductB();
        }
    };
}

#endif //DESIGNPATTERN_FACTORYMETHOD_H
