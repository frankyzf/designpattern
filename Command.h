//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_COMMAND_H
#define DESIGNPATTERN_COMMAND_H

#include "common.h"
namespace design{
    class Receiver{
    public:
        virtual void printa(){
            cout << __func__ << endl;
        }
    };
    class ReceiverA: public Receiver{

    };
    class ReceiverB: public Receiver{

    };
    class Command{
    private:
        Receiver* p;
    public:
        Command(Receiver* p):p(p){}
        void call(){
            p->printa();
        }
    };
}
#endif //DESIGNPATTERN_COMMAND_H
