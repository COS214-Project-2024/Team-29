#ifndef HOUSE_H
#define HOUSE_H

#include "ResidentialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

/**
 * @class House
 * @brief Specialised concrete IndustrialBuidling class that represents a House.
 *
 * The House class is a specialised type of IndustrialBuilding that includes
 * the ability to accept visitor objects for extended operations.
 */
class House : public ResidentialBuilding {
    public:
        /**
         * @brief Constructs a House with the specified tax income, build cost, and living capacity.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param employeeCapacity Maximum number of employees accommodated.
         */
        House(double taxIncome, double buildCost, int livingCapacity);
        /**
         * @brief Accepts a visitor object for performing operations on the House.
         * Such as calculating total income tax and total capcaity/popolation in the system/city
         * 
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* v) override;
        /**
         * @brief Destroys the House object.
         */
        ~House() {};
};

#endif