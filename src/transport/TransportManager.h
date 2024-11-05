#ifndef TRANSPORTMANAGER_H
#define TRANSPORTMANAGER_H

#include <iostream>
#include <vector>
using namespace std;

#include "ModeOfTransport.h"
#include "Airport.h"
#include "Bus.h"
#include "Ferry.h"
#include "Train.h"

/**
 * @class TransportManager
 * @brief Manages a collection of various transportation modes within a city.
 *
 * The TransportManager class provides functionalities for adding, managing,
 * and accessing different transport modes such as airports, buses, ferries, and trains.
 */
class TransportManager {
    private:
        vector<ModeOfTransport*> modesOfTransport;

    public:
        /**
         * @brief Adds a mode of transport to the city's transport system.
         * @param type The type of transport ("Airport", "Bus", "Ferry", "Train").
         * @param name The name of the transport mode, e.g., "Gautrain".
         * @param budget Reference to the city's budget for managing costs.
         */
        void addTransport(std::string type, std::string name, float& budget);

        /**
         * @brief Calculates and retrieves the total capacity of all transport modes.
         * @return Total capacity cost as an int.
         */
        TransportManager* copy(float& budget);


        /**
         * @brief Calculates and retrieves the total capacity of all transport modes.
         * @return Total capacity cost as an int.
         */
        int getTotalCapacity();

        /**
         * @brief Prints out the generated string of the decription of each type of
         *  transport mode in the city's transport system. (Uses each transport system's ToString())
         */
        void printSummary();

        /**
         * @brief Destroys the TransportManager and deallocates transport objects.
         */
        ~TransportManager();
};

#endif