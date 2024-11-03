#ifndef LANDMARK_BUILDING_H
#define LANDMARK_BUILDING_H

#include "../Building.h"

class LandmarkBuilding : public Building {
    protected:
        int satisfactionValue;

    public:
        LandmarkBuilding(double taxIncome, double buildCost, int satisfactionValue);
        int getSatisfactionValue() const;
        virtual ~LandmarkBuilding() {};
};

#endif