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
        UtilitiesDecorator* waterSupply;
        UtilitiesDecorator* wasteManagement;
        UtilitiesDecorator* sewageManagement;
    
    public:
        UtilityFacade();
        ~UtilityFacade();
        void checkAndUpgradeUtilities(int demand);
        void printResourceDistribution();
        int getPowerCapacity();
        int getWaterCapacity();
        int getWasteCapacity();
        int getSewageCapacity();
};
#endif