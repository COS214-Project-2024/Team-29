#ifndef CITYMEMENTO_H
#define CITYMEMENTO_H

#include "../satisfaction/SatisfactionState.h"
#include "../buildingComposite/BuildingComponent.h"
#include "../transport/TransportManager.h"
#include "../government/Government.h"
#include "../utility/UtilityFacade.h"
#include "../managers/BuildingManager.h"


#include <iostream>
#include <vector>
#include <list>
#include <list>
using namespace std;

class CityMemento {
    public:
        ~CityMemento();

        void setSatisfaction(SatisfactionState* s);
        void setBuildingManager(BuildingManager * b);
        void setUtilityManager(UtilityFacade * m);
        void setGovernment(Government * g);
        void setTransportManager(TransportManager * m);

        void setBudget(double b);
        void setPopulation(int p);
        void setTotalPowerDemand(int t);
        void setTotalWaterDemand(int t);
        void setTotalWasteDemand(int t);
        void setTotalSewageDemand(int t);
        void setBuildingManager(BuildingManager * b);
        void setUtilityManager(UtilityFacade * m);
        void setGovernment(Government * g);
        void setTransportManager(TransportManager * m);

        SatisfactionState* getSatisfaction() const;
        BuildingManager* getBuildingManager() const;
        UtilityFacade * getUtilityManager() const;
        Government * getGovernment() const;
        TransportManager * getTransportManager(float& b) const;

        double getBudget() const;
        int getPopulation() const;
        int getTotalPowerDemand() const;
        int getTotalWaterDemand() const;
        int  getTotalWasteDemand() const;
        int getTotalSewageDemand()const;

    private:
        SatisfactionState* satisfaction;
        BuildingManager* buildingManager;
        UtilityFacade* utilitiesManager;
        TransportManager* transportManager;
        Government * government;

        float budget;
        int population;
        int totalPowerDemand;
        int totalWaterDemand;
        int totalWasteDemand;
        int totalSewageDemand;
};

#endif