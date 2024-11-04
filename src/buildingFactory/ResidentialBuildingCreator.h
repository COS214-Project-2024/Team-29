#ifndef RESIDENTIAL_BUILDING_CREATOR_H
#define RESIDENTIAL_BUILDING_CREATOR_H

#include "BuildingCreator.h"
#include "../buildingComposite/Building.h"

#include <iostream>

/**
 * @class ResidentialBuildingCreator
 * @brief A concrete factory method for creating buildings.
 *
 * The ResidentialBuildingCreator class provides one of the concrete classes for 
 * the abstract factory class, BuidlingCreator, and is responsible for creating
 * Building objects of type Residential
 */
class ResidentialBuildingCreator : public BuildingCreator
{
    public:
        /**
         * @brief Creates a building object of type Residential and returns it.
         * 
         * createBulding() takes in a int paramenter that defines the type of
         * residential building
         * - TownHouse : bName == 1
         * - Estate : bName == 2
         * - House : bName == 3<br><br>
         * (returns nullptr if bName<1 or bName>3)<br>
         * returns a Building pointer to the object (Building*).
         *
         * @param [in] bName int that determines the type of Residential building created
         * 
         * @return Building* to Building object created
         */
        Building* createBuilding(int bName);
};

#endif