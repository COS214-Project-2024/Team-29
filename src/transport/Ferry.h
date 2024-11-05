#ifndef FERRY_H
#define FERRY_H

#include <iostream>
using namespace std;

#include "ModeOfTransport.h"

/**
 * @class Ferry
 * @brief Represents an ferry with specified cost, capacity, and transport type.
 *
 * The Ferry class is a specialised mode of transport within a city,
 * providing an implementation specific to airports, including attributes for cost, type, and capacity.
 */
class Ferry: public ModeOfTransport {
    private:
        float cost;     /**< The cost associated with the ferry. */
        string name;    /**< The name of the ferry. */

    public:
        /**
         * @brief Creates a new ferry for the city with specified name.
         * 
         * - Cost: R 1,000,000.
         * - Type: PublicTransport.
         * - Capacity: 500,000
         * 
         * @param name The name of the ferry.
         * @throws runtime_error if there is not enough budget to build the ferries.
         */
        Ferry(string name, float& budget);

        /**
         * @brief Destructor for Ferry, decrements publicTransportCapacity by its own capacity.
         */
        ~Ferry();

        /**
         * @brief Gets the type of transport associated with the ferry.
         * @return A string representing the transport type, ergo - "PublicTransport".
         */
        string getTransportType();

        /**
         * @brief Gets the name of the ferry.
         * @return The name of the ferry as a string.
         */
        string getName();
        
        /**
         * @brief Gets the specific transport type label of the ferry.
         * @return A string representing the type  of transport, "Ferry".
         */
        string getType();

        /**
         * @brief Gets the cost of the ferry.
         * @return The cost of the ferry as a float.
         */
        float getCost();
};

#endif