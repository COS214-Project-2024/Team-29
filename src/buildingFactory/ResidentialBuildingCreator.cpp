#include "ResidentialBuildingCreator.h"

#include "../buildingComposite/residential/ResidentialBuilding.h"

#include "../buildingComposite/residential/Estate.h"
#include "../buildingComposite/residential/House.h"
#include "../buildingComposite/residential/TownHouse.h"

Building* ResidentialBuildingCreator::createBuilding(std::string buildType){
    if(buildType == "Estate")
    {
        return new Estate();
    }
    else if(buildType == "House")
    {
        return new House();
    }
    else
    {
        return new TownHouse();
    }
}