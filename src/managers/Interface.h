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
        /*
            CLASS VARIABLES
        */
        City* c;    /**< Pointer to the City instance. */
        int cycle;  /**< Simulation cycle counter. */



        /* 
            CITY MANAGEMENT FUNCTIONS
        */
        /**
         * @brief Displays the current statistics of the city, including resources and population.
         */
        void displayCityStats();
        /**
         * @brief Updates the city stats, mainly the cities taxes.
         */
        void updateCityStats();
        
        


        /*
            GAME LOOP FUNCTIONS
        */
        /**
         * @brief Shows the current simulation cycle number.
         */
        void displayCurrentCycle();
        /**
         * @brief Advances the simulation to the next cycle by incrementing the cycle counter.
         */
        void incrementCycle();
        /**
         * @brief Retrieves the current simulation cycle.
         * @return The current cycle count.
         */
        int getCycle();
        /**
         * @brief Advances the simulation by a specified number of cycles.
         */
        void nextCycle();




        /*
            DISPLAY PROMPT FUNCTIONS
        */
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
        void displayNeighbourhoodMenu();
        /**
         * @brief Shows a menu with transport modes available for construction.
         */
        void displayTransportMenu();


        /*
            OPERATION FUNCTIONS
        */

        void buildNeighbourhood();
        void buildTransport();

        /*
            DISPLAY FAILURE MESSAGES
        */
        /**
         * @brief Shows a message indicating invalid input was received.
         */
        void displayInvalidInputMessage();
        /**
         * @brief Shows a message indicating that building construction failed.
         */
        void displayBuildingFailureMessage();
        /**
         * @brief Shows a message indicating that neighbourhood construction failed.
         * @param errMsg The error message to display.
         */
        void displayNeighbourhoodFailureMessage(const std::string& errMsg);
        /**
         * @brief Shows a message indicating that transport construction failed.\
         * @param errMsg The error message to display.
         */
        void displayTransportFailureMessage(const std::string& errMsg);
        


        /*
            DISPLAY SUCCESS MESSAGES
        */
        /**
         * @brief Displays a success message when a building is successfully constructed.
         */
        void displayBuildingSuccessMessage();
        /**
         * @brief Displays a success message when a neighbourhood is successfully constructed.
         * @param Result of the neighbourhood construction operation.
         */
        void displayNeighbourhoodSuccessMessage(const std::string& r);
        /**
         * @brief Displays a success message when a transport is successfully constructed.
         * @param Result of the transport construction operation.
         */
        void displayTransportSuccessMessage();




        /*
            UI HELPER FUNCTIONS
        */
        /**
         * @brief Clears the terminal for a cleaner UI for the client
         */
        void clearTerminal();
        /**
         * @brief Pauses the program for a specified number of seconds.
         */
        void sleepProgram();



        /*
            DISPLAY GREETER MESSAGES
        */
        /**
         * @brief Displays a goodbye message to user for the end of the game
         */
        void displayGoodbyeMessage();
        /**
         * @brief Displays a welcome message to the user at the start of the simulation.
         */
        void displayWelcomeMessage();


        
        /*
            NEW METHODS FOR INTERFACE
        */
        
        void displayCurrentTransport();
        

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