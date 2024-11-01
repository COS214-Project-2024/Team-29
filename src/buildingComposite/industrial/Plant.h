#ifndef PLANT_H
#define PLANT_H

#include "IndustrialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Plant : public IndustrialBuilding {
    public:
        void accept(BuildingVisitor* v) override;
        int getLivingCapacity() const;
        double getTaxRate() const;
};

#endif