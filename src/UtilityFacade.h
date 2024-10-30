#ifndef UTILITYFACADE_H
#define UTILITYFACADE_H

#include <iostream>

#include "UtilitiesDecorator.h"
#include "SewageManagementDecorator.h"
#include "WaterSupplyDecorator.h"
#include "WasteManagementDecorator.h"
#include "PowerPlantDecorator.h"

class UtilityFacade{
    private:
        UtilitiesDecorator* powerPlant;
        UtilitiesDecorator* sewageManagement;
        UtilitiesDecorator* wasteManagement;
        UtilitiesDecorator* waterSupply;
        int totalPowerDemand;
        int totalWaterDemand;
        int totalWasteDemand;
        int totalSewageDemand;
    
    public:
        UtilityFacade();
        ~UtilityFacade();
        void calculateUtilityDemands(int numBuilding, int population);
        void checkAndUpgradeUtilities();
        void printResourceDistribution();
        int getTotalPowerDemand();
        int getTotalWaterDemand();
        int getTotalWasteDemand();
        int getTotalSewageDemand();
        int getPowerCapacity();
        int getWaterCapacity();
        int getWasteCapacity();
        int getSewageCapacity();
};
#endif