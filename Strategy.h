//
// Created by feng on 12/25/15.
//

#ifndef DESIGNPATTERN_STRATEGY_H
#define DESIGNPATTERN_STRATEGY_H

#include "common.h"
namespace design{
    class Strategy;
    class Context{
    protected:
        Strategy* p;
        vector<int> v;
    public:
        void SetStrategy(Strategy* p){
            this->p = p;
        }
        int GetSum();
        void addnum(int i){
            v.push_back(i);
        }
    };
    class Strategy{
    public:
        virtual int Calc(const vector<int>& v){
            return accumulate(v.begin(), v.end(), 0);
        }
    };

    class Strategy2: public Strategy{
    public:
        virtual int Calc(const vector<int>& v){
            return accumulate(v.begin(), v.end(), 0, [](int a, int b){return a-b;} );
        }
    };

    int Context::GetSum(){
        p->Calc(v);
    }
}
#endif //DESIGNPATTERN_STRATEGY_H
