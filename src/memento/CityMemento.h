#ifndef CITYMEMENTO_H
#define CITYMEMENTO_H

#include "../satisfaction/SatisfactionState.h"
#include "../buildingComposite/BuildingComponent.h"
#include "../transport/ModeOfTransport.h"

#include <iostream>
#include <vector>
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
        BuildingComponent* buildings;
        vector<ModeOfTransport*> modesOfTransport;
};

#endif