#include "CommercialBuildingCreator.h"
#include "../buildingComposite/commercial/CommercialBuilding.h"

#include "../buildingComposite/commercial/Mall.h"
#include "../buildingComposite/commercial/Shop.h"
#include "../buildingComposite/commercial/Office.h"

Building* CommercialBuildingCreator::createBuilding(std::string buildType){
    if(buildType == "Shop")
    {
        return new Shop();
    }
    else if(buildType == "Mall")
    {
        return new Mall();
    }
    else
    {
        return new Office();
    }
}
