//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_SIMPLEFACTORYPATTERN_H
#define DESIGNPATTERN_SIMPLEFACTORYPATTERN_H
#include "common.h"

namespace design{
    class Product{
    public:
        virtual string str() {
            return typeid(*this).name();
        }
    };

    class ConcreteProductA:public Product{
    public:
        virtual string str(){
            return typeid(*this).name();
        }
    };
    class ConcreteProductB: public Product{

    };


    class SimpleFactory{
    public:
        static Product* Create(const string& name){
            if(name == "ProductA"){
                return new ConcreteProductA();
            }
            else if (name == "ProductB"){
                return  new ConcreteProductB();
            }
            else{
                return new Product();
            }
        }

    };
}
#endif //DESIGNPATTERN_SIMPLEFACTORYPATTERN_H
