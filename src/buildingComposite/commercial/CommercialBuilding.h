#ifndef COMMERCIAL_BUILDING_H
#define COMMERCIAL_BUILDING_H

#include "../Building.h"

class CommercialBuilding : public Building {
    protected:
        int employeeCapacity;

    public:
        CommercialBuilding(double taxIncome, double buildCost, int employeeCapacity);
        int getEmployeeCapacity() const;
        virtual ~CommercialBuilding() {};
};

#endif