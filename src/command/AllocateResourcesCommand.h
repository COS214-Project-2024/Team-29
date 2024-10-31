#ifndef ALLOCATERESOURCESCOMMAND_H
#define ALLOCATERESOURCESCOMMAND_H

#include "Command.h"

class AllocateResourcesCommand : public Command{
    private:
        City* city;
    public:
        AllocateResourcesCommand(City* newCity);
        void execute();
};
#endif