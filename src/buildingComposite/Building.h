#ifndef BUILDING_H
#define BUILDING_H

#include "BuildingComponent.h"

class Building : public BuildingComponent
{
    private:
        int powerConsumption;       // amount of power units consumed in one game cycle
        int waterConsumption;       // amount of water units need per game cycle
        int wasteProduction;        // amount of waste produced per game cycle
        int sewageProduction;       // amount of sewage produced per game cycle
    
    public:
        Building() {};
        
        // Composite pattern
        virtual void addBuilding(BuildingComponent* bc) {};
        virtual void demolishBuilding(BuildingComponent* bc) {};

        //Visitor pattern
        virtual void accept(BuildingVisitor* bv) = 0;

        virtual ~Building() {}; 
};

#endif
