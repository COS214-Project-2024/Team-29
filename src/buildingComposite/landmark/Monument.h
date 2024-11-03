#ifndef MONUMENT_H
#define MONUMENT_H

#include "LandmarkBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Monument : public LandmarkBuilding {
    public:
        Monument(double taxIncome, double buildCost, int satisfactionValue);
        virtual void accept(BuildingVisitor* v) override;
        ~Monument() {};
};

#endif