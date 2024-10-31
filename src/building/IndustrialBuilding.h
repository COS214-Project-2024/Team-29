#include "Building.h"

#ifndef INDUSTRIALBUILDING_H
#define INDUSTRIALBUILDING_H

class IndustrialBuilding : public Building {
    public:
        IndustrialBuilding();    
        virtual void acceotVisitor(Visitor * visitor) = 0;
};

#endif