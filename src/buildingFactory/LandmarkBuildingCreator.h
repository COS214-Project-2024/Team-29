#ifndef LANDMARK_BUILDING_CREATOR_H
#define LANDMARK_BUILDING_CREATOR_H

#include "BuildingCreator.h"
#include "../buildingComposite/Building.h"

#include <iostream>
/**
 * @class LandmarkBuildingCreator
 * @brief A concrete factory method for creating buildings.
 *
 * The LandmarkBuildingCreator class provides one of the concrete classes for 
 * the abstract factory class, BuidlingCreator, and is responsible for creating
 * Building objects of type Landmark
 */
class LandmarkBuildingCreator : public BuildingCreator
{
    public:
        /**
         * @brief Creates a building object of type Landmark and returns it.
         * 
         * createBulding() takes in a int paramenter that defines the type of
         * landmark building
         * - Park : bName == 1
         * - CulturalCentre : bName == 2
         * - Monument : bName == 3<br><br>
         * (returns nullptr if bName<1 or bName>3)<br>
         * returns a Building pointer to the object (Building*).
         *
         * @param [in] bName int that determines the type of Landmark building created
         * 
         * @return Building* to Building object created
         */
        Building* createBuilding(int bName);
};

#endif