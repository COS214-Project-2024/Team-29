#ifndef AIRPORT_H
#define AIRPORT_H

#include <iostream>
using namespace std;

#include "ModeOfTransport.h"

/**
 * @class Airport
 * @brief Represents an airport with specified cost, capacity, and transport type.
 *
 * The Airport class is a specialised mode of transport within a city,
 * providing an implementation specific to airports, including attributes for cost, type, and capacity.
 */
class Airport: public ModeOfTransport {
    private:
        float cost;     /**< The cost associated with the airport. */
        string name;    /**< The name of the airport. */

    public:
        /**
         * @brief Creates a new airport for the city with specified name.
         * 
         * - Cost: R 10,000,000.
         * - Type: General Transport.
         * - Capacity: 1,000,000 (General Transport capacity splits evenly between goods and public transport).
         * 
         * @param name The name of the airport.
         * @throws runtime_error if there is not enough budget to build the airports.
         */
        Airport(string name, float& budget);
        /**
         * @brief Destructor for Airport, decrements publicTransportCapacity and goodsTransportCapacity by 
         * half its own capacity (since its capacity is divided evenly).
         */
        ~Airport();
        /**
         * @brief Gets the type of transport associated with the airport.
         * @return A string representing the transport type, ergo - "GeneralTransport".
         */
        string getTransportType();
        /**
         * @brief Gets the name of the airport.
         * @return The name of the airport as a string.
         */
        string getName();
        /**
         * @brief Gets the specific transport type label of the airport.
         * @return A string representing the type  of transport, "Airport".
         */
        string getType();

        /**
         * @brief Gets the cost of the airport.
         * @return The cost of the airport as a float.
         */
        float getCost();

};

#endif