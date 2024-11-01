#ifndef INDUSTRIAL_BUILDING_H
#define INDUSTRIAL_BUILDING_H

#include "../Building.h"

class IndustrialBuilding : public Building {
    public:   
        void accept(BuildingVisitor* v) override = 0;
};

#endif