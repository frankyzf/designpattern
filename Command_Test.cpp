//
// Created by feng on 12/25/15.
//

#include "Command.h"

int main(){
    design::Command cmd(new design::ReceiverA);
    cmd.call();

    return 1;
}