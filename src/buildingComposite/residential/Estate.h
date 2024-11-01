#ifndef ESTATE_H
#define ESTATE_H

#include "ResidentialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Estate : public ResidentialBuilding {
    public:
        void accept(BuildingVisitor* v) override;
        int getLivingCapacity() const;
        double getTaxRate() const;
}; 

#endif