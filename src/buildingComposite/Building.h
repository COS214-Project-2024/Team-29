#ifndef BUILDING_H
#define BUILDING_H

#include "BuildingComponent.h"

class Building : public BuildingComponent
{
    protected:
        double taxIncome;
        double buildCost;
    
    public:
        Building(double taxIncome, double buildCost);
        virtual double getTaxIncome() const override;
        virtual double getBuildCost() const override;
        virtual void accept(BuildingVisitor* bv) = 0; //Implemented in subclasses
        virtual ~Building() {};        
};

#endif
