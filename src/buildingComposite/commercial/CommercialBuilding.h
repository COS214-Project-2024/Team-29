#ifndef COMMERCIAL_BUILDING_H
#define COMMERCIAL_BUILDING_H

#include "../Building.h"

/**
 * @class CommercialBuilding
 * @brief Represents a commercial building with specified tax income, construction cost, and employee capacity.
 *
 * The CommercialBuilding class acts as an abstarct base class for the concrete classes:
 * -Mall
 * -Office
 * -Shop<br><br>
 * provides the var of employeeCapacity specific to Commercial types of buidlings
 * 
 */
class CommercialBuilding : public Building {
    protected:
        int employeeCapacity;   /**< The number of employees the building can accommodate. */

    public:
        /**
         * @brief Constructs a CommercialBuilding with the specified tax income, build cost, and employee capacity.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param employeeCapacity Maximum number of employees accommodated.
         */
        CommercialBuilding(double taxIncome, double buildCost, int employeeCapacity, int pow, int water, int waste, int sewage);
        /**
         * @brief Retrieves the employee capacity of the Commercial building.
         * @return Employee capacity as an integer.
         */
        int getEmployeeCapacity() const;
        /**
         * @brief Destroys the CommercialBuilding object.
         */
        virtual ~CommercialBuilding() {};
        /**
         * @brief Creates a copy of the current commercial building for saving in CityMemento.
         * @return Pointer to copy of the current CommercialBuilding as a BuildingComponent type.
         */
        virtual BuildingComponent* clone() = 0;   
};

#endif