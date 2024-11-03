#ifndef PARK_H
#define PARK_H

#include "LandmarkBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class Park : public LandmarkBuilding {
    public:
        Park(double taxIncome, double buildCost, int satisfactionValue);
        virtual void accept(BuildingVisitor* v) override;
        ~Park() {};
};

#endif