//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_OBSERVER_H
#define DESIGNPATTERN_OBSERVER_H

#include "common.h"
namespace  design{
    class Target;
    class Observer{
    public:
        void OnChange(Target* pt){
            cout << pt << ": " <<typeid(*this).name() << ":" <<  __func__ << endl;
        }
    };
    class Target{
    private:
        vector<Observer*> v;
    public:
        void AddObserver(Observer* p){
            v.push_back(p);
        }
        void ChangeState(){
            for(auto p: v){
                p->OnChange(this);
            }
        }
    };
}
#endif //DESIGNPATTERN_OBSERVER_H
