#ifndef SHOP_H
#define SHOP_H

#include "CommercialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Shop : public CommercialBuilding {
    public:
        void accept(BuildingVisitor* v) override;
        int getLivingCapacity() const;
        double getTaxRate() const;
};

#endif