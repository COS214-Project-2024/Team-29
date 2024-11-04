#ifndef CITYMEMENTO_H
#define CITYMEMENTO_H

#include "../satisfaction/SatisfactionState.h"
#include "../buildingComposite/BuildingComponent.h"
#include "../transport/ModeOfTransport.h"

#include <iostream>
#include <vector>
using namespace std;

/**
 * @class CityMemento
 * @brief Stores snapshots of city components, allowing the city state to be saved and restored.
 *
 * The CityMemento class provides mechanisms to set and retrieve saved states of various city components,
 * including satisfaction state, buildings, and modes of transport.
 */
class CityMemento {
    private:
        SatisfactionState* satisfaction;            /**< Pointer to saved satisfaction state. */
        BuildingComponent* buildings;               /**< Pointer to saved building structure. */
        vector<ModeOfTransport*> modesOfTransport;  /**< Saved modes of transport. */

    public:
        /**
         * @brief Destructor for CityMemento, cleaning up resources.
         */
        ~CityMemento();

        //setters
        /**
         * @brief Sets the satisfaction state of the city.
         * @param s Pointer to the SatisfactionState to be saved.
         */
        void setSatisfaction(SatisfactionState* s);
        /**
         * @brief Sets the saved buildings of the city.
         * @param b Pointer to the BuildingComponent representing the saved building structure.
         */
        void setBuildings(BuildingComponent* b);
        /**
         * @brief Sets the modes of transport for the saved state.
         * @param m Vector of ModeOfTransport instances.
         */
        void setModesOfTransport(vector<ModeOfTransport> m);

        //getters
        /**
         * @brief Retrieves the saved satisfaction state.
         * @return Pointer to the saved SatisfactionState.
         */
        SatisfactionState* getSatisfaction(); 
        /**
         * @brief Retrieves the saved buildings structure.
         * @return Pointer to the saved BuildingComponent.
         */
        BuildingComponent* getBuildings();
        /**
         * @brief Retrieves the saved modes of transport.
         * @return Vector of pointers to saved ModeOfTransport instances.
         */
        vector<ModeOfTransport*> getModesOfTransport();

};

#endif