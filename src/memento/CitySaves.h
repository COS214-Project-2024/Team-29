#ifndef CITYSAVES_H
#define CITYSAVES_H

#include "CityMemento.h"
#include <vector>
class CitySaves {
    public:
        void addSave(CityMemento* m);
        void removeSave();
        CityMemento* getSave();
        ~CitySaves();
    private:
        vector<CityMemento*> save;
};

#endif