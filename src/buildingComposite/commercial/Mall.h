#ifndef MALL_H
#define MALL_H

#include "CommercialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Mall : public CommercialBuilding {
    public:
        void accept(BuildingVisitor* v) override;
        int getLivingCapacity() const;
        double getTaxRate() const;
};

#endif