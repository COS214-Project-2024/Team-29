#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>

class Command{
    public:
        virtual void execute() = 0;
};
#endif