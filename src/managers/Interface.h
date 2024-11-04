#ifndef INTERFACE_H
#define INTERFACE_H

#include "City.h"

class Interface {
    private:
        //Class Variables
        City* c;
        int cycle;

        //City Functions
        void updateCityStats();

        //Display Prompt Functions
        void displayWelcomeMessage();
        void displayCityStats();
        void displayCurrentCycle();
        void displayOperationMenu();
        void displayBuildingMenu();
        void displayNeighbourHoodQuery();

        //Display Failure/Success Messages
        void displayInvalidInputMessage();
        void displayBuildingFailureMessage();
        void displayBuildingSuccessMessage();
        
        //Helper Functions
        void incrementCycle();
        int getCycle();

    public:
        /// @brief default constructor for Interface
        Interface();
        void startSimulation();
        bool handleChoice(int choice);
        void build(int type);
        ~Interface();
};

#endif