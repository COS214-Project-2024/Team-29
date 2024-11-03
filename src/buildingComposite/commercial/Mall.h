#ifndef MALL_H
#define MALL_H

#include "CommercialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Mall : public CommercialBuilding {
    public:
        Mall(double taxIncome, double buildCost, int employeeCapacity);
        virtual void accept(BuildingVisitor* v) override;
        virtual ~Mall() {};
};

#endif