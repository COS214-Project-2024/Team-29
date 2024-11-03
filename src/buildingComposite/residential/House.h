#ifndef HOUSE_H
#define HOUSE_H

#include "ResidentialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class House : public ResidentialBuilding {
    public:
        House(double taxIncome, double buildCost, int livingCapacity);
        virtual void accept(BuildingVisitor* v) override;
        ~House() {};
};

#endif