#ifndef OFFICE_H
#define OFFICE_H

#include "CommercialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Office : public CommercialBuilding {
    public:
        void accept(BuildingVisitor* v) override;
        int getLivingCapacity() const;
        double getTaxRate() const;
};

#endif
