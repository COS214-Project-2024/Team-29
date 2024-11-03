#ifndef FACTORY_H
#define FACTORY_H

#include "IndustrialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Factory : public IndustrialBuilding {
    public:
        Factory(double taxIncome, double buildCost, int employeeCapacity);
        virtual void accept(BuildingVisitor* v) override;
        ~Factory() {};
};

#endif