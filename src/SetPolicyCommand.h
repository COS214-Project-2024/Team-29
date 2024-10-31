#ifndef SETPOLICYCOMMAND_H
#define SETPOLICYCOMMAND_H

#include "Command.h"

class SetPolicyCommand : public Command{
    private:
        City* city;
    public:
        SetPolicyCommand(City* newCity);
        void execute();
};
#endif