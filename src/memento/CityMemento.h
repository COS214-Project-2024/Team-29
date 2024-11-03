#ifndef CITYMEMENTO_H
#define CITYMEMENTO_H

#include "../satisfaction/SatisfactionState.h"
#include "../buildingComposite/BuildingComponent.h"
#include "../transport/TransportManager.h"
#include "../government/Government.h"
#include "../utility/UtilityFacade.h"

#include <iostream>
#include <vector>
#include <list>
using namespace std;

class CityMemento {
    public:
        ~CityMemento();

        void setSatisfaction(SatisfactionState* s);
        void setBuildings(BuildingComponent* b);
        void setModesOfTransport(vector<ModeOfTransport> m);

        SatisfactionState* getSatisfaction();
        BuildingComponent* getBuildings();
        vector<ModeOfTransport*> getModesOfTransport();

    private:
        SatisfactionState* satisfaction;
        list<BuildingComponent*> buildings;
        UtilityFacade* utilitiesManager;
        TransportManager* transportManager;
        Government* government;

        float budget;
        int population;
        int totalPowerDemand;
        int totalWaterDemand;
        int totalWasteDemand;
        int totalSewageDemand;
};

#endif