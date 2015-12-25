//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_MEDIATOR_H
#define DESIGNPATTERN_MEDIATOR_H

#include "common.h"
namespace  design{
    class Mediator;
    class Colledge{
        Mediator* p;
    public:
        void Add(Mediator* p){
            this->p = p;
        }
        virtual void Receive(const string& msg){
            cout << typeid(*this).name() << ":" << __func__  << ":" << msg<< endl;
        }
        virtual void Send(const string& name, const string& msg);
    };
    class ColledgeA: public Colledge{

    };
    class ColledgeB: public Colledge{

    };
    class Mediator{
    private:
        map<string, Colledge*> con;
    public:
        void Register(const string& name, Colledge* p){
            con[name] = p;
            p->Add(this);
        }
        void send(const string& name, const string& msg){
            auto p = con[name];
            if(p)
                p->Receive(msg);
        }
    };

    void Colledge::Send(const string& name, const string& msg){
        cout << typeid(*this).name() << ":" << __func__ <<":" << msg << endl;
        p->send(name, msg);
    }
}
#endif //DESIGNPATTERN_MEDIATOR_H
