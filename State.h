//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_STATE_H
#define DESIGNPATTERN_STATE_H

#include "common.h"
namespace  design{
    class State;
    class Context{
    private:
        State* p;
    public:
        void ChangeState();
        void SetState(State* np);
    };
    class State{
    protected:
        Context* p ;
    public:
        State(Context* p ):p(p){}
        virtual void OnStateChange(){}
    };
    class StateA: public State{
    public:
        StateA(Context* p ):State(p){}
        virtual void OnStateChange();
    };
    class StateB: public State{
    public:
        StateB(Context* p ):State(p){}
        virtual void OnStateChange();
    };

    void Context::ChangeState(){
        p->OnStateChange();
    }
    void Context::SetState(State* np){
        cout << __func__ << typeid(*np).name() << endl;
        p = np;
    }
    void StateA::OnStateChange(){
        auto ps = new StateB(p);
        p->SetState(ps);
    }
    void StateB::OnStateChange(){
        auto ps = new StateA(p);
        p->SetState(ps);
    }
}

#endif //DESIGNPATTERN_STATE_H
