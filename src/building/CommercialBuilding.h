#include "Building.h"

#ifndef COMMERCIALBUILDING_H
#define COMMERCIALBUILDING_H

class CommercialBuilding : public Building {
    public:
        CommercialBuilding();
        virtual void acceptVisitor(Visitor * visitor);
};

#endif