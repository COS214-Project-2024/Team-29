#ifndef SHOP_H
#define SHOP_H

#include "CommercialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Shop : public CommercialBuilding {
    public:
        Shop(double taxIncome, double buildCost, int employeeCapacity);
        virtual void accept(BuildingVisitor* v) override;
        virtual ~Shop() {};
};

#endif