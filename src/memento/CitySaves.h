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
        /**
         * @brief Adds a save state to the collection.
         * @param m Pointer to the CityMemento representing the city state to be saved.
         */
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
        
        /**
         * @brief Creates and reutrns a string to display to the user all the current saves.
         * @return String to print to user.
         */
        string toString();
        /**
         * @brief Destructor for CitySaves, cleaning up resources.
         */
        ~CitySaves();
    private:
        map<string ,CityMemento*> save; /**< Map object to store the different city saves */
};

#endif

