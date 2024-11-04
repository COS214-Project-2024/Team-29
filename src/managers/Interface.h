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

        //City Functions
        void updateCityStats();

        //Display Prompt Functions
        /**
         * @brief Displays a welcome message to the user at the start of the simulation.
         */
        void displayWelcomeMessage();
        /**
         * @brief Displays the current statistics of the city, including resources and population.
         */
        void displayCityStats();
        /**
         * @brief Shows the current simulation cycle number.
         */
        void displayCurrentCycle();
        /**
         * @brief Displays the operation menu, listing available user actions for city management.
         */
        void displayOperationMenu();
        /**
         * @brief Shows a menu with building types available for construction.
         */
        void displayBuildingMenu();
        /**
         * @brief Prompts the user to specify the neighborhood for a new building.
         */
        void displayNeighbourHoodQuery();

        //Display Failure/Success Messages
        /**
         * @brief Shows a message indicating invalid input was received.
         */
        void displayInvalidInputMessage();
        /**
         * @brief Shows a message indicating that building construction failed.
         */
        void displayBuildingFailureMessage();
        /**
         * @brief Displays a success message when a building is successfully constructed.
         */
        void displayBuildingSuccessMessage();
        
        //Helper Functions
        /**
         * @brief Advances the simulation to the next cycle by incrementing the cycle counter.
         */
        void incrementCycle();
        /**
         * @brief Retrieves the current simulation cycle.
         * @return The current cycle count.
         */
        int getCycle();

        //UI Functions
        void clearTerminal();

        //Greeter Functions
        void displayGoodbyeMessage();

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