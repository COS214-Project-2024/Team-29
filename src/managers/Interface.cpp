#include "Interface.h"
#include <iostream>
#include <string>
#include <stdlib.h>

// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

Interface::Interface() {
    this->c = new City();
    this->cycle = 0;
}

Interface::~Interface() {
    delete this->c;
}

void Interface::startSimulation() {
    // Initial Prompt
    displayWelcomeMessage();

    int choice = -1; //Initial value of -1, no steps taken until user changes choice's value

    // MAIN LOOP - Increment cycle after each iteration, end when user quits or population reaches 0
    while (choice != 0 && this->c->getPopulation() > 0) {

        choice = -1; //Initial value of -1, no steps taken until user changes choice's value

        // User Choice Loop: Allows user to make multiple choices, per cycle until they quit or proceed to the next cycle.
        do {
            displayCurrentCycle();
            displayCityStats();
            displayOperationMenu(); // USER PROMPT:

            // USER INPUT: User chooses an option
            std::cin    >> choice;
            std::cout   << "\n";        //Move to next line for prompt
        } while( !handleChoice(choice) );

        incrementCycle();
        updateCityStats();
        clearTerminal();
    }

    // End of Simulation
    clearTerminal();
    displayCityStats();
    displayGoodbyeMessage();
}

// returns true if the simulation should advance to the next cycle
bool Interface::handleChoice(int choice) {
    clearTerminal();    //Fresh output before simulation starts
    switch( choice ) {
        case 0:
            return true;
            break;
        case 1:
            int type;   // Type of building to be built

            //USER PROMPT
            displayBuildingMenu();

            //USER INPUT
            std::cin    >> type;  
            std::cout   << "\n";        //Move to next line for prompt
            build(type);
            break;
        case 2:
            this->c->implementPolicy();
            break;
        case 3:
            this->c->addTransport();
        case 4:
            return true;
            break;
        default:
            displayInvalidInputMessage();
            break;
    }
    return false;
}

void Interface::build(int type) {
    int bType, bName;
    std::string nName;

    if (type <= 3) {
        // build residential building with parameter type = type
        bType = 4;
        bName = type;
    } else if (type <= 6){
        // build commercial building with type = (type+1)%4
        bType = 1;
        bName = (type+1)%4;
    } else if (type <= 9){
        // build industrial building with type = (type+2)%4
        bType = 2;
        bName = (type+2)%4;
    } else if (type <= 12){
        //build landmark with type = (type+3)%4
        bType = 3;
        bName = (type+3)%4;
    } else {
        displayInvalidInputMessage();
        return;
    }

    //USER PROMPT
    displayNeighbourHoodQuery();
    //USER INPUT
    std::cin    >> nName;
    std::cout   << "\n";        //Move to next line for prompt

    int buildCode = this->c->buildBuilding(nName, bType, bName);

    
    if (buildCode == 0) {
        displayBuildingFailureMessage();    //Failure Message
    } 
    else {  
        displayBuildingSuccessMessage();    //Success Message
    }
}

/*
    Cycle Helper Functions
*/
void Interface::updateCityStats() {
    this->c->collectTaxes();
}

void Interface::incrementCycle() {
    this->cycle++;
}

int Interface::getCycle() {
    return this->cycle;
}

/*
    Display Prompt Functions
*/
void Interface::displayCityStats() {
    std::cout   << YELLOW   << "====================================\n"
                            << "City Stats:\n"
                            << "====================================\n"
                            << "\tBalance: "        << this->c->getBudget()         << "\n"
                            << "\tPopulation: "     << this->c->getPopulation()     << "\n"
                            << "\tPower demand: "   << this->c->getPowerDemand()    << "\n"
                            << "\tWater demand: "   << this->c->getWaterDemand()    << "\n"
                            << "\tWaste demand: "   << this->c->getWasteDemand()    << "\n"
                            << "\tSewage demand: "  << this->c->getSewageDemand()   << "\n"
                            << "====================================\n\n"           << RESET;
}

void Interface::displayCurrentCycle() {
    std::cout   << YELLOW   << "====================================\n"
                            << "Cycle: " << this->getCycle() << "\n"
                            << "====================================\n\n";
}

void Interface::displayOperationMenu() {
    std::cout   << "????????????????????????????????????\n"
                << "=> Choose an option to manage your city:\n"
                << "????????????????????????????????????\n"
                << "\t1. Add building\n"
                << "\t2. Implement a new policy\n"
                << "\t3. Add a mode of transport\n"
                << "\t4. Next cycle\n"
                << "\t0. Quit simulation\n"
                << "????????????????????????????????????\n\n";
}

void Interface::displayBuildingMenu() {
    clearTerminal();
    displayCityStats();
    std::cout   << "????????????????????????????????????\n"
                << "=> Which building would you like to build?\n"
                << "????????????????????????????????????\n"
                << "Residential Buildings:\n"
                << "\t1. Townhouse\n"
                << "\t2. Estate\n"
                << "\t3. House\n"
                << "Commercial Buildings:\n"
                << "\t4. Office\n"
                << "\t5. Shop\n"
                << "\t6. Mall\n"
                << "Industrial Buildings:\n"
                << "\t7. Factory\n"
                << "\t8. Warehouse\n"
                << "\t9. Plant\n"
                << "Landmark Buildings:\n"
                << "\t10. Park\n"
                << "\t11. Cultural Centre\n"
                << "\t12. Park\n"
                << "????????????????????????????????????\n";
}

void Interface::displayNeighbourHoodQuery() {
    clearTerminal();
    std::cout   << "????????????????????????????????????\n"
                << "=> In which neighbourhood would you like to build your building?\n"
                << "------------------------------------\n"
                << this->c->getNeighbourhoods() << "\n"
                << "????????????????????????????????????\n";
}

/*
    Error Messages
*/
void Interface::displayInvalidInputMessage() {
    clearTerminal();
    std::cout   << RED  << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"
                        << "=> Invalid input\n"
                        << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n"   << RESET;
}

void Interface::displayBuildingFailureMessage() {
    clearTerminal();
    std::cout   << RED  << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"
                        << "=> Building not built!!!\n" 
                        << "=> Reasons:\n" 
                        << "\tNot in budget or\n"
                        << "\tIncorrect neighbourhood name\n"
                        << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n"   << RESET;
}

/*
    Success Messages
*/
void Interface::displayBuildingSuccessMessage() {
    clearTerminal();
    std::cout   << GREEN    << "------------------------------------\n"
                            << "=> Building built\n"
                            << "------------------------------------\n\n"   << RESET;
}

/*
    Greeter Message Functions
*/
void Interface::displayWelcomeMessage() {
    clearTerminal();
    std::cout   << BLUE << "====================================\n"
                        << "Welcome to City Kings\n"
                        << "====================================\n\n"   << RESET;
}

void Interface::displayGoodbyeMessage() {
    clearTerminal();
    std::cout   << BLUE <<"====================================\n"
                        << "Hope to see you again in the City of Kings!\n"
                        << "====================================\n\n"       << RESET;
}

/*
    UI Functions
*/
void Interface::clearTerminal() {
    system("clear");
}