//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_FLYWEIGHT_H
#define DESIGNPATTERN_FLYWEIGHT_H

#include "common.h"
namespace  design{
    class Product{
    public:
        string str(){
            return typeid(*this).name();
        }
    };
    class ProductA:public Product{

    };
    class ProductB:public Product{

    };
    class ProductC:public Product{

    };
    class FlyWeight{
    private:
        static map<string, Product*> mm;
    public:
        static Product* GetInstance(const string& name){
            auto p = mm[name];
            if(p == nullptr){
                mm[name] = Create(name);
            }
            return mm[name];
        }
        static Product* Create(const string& name){
            if(name == "ProductA")
                return new ProductA();
            else if (name == "ProductB")
                return new ProductB();
            else if (name == "ProductC")
                return new ProductC();
            else
                return nullptr;
        }
    };
}

#endif //DESIGNPATTERN_FLYWEIGHT_H
