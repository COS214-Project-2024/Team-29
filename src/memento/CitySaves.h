#ifndef CITYSAVES_H
#define CITYSAVES_H

#include "CityMemento.h"
#include <map>
#include <string>
#include <iostream>
using namespace std;
class CitySaves {
    public:
        /// @brief Adds a CityMemento object to the map while using the name as the key
        /// @param name The key of the CityMemento
        /// @param m The CityMemento object to be stored
        void addSave(string name, CityMemento* m);
        void removeSave(string name);
        CityMemento* getSave(string name);
        string toString();
        ~CitySaves();
    private:
        map<string ,CityMemento*> save;
};

#endif