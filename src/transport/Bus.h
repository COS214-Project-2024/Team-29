#ifndef BUS_H
#define BUS_H

#include <iostream>
using namespace std;

#include "ModeOfTransport.h"

/**
 * @class Bus
 * @brief Represents an bus with specified cost, capacity, and transport type.
 *
 * The Bus class is a specialised mode of transport within a city,
 * providing an implementation specific to buses, including attributes for cost, type, and capacity.
 */
class Bus: public ModeOfTransport {
    private:
        float cost;     /**< The cost associated with the bus. */
        string name;    /**< The name of the bus. */

    public:
        /**
         * @brief Creates a new bus for the city with specified name.
         * 
         * - Cost: R 100,000.
         * - Type: PublicTransport.
         * - Capacity: 5,000
         * 
         * @param name The name of the bus.
         * @throws runtime_error if there is not enough budget to build the buses.
         */
        Bus(string name, float& budget);
        
        /**
         * @brief Destructor for Bus, decrements publicTransportCapacity by its own capacity.
         */
        ~Bus();

        /**
         * @brief Gets the type of transport associated with the bus.
         * @return A string representing the transport type, ergo - "PublicTransport".
         */
        string getTransportType();

        /**
         * @brief Gets the name of the bus.
         * @return The name of the bus as a string.
         */
        string getName();

        /**
         * @brief Gets the specific transport type label of the bus.
         * @return A string representing the type  of transport, "Bus".
         */
        string getType();

        /**
         * @brief Gets the cost of the bus.
         * @return The cost of the bus as a float.
         */
        float getCost();
};

#endif