#ifndef CITY_H
#define CITY_H

#include "Satisfaction/SatisfactionState.h"

class City {
    private:
        SatisfactionState* satisfaction;
    
    public:
        City();
        void setSatisfactionState(SatisfactionState* s);
};

#endif