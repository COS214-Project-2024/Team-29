#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "IndustrialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Warehouse : public IndustrialBuilding {
    public:
        void accept(BuildingVisitor* v) override;
        int getLivingCapacity() const;
        double getTaxRate() const;
};

#endif