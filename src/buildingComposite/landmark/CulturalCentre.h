#ifndef CULTURAL_CENTRE_H
#define CULTURAL_CENTRE_H

#include "LandmarkBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class CulturalCentre : public LandmarkBuilding {
    public:
        void accept(BuildingVisitor* v) override;
        int getLivingCapacity() const;
        double getTaxRate() const;
};

#endif