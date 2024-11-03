#ifndef PLANT_H
#define PLANT_H

#include "IndustrialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Plant : public IndustrialBuilding {
    public:
        Plant(double taxIncome, double buildCost, int employeeCapacity);
        virtual void accept(BuildingVisitor* v) override;
        ~Plant() {};
};

#endif