#ifndef FACTORY_H
#define FACTORY_H

#include "IndustrialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Factory : public IndustrialBuilding {
    public:
        void accept(BuildingVisitor* v) override;
        int getLivingCapacity() const;
        double getTaxRate() const;
};

#endif