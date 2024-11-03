#ifndef CULTURAL_CENTRE_H
#define CULTURAL_CENTRE_H

#include "LandmarkBuilding.h"
#include "../../visitor/BuildingVisitor.h"

class CulturalCentre : public LandmarkBuilding {
    public:
        CulturalCentre(double taxIncome, double buildCost, int satisfactionValue);
        virtual void accept(BuildingVisitor* v) override;
        ~CulturalCentre() {};
};

#endif