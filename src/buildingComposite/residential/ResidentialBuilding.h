#ifndef RESIDENTIAL_BUILDING_H
#define RESIDENTIAL_BUILDING_H

#include "../Building.h"

class ResidentialBuilding : public Building {
    public:
        void accept(BuildingVisitor* v) override = 0;
};

#endif