#ifndef PARK_H
#define PARK_H

#include "LandmarkBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Park : public LandmarkBuilding {
    public:
        void accept(BuildingVisitor* v) override;
        int getLivingCapacity() const;
        double getTaxRate() const;
};

#endif