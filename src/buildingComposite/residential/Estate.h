#ifndef ESTATE_H
#define ESTATE_H

#include "ResidentialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Estate : public ResidentialBuilding {
    public:
        Estate(double taxIncome, double buildCost, int livingCapacity);
        virtual void accept(BuildingVisitor* v) override;
        ~Estate() {};
}; 

#endif