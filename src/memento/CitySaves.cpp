#ifndef CITYSAVES_H
#define CITYSAVES_H

#include "CityMemento.h"

class CitySaves {
    public:
        addSave(CityMemento* m);
        removeSave();
        CityMemento* getSave();
        ~CityMemento();
    private:
        CityMemento* save;
};

#endif