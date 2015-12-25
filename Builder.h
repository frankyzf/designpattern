//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_BUILDER_H
#define DESIGNPATTERN_BUILDER_H

#include "common.h"
namespace design{
    class ProductA{
    public:
        virtual string str() {
            return typeid(*this).name();
        }
    };
    class ProductA1: public ProductA{
    };
    class ProductA2: public ProductA{
    };

    class ProductB{
    public:
        virtual string str() {
            return typeid(*this).name();
        }
    };
    class ProductB1: public ProductB{
    };
    class ProductB2: public ProductB{
    };

    class Builder {
    public:
        virtual ProductA* CreateA() = 0;
        virtual ProductB* CreateB() = 0;
    };
    class Builder1: public Builder{
        virtual ProductA* CreateA() {
            return new ProductA1();
        }
        virtual ProductB* CreateB(){
            return new ProductB1();
        }
    };
    class Builder2: public Builder{
    public:
        virtual ProductA* CreateA(){
            return new ProductA2();
        }
        virtual ProductB* CreateB(){
            return new ProductB2();
        }
    };

    class Directory{
    private:
        Builder* p = nullptr;
    public:
        void SetBuilder(Builder* b){
            p = b;
        }
        pair<ProductA*, ProductB*> Construct(){
            return make_pair(p->CreateA(), p->CreateB());
        };
    };

}

#endif //DESIGNPATTERN_BUILDER_H
