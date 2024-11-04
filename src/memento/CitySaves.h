#ifndef CITYSAVES_H
#define CITYSAVES_H

#include "CityMemento.h"

/**
 * @class CitySaves
 * @brief Manages saving and loading of city states using CityMemento objects.
 *
 * The CitySaves class provides methods to add, remove, and retrieve saved city states.
 */
class CitySaves {
    private:
        CityMemento* save;  /**< Pointer to the saved city state. */

    public:
        /**
         * @brief Adds a save state to the collection.
         * @param m Pointer to the CityMemento representing the city state to be saved.
         */
        addSave(CityMemento* m);
        /**
         * @brief Removes the last saved state from the collection.
         */
        removeSave();
        /**
         * @brief Retrieves the most recent save state.
         * @return Pointer to the most recent CityMemento instance.
         */
        CityMemento* getSave();
        /**
         * @brief Destructor for CitySaves, cleaning up resources.
         */
        ~CityMemento();
};

#endif