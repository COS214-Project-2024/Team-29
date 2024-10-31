#include "Building.h"

#ifndef RESIDENTIALBUILDING_H
#define RESIDENTIALBUILDING_H

class ResidentialBuilding : public Building {
    public:
        ResidentialBuilding();
        virtual void acceotVisitor(Visitor * visitor) = 0;
};

#endif