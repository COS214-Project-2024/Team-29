#ifndef INDUSTRIAL_BUILDING_H
#define INDUSTRIAL_BUILDING_H

#include "../Building.h"

/**
 * @class IndustrialBuilding
 * @brief Represents an industrial building with specified tax income, construction cost, and employee capacity.
 *
 * The IndustrialBuilding class acts as an abstarct base class for the concrete classes:
 * -Factory
 * -Plant
 * -Warehouse<br><br>
 * provides the var of employeeCapacity specific to Industrial types of buidlings
 * 
 */
class IndustrialBuilding : public Building {
    protected:
        int employeeCapacity;   /**< The number of employees the building can accommodate. */
    
    public:
        /**
         * @brief Constructs a IndustrialBuilding with the specified tax income, build cost, and employee capacity.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param employeeCapacity Maximum number of employees accommodated.
         */
        IndustrialBuilding(double taxIncome, double buildCost, int employeeCapacity, int pow, int water, int waste, int sewage);
        /**
         * @brief Retrieves the employee capacity of the Industrial building.
         * @return Employee capacity as an integer.
         */
        int getEmployeeCapacity() const;   
        /**
         * @brief Destroys the IndustrialBuilding object.
         */
        virtual ~IndustrialBuilding() {};
        virtual BuildingComponent* clone() = 0;   
};

#endif