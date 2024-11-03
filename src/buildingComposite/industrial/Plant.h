#ifndef PLANT_H
#define PLANT_H

#include "IndustrialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

/**
 * @class Plant
 * @brief Specialised concrete IndustrialBuidling class that represents a Plant.
 *
 * The Plant class is a specialised type of IndustrialBuilding that includes
 * the ability to accept visitor objects for extended operations.
 */
class Plant : public IndustrialBuilding {
    public:
        /**
         * @brief Constructs a Plant with the specified tax income, build cost, and employee capacity.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param employeeCapacity Maximum number of employees accommodated.
         */
        Plant(double taxIncome, double buildCost, int employeeCapacity);
        /**
         * @brief Accepts a visitor object for performing operations on the Plant.
         * Such as calculating total income tax and total capcaity/popolation in the system/city
         * 
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* v) override;
        /**
         * @brief Destroys the Plant object.
         */
        ~Plant() {};
};

#endif