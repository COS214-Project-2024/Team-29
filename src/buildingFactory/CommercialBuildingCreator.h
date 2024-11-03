#ifndef COMMERCIAL_BUILDING_CREATOR_H
#define COMMERCIAL_BUILDING_CREATOR_H

#include "BuildingCreator.h"
#include "../buildingComposite/Building.h"

#include <iostream>
/**
 * @class CommercialBuildingCreator
 * @brief A concrete factory method for creating buildings.
 *
 * The CommercialBuildingCreator class provides one of the concrete classes for 
 * the abstract factory class, BuidlingCreator, and is responsible for creating
 * Building objects of type Commercial
 */

class CommercialBuildingCreator : public BuildingCreator {
    public:
        /**
         * @brief Creates a building object of type Commercial and returns it.
         * 
         * createBulding() takes in a int paramenter that defines the type of
         * commercial building
         * - Office : bName == 1
         * - Shop : bName == 2
         * - Mall : bName == 3<br><br>
         * (returns nullptr if bName<1 or bName>3)<br>
         * returns a Building pointer to the object (Building*).
         *
         * @param [in] bName int that determines the type of Commercial building created
         * 
         * 
         * @return Building* to Building object created
         */
        Building* createBuilding(int bName);
};

#endif