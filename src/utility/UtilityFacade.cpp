#include "UtilityFacade.h"

UtilityFacade::UtilityFacade()
{
    powerPlant = new PowerPlantDecorator();
    sewageManagement = new SewageManagementDecorator();
    wasteManagement = new WasteManagementDecorator();
    waterSupply = new WaterSupplyDecorator(); 
}

void UtilityFacade::checkAndUpgradeUtilities(int demand)
{
    if(powerPlant->isEfficient(demand))
    {
        powerPlant->upgardeLevel();
        std::cout<<"Power Plant has been upgraded since demand was to high\n";
    }

    if(powerPlant->isEfficient(demand))
    {
        sewageManagement->upgardeLevel();
        std::cout<<"Sewage Management has been upgraded since demand was to high\n";
    }

    if(powerPlant->isEfficient(demand))
    {
        wasteManagement->upgardeLevel();
        std::cout<<"Waste Management has been upgraded since demand was to high\n";
    }

    if(powerPlant->isEfficient(demand))
    {
        waterSupply->upgardeLevel();
        std::cout<<"Water Supply has been upgraded since demand was to high\n";
    }
}

void UtilityFacade::printResourceDistribution()
{
    std::cout<<"Current Utilities Output Capacities"<<std::endl;
    std::cout<<"--------------------------"<<std::endl;
    std::cout<<"Power Capacity: "<<getPowerCapacity()<<std::endl;
    std::cout<<"Sewage Capacity: "<<getSewageCapacity()<<std::endl;
    std::cout<<"Waste Capacity: "<<getWasteCapacity()<<std::endl;
    std::cout<<"Water Capacity: "<<getWaterCapacity()<<std::endl;
}  

UtilityFacade::~UtilityFacade()
{
    delete powerPlant;
    delete sewageManagement;
    delete waterSupply;
    delete wasteManagement;
}

int UtilityFacade::getPowerCapacity()
{
    return powerPlant->getCapacity();
}

int UtilityFacade::getWaterCapacity()
{
    return waterSupply->getCapacity();
}

int UtilityFacade::getWasteCapacity()
{
    return wasteManagement->getCapacity();
}

int UtilityFacade::getSewageCapacity()
{
    return sewageManagement->getCapacity();
}