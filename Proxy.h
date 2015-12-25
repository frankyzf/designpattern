//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_PROXY_H
#define DESIGNPATTERN_PROXY_H

#include "common.h"
namespace design{
    class Subject{
    public:
        void print(){
            cout << typeid(*this).name() << endl;
        }
    };
    class Proxy{
    private:
        Subject* p;
    public:
        Proxy():p(new Subject){

        }
        void print(){
            cout << "myproxy" << endl;
            p->print();
        }
    };
}
#endif //DESIGNPATTERN_PROXY_H
