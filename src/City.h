#ifndef CITY_H
#define CITY_H

#include "Satisfaction/SatisfactionState.h"

class City {
    private:
        static City* cityInstance;
        SatisfactionState* satisfaction;
        BuildingComponent* buildings;
        ModeOfTransport* modesOfTransport;
        UtilityFacade* utilitiesManager;
    
    protected:
        City();
        ~City();

    public:
        static City* instance();
        void setSatisfactionState(SatisfactionState* s);
};

#endif
