#ifndef TRAIN_H
#define TRAIN_H

#include <iostream>
using namespace std;

#include "ModeOfTransport.h"

/**
 * @class Train
 * @brief Represents an train with specified cost, capacity, and transport type.
 *
 * The Train class is a specialised mode of transport within a city,
 * providing an implementation specific to airports, including attributes for cost, type, and capacity.
 */
class Train: public ModeOfTransport {
    private:
        float cost;     /**< The cost associated with the train. */
        string name;    /**< The name of the train. */

    public:
        /**
         * @brief Creates a new train for the city with specified name.
         * 
         * - Cost: R 500,000.
         * - Type: GoodsTransport.
         * - Capacity: 100,000
         * 
         * @param name The name of the train.
         * @throws runtime_error if there is not enough budget to build the trains.
         */
        Train(string name, float& budget);
        /**
         * @brief Destructor for Train, decrements goodTransportCapacity by its own capacity.
         */
        ~Train();
        /**
         * @brief Gets the type of transport associated with the train.
         * @return A string representing the transport type, ergo - "GoodsTransport".
         */
        string getTransportType();
        /**
         * @brief Gets the name of the train.
         * @return The name of the train as a string.
         */
        string getName();
        /**
         * @brief Gets the specific transport type label of the train.
         * @return A string representing the type  of transport, "Train".
         */
        string getType();
        
};

#endif