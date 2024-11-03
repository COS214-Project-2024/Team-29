#ifndef RESIDENTIAL_BUILDING_H
#define RESIDENTIAL_BUILDING_H

#include "../Building.h"

class ResidentialBuilding : public Building {
    protected:
        int livingCapacity;
    
    public:
        ResidentialBuilding(double taxIncome, double buildCost, int livingCapacity);
        int getLivingCapacity() const;
        virtual ~ResidentialBuilding() {};    
};

#endif