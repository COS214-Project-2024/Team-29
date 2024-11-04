#ifndef PARK_H
#define PARK_H

#include "LandmarkBuilding.h"
#include "../../visitor/BuildingVisitor.h"

/**
 * @class Park
 * @brief Specialised concrete LandmarkBuidling class that represents a Park.
 *
 * The Park class is a specialised type of LandmarkBuilding that includes
 * the ability to accept visitor objects for extended operations.
 */
class Park : public LandmarkBuilding {
    public:
        /**
         * @brief Constructs a Park with the specified tax income, build cost, and satisfaction value.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param satisfactionValue Measure of public satisfaction.
         */
        Park(double taxIncome, double buildCost, int satisfactionValue);
        /**
         * @brief Accepts a visitor object for performing operations on the Park.
         * Such as calculating total income tax for the system/city.
         * 
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* v) override;
        /**
         * @brief Destroys the Park object.
         */
        ~Park() {};
        BuildingComponent* clone(); 
};

#endif