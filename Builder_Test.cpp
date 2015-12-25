//
// Created by feng on 12/25/15.
//

#include "Builder.h"
int main(){
    auto d = design::Directory();
    design::Builder* p = new design::Builder1();
    d.SetBuilder(p);
    auto pr = d.Construct();
    cout << pr.first->str() << ", " << pr.second->str() << endl;
    delete pr.first, pr.second;
    delete p;

    p = new design::Builder2();
    d.SetBuilder(p);
    pr = d.Construct();
    cout << pr.first->str() << ", " << pr.second->str() << endl;
    delete pr.first, pr.second;
    delete p;

    return 1;
}