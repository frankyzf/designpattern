//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_SINGLETON_H
#define DESIGNPATTERN_SINGLETON_H

#include "common.h"

namespace design{
    class singleton{
        static singleton* pinstance ;
    public:
        static singleton* Instance(){
            if(pinstance == nullptr)
                pinstance = new singleton();
            return pinstance;
        }
        string str(){
            return typeid(*this).name();
        }
    };
}
#endif //DESIGNPATTERN_SINGLETON_H
