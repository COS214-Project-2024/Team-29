#ifndef RESIDENTIAL_BUILDING_H
#define RESIDENTIAL_BUILDING_H

#include "../Building.h"

/**
 * @class ResidentialBuilding
 * @brief Represents an residential building with specified tax income, construction cost, and living capacity.
 *
 * The ResidentialBuilding class acts as an abstarct base class for the concrete classes:
 * -Estate
 * -House
 * -TownHouse<br><br>
 * provides the var of livingCapacity specific to Residential types of buidlings
 * 
 */
class ResidentialBuilding : public Building {
    protected:
        int livingCapacity;
    
    public:
        /**
         * @brief Constructs a ResidentialBuilding with the specified tax income, build cost, and living capacity.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param livingCapacity Maximum number of residents accommodated.
         */
        ResidentialBuilding(double taxIncome, double buildCost, int livingCapacity, int pow, int water, int waste, int sewage);
        /**
         * @brief Retrieves the living capacity of the Residential building.
         * @return Living capacity as an integer.
         */
        int getLivingCapacity() const;
        /**
         * @brief Destroys the ResidentialBuilding object.
         */
        virtual ~ResidentialBuilding() {};   
        virtual BuildingComponent* clone() = 0;    
};

#endif