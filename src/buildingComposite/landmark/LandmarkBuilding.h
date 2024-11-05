#ifndef LANDMARK_BUILDING_H
#define LANDMARK_BUILDING_H

#include "../Building.h"

/**
 * @class LandmarkBuilding
 * @brief Represents an landmark building with specified tax income, construction cost, and satisfaction value.
 *
 * The LandmarkBuilding class acts as an abstarct base class for the concrete classes:
 * -CulturalCentre
 * -Monument
 * -Park<br><br>
 * provides the var of satisfactionValue specific to Landmark types of buidlings
 * 
 */
class LandmarkBuilding : public Building {
    protected:
        int satisfactionValue;      /**< A measure of public satisfaction contributed by the landmark. */

    public:
        /**
         * @brief Constructs a LandmarkBuilding with the specified tax income, build cost, and satisfaction value.
         * @param taxIncome The income generated from tax.
         * @param buildCost The cost required to build.
         * @param satisfactionValue Measure of public satisfaction.
         */
        LandmarkBuilding(double taxIncome, double buildCost, int satisfactionValue, int pow, int water, int waste, int sewage);
        /**
         * @brief Retrieves the public satisfaction value of the Landmark building.
         * @return Satisfaction value as an integer.
         */
        int getSatisfactionValue() const;
        /**
         * @brief Destroys the LandmarkBuilding object.
         */
        virtual ~LandmarkBuilding() {};
        /**
         * @brief Creates a copy of the current landmark building for saving in CityMemento.
         * @return Pointer to copy of the current LandmarkBuilding as a BuildingComponent type.
         */
        virtual BuildingComponent* clone() = 0;   
};

#endif