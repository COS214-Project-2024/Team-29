#ifndef FACTORY_H
#define FACTORY_H

#include "IndustrialBuilding.h"
#include "../../visitor/BuildingVisitor.h"

/**
 * @class Factory
 * @brief Specialised concrete IndustrialBuidling class that represents a Factory.
 *
 * The Factory class is a specialised type of IndustrialBuilding that includes
 * the ability to accept visitor objects for extended operations.
 */
class Factory : public IndustrialBuilding {
    public:
        /**
         * @brief Constructs a Factory with the specified tax income, build cost, and employee capacity.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param employeeCapacity Maximum number of employees accommodated.
         */
        Factory(double taxIncome, double buildCost, int employeeCapacity, int pow, int water, int waste, int sewage);
        /**
         * @brief Accepts a visitor object for performing operations on the Factory.
         * Such as calculating total income tax and total capcaity/popolation in the system/city
         * 
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* v) override;
        /**
         * @brief Destroys the Factory object.
         */
        ~Factory() {};
        BuildingComponent* clone(); 
};

#endif