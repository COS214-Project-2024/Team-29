#ifndef CITYSAVES_H
#define CITYSAVES_H

#include "CityMemento.h"
#include <map>
#include <string>
#include <iostream>
using namespace std;
/**
 * @class CitySaves
 * @brief Manages saving and loading of city states using CityMemento objects.
 *
 * The CitySaves class provides methods to add, remove, and retrieve saved city states.
 */
class CitySaves {
    public:
        /// @brief Adds a CityMemento object to the map while using the name as the key
        /// @param name The key of the CityMemento
        /// @param m The CityMemento object to be stored
        void addSave(string name, CityMemento* m);
        /**
         * @brief Removes the last saved state from the collection.
         */
        void removeSave(string name);
        /**
         * @brief Retrieves the most recent save state.
         * @return Pointer to the most recent CityMemento instance.
         */
        CityMemento* getSave(string name);
        string toString();
        ~CitySaves();
    private:
        map<string ,CityMemento*> save;
};

#endif

