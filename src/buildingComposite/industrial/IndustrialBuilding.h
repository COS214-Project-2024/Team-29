#ifndef INDUSTRIAL_BUILDING_H
#define INDUSTRIAL_BUILDING_H

#include "../Building.h"

class IndustrialBuilding : public Building {
    protected:
        int employeeCapacity;
    
    public:
        IndustrialBuilding(double taxIncome, double buildCost, int employeeCapacity);
        int getEmployeeCapacity() const;   
        virtual ~IndustrialBuilding() {};
};

#endif