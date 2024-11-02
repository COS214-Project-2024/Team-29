#ifndef LANDMARK_BUILDING_H
#define LANDMARK_BUILDING_H

#include "../Building.h"

class LandmarkBuilding : public Building {
    public:
        void accept(BuildingVisitor* v) override = 0;
};

#endif