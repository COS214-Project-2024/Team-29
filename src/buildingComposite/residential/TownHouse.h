#ifndef TOWN_HOUSE_H
#define TOWN_HOUSE_H

#include "ResidentialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

/**
 * @class TownHouse
 * @brief Specialised concrete IndustrialBuidling class that represents a TownHouse.
 *
 * The TownHouse class is a specialised type of IndustrialBuilding that includes
 * the ability to accept visitor objects for extended operations.
 */
class TownHouse : public ResidentialBuilding {
    public:
        /**
         * @brief Constructs a TownHouse with the specified tax income, build cost, and living capacity.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param employeeCapacity Maximum number of employees accommodated.
         */
        TownHouse(double taxIncome, double buildCost, int livingCapacity, int pow, int water, int waste, int sewage);
        /**
         * @brief Accepts a visitor object for performing operations on the TownHouse.
         * Such as calculating total income tax and total capcaity/popolation in the system/city
         * 
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* v) override;
        /**
         * @brief Destroys the TownHouse object.
         */
        ~TownHouse() {};
        /**
         * @brief Creates a copy of the current townhouse for saving in CityMemento.
         * @return Pointer to copy of the current TownHouse as a BuildingComponent type.
         */
        BuildingComponent* clone();   
};

#endif