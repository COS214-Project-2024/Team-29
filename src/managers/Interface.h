#ifndef INTERFACE_H
#define INTERFACE_H

#include "City.h"

/**
 * @class Interface
 * @brief Manages the user interface and simulation control.
 *
 * The Interface class provides functions to initiate the simulation, handle user choices, and manage building operations.
 */
class Interface {
    private:
        City* c;    /**< Pointer to the City instance. */
        int cycle;  /**< Simulation cycle counter. */
    
    public:
        /**
         * @brief Default constructor for Interface.
         */
        Interface();
        /**
         * @brief Starts the simulation process.
         */
        void startSimulation();
        /**
         * @brief Handles user choices during simulation.
         * @param choice User-selected choice.
         * @return True if the choice is successfully handled, false otherwise.
         */
        bool handleChoice(int choice);
        /**
         * @brief Initiates building construction within the simulation.
         * @param type Type of building to construct.
         */
        void build(int type);
        /**
         * @brief Destructor for Interface.
         */
        ~Interface();
};

#endif