#ifndef COMMERCIAL_BUILDING_H
#define COMMERCIAL_BUILDING_H

#include "../Building.h"

class CommercialBuilding : public Building {
    public:
        void accept(BuildingVisitor* v) override = 0;
};

#endif