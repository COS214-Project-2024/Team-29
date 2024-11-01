#ifndef MONUMENT_H
#define MONUMENT_H

#include "LandmarkBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Monument : public LandmarkBuilding {
    public:
        void accept(BuildingVisitor* v) override;
        int getLivingCapacity() const;
        double getTaxRate() const;
};

#endif