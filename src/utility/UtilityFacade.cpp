#include "UtilityFacade.h"

UtilityFacade::UtilityFacade()
{
    powerPlant = new PowerPlantDecorator();
    sewageManagement = new SewageManagementDecorator();
    wasteManagement = new WasteManagementDecorator();
    waterSupply = new WaterSupplyDecorator(); 
}

void UtilityFacade::calculateUtilityDemands(int numBuilding, int population)
{
    totalPowerDemand = (numBuilding*10) + (population); 
    totalSewageDemand = (numBuilding*12) + (population);
    totalWasteDemand = (numBuilding*15) + (population);
    totalWaterDemand = (numBuilding*15) + (population);
}

void UtilityFacade::checkAndUpgradeUtilities()
{
    if(totalPowerDemand > getPowerCapacity())
    {
        powerPlant->upgardeLevel();
        std::cout<<"Power Plant has been upgraded since demand was to high\n";
    }

    if(totalSewageDemand > getSewageCapacity())
    {
        sewageManagement->upgardeLevel();
        std::cout<<"Sewage Management has been upgraded since demand was to high\n";
    }

    if(totalWasteDemand > getWasteCapacity())
    {
        wasteManagement->upgardeLevel();
        std::cout<<"Waste Management has been upgraded since demand was to high\n";
    }

    if(totalWaterDemand > getWaterCapacity())
    {
        waterSupply->upgardeLevel();
        std::cout<<"Water Supply has been upgraded since demand was to high\n";
    }
}

void UtilityFacade::printResourceDistribution()
{
    std::cout<<"Current Utilities Demands"<<std::endl;
    std::cout<<"--------------------------"<<std::endl;
    std::cout<<"Power Demand: "<<totalPowerDemand<<std::endl;
    std::cout<<"Sewage Demand: "<<totalSewageDemand<<std::endl;
    std::cout<<"Waste Demand: "<<totalWasteDemand<<std::endl;
    std::cout<<"Water Demand: "<<totalWaterDemand<<std::endl;

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

int UtilityFacade::getTotalPowerDemand()
{
    return totalPowerDemand;
}

int UtilityFacade::getTotalWaterDemand()
{
    return totalWaterDemand;
}

int UtilityFacade::getTotalWasteDemand()
{
    return totalWasteDemand;
}

int UtilityFacade::getTotalSewageDemand()
{
    return totalSewageDemand;
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