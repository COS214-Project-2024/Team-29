#ifndef OFFICE_H
#define OFFICE_H

#include "CommercialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Office : public CommercialBuilding {
    public:
        Office(double taxIncome, double buildCost, int employeeCapacity);
        virtual void accept(BuildingVisitor* v) override;
        virtual ~Office() {};
};

#endif
