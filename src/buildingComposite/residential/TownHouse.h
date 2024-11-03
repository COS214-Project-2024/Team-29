#ifndef TOWN_HOUSE_H
#define TOWN_HOUSE_H

#include "ResidentialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class TownHouse : public ResidentialBuilding {
    public:
        TownHouse(double taxIncome, double buildCost, int livingCapacity);
        virtual void accept(BuildingVisitor* v) override;
        ~TownHouse() {};
};

#endif