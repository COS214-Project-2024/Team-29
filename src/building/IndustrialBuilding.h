#include "Building.h"

#ifndef INDUSTRIALBUILDING_H
#define INDUSTRIALBUILDING_H

class IndustrialBuilding : public Building {
    public:
        IndustrialBuilding();    
        virtual void acceptVisitor(Visitor * visitor) ;
};

#endif