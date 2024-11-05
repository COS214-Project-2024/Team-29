#include "UtilityFacade.h"

UtilityFacade::UtilityFacade()
{
    powerPlant = new PowerPlantDecorator();
    sewageManagement = new SewageManagementDecorator();
    wasteManagement = new WasteManagementDecorator();
    waterSupply = new WaterSupplyDecorator(); 
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

int UtilityFacade::getPowerUpgradeCost() const
{
    return powerPlant->getUpgradeCost();
}

int UtilityFacade::getWaterUpgradeCost() const
{
    return waterSupply->getUpgradeCost();
}

int UtilityFacade::getWasteUpgradeCost() const
{
    return wasteManagement->getUpgradeCost();
}

int UtilityFacade::getSewageUpgradeCost() const
{
    return sewageManagement->getUpgradeCost();
}

float UtilityFacade::upgradeUtility(int type, float balance)
{
    switch(type){
        case 1: //power
                int cost = powerPlant->getUpgradeCost();
                if(cost<balance)
                {
                    powerPlant->upgradeLevel();
                    return cost;
                }
                else
                {
                    return -1;
                }
            break;
        case 2: //water
                int cost = waterSupply->getUpgradeCost();
                if(cost<balance)
                {
                    waterSupply->upgradeLevel();
                    return cost;
                }
                else
                {
                    return -1;
                }
            break;
        case 3: //waste
                int cost = wasteManagement->getUpgradeCost();
                if(cost<balance)
                {
                    wasteManagement->upgradeLevel();
                    return cost;
                }
                else
                {
                    return -1;
                }
            break;
        case 4: //sewage
                int cost = sewageManagement->getUpgradeCost();
                if(cost<balance)
                {
                    sewageManagement->upgradeLevel();
                    return cost;
                }
                else
                {
                    return -1;
                }
            break;
    }
}

UtilityFacade* UtilityFacade::clone(){
    UtilityFacade* clone = new UtilityFacade();
    clone->powerPlant->setCapacity(this->powerPlant->getCapacity());
    clone->powerPlant->setLevel(this->powerPlant->getLevel());

    clone->sewageManagement->setCapacity(this->sewageManagement->getCapacity());
    clone->sewageManagement->setLevel(this->sewageManagement->getLevel());

    clone->wasteManagement->setCapacity(this->wasteManagement->getCapacity());
    clone->wasteManagement->setLevel(this->wasteManagement->getLevel());

    clone->waterSupply->setCapacity(this->waterSupply->getCapacity());
    clone->waterSupply->setLevel(this->waterSupply->getLevel());

    return clone;
}

