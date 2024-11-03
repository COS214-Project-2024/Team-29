#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "IndustrialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Warehouse : public IndustrialBuilding {
    public:
        Warehouse(double taxIncome, double buildCost, int employeeCapacity);
        virtual void accept(BuildingVisitor* v) override;
        ~Warehouse() {};
};

#endif