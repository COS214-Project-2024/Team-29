#include "Building.h"

#ifndef LANDMARKBUILDING_H
#define LANDMARKBUILDING_H

class LandmarkBuilding : public Building {
    public:
        LandmarkBuilding();
        virtual void acceotVisitor(Visitor * visitor) = 0;
};

#endif