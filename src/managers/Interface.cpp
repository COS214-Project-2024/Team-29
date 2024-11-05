#include "Interface.h"
#include <iostream>
#include <string>
#include <stdlib.h>

//Used for sleep function so can display messages for a few seconds
#include <thread>
#include <chrono>

// ANSI Colour Codes - For Coloured Terminal Output
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
    displayWelcomeMessage();    //INITIAL PROMPT: Welcome Message

    int choice = -1; //INITIAL OPERATION CHOICE: -1(DEFAULT VAL), DON'T PROCEED UNTIL USER CHANGES CHOICE

    // MAIN LOOP - INCREMENT CYCLE
    while (choice != 0 && this->c->getPopulation() > 0) {
        choice = -1; 

        do {
            displayCurrentCycle();
            displayCityStats();
            displayOperationMenu(); // USER PROMPT:

            // USER INPUT: User chooses an option
            std::cin    >> choice;
            std::cout   << "\n";        
        } while( !handleChoice(choice) );   //OPERATION HANDLER: Handle user choice - multiple attempts

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
        case 1:
            buildNeighbourhood();
            break;
        case 2:
            {
                //USER PROMPT
                displayBuildingMenu();
                //USER INPUT
                int type;
                std::cin    >> type;  
                std::cout   << std::endl;       
                build(type);
            }
            break;
        case 3:
            this->c->implementPolicy();
            break;
        case 4:
            buildTransport();
            break;
        case 5:
            nextCycle();
            break;
        default:
            displayInvalidInputMessage();
            break;
    }
    return false;
}




/*
    OPERATION FUNCTIONS
*/
void Interface::buildNeighbourhood() {
    std::string nName;
    std::cout   << "Enter the name of the neighbourhood:" << std::endl;
    std::cin    >> nName;
    std::cout   << "\n";        //Move to next line for prompt

    std::string result = this->c->buildNeighbourhood(nName);

    if (result != "Successfully created neighbourhood.") {
        displayNeighbourhoodFailureMessage( result );    //Failure Message
    } 
    else {  
        displayNeighbourhoodSuccessMessage( result );    //Success Message
    }
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
    displayNeighbourhoodMenu();
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

void Interface::buildTransport() {
    //USER PROMPT - Type of transport
    displayTransportMenu();
    std::cout   << "Enter the type of transport(1-4): ";
    //USER INPUT
    int type;
    std::cin    >> type;
    std::cout   << "\n";        

    //USER PROMPT - Name of transport
    std::cout   << "Enter the name of the transport: ";
    //USER INPUT
    std::string name;
    std::cin    >> name;
    std::cout   << "\n";

    //Map Transport Type to String
    std::string typeStr;
    switch(type) {
        case 1:
            typeStr = "Airport";
            break;
        case 2:
            typeStr = "Bus";
            break;
        case 3:
            typeStr = "Ferry";
            break;
        case 4:
            typeStr = "Train";
            break;
        default:
            displayInvalidInputMessage();
            return;
    }

    try {
        this->c->buildTransport(typeStr, name);
        displayTransportSuccessMessage();
    } catch (const std::runtime_error &e) {
        displayTransportFailureMessage(e.what());
    }
}




/*
    CITY MANAGEMENT FUNCTIONS
*/
void Interface::displayCityStats() {
    std::cout   << YELLOW   << "===================================="                           << std::endl
                            << "City Stats:"                                                    << std::endl
                            << "===================================="                           << std::endl
                            << "\tBalance: "        << this->c->getBudget()                     << std::endl
                            << "\tPopulation: "     << this->c->getPopulation()                 << std::endl
                            << "\tPower demand: "   << this->c->getPowerDemand()                << std::endl
                            << "\tWater demand: "   << this->c->getWaterDemand()                << std::endl
                            << "\tWaste demand: "   << this->c->getWasteDemand()                << std::endl
                            << "\tSewage demand: "  << this->c->getSewageDemand()               << std::endl
                            << "===================================="               << RESET    << std::endl;
}
void Interface::updateCityStats() {
    this->c->collectTaxes();
}



/*
    GAME LOOP FUNCTIONS
*/
void Interface::displayCurrentCycle() {
    std::cout   << YELLOW   << "===================================="               << std::endl
                            << "Cycle: " << this->getCycle()                        << std::endl
                            << "===================================="   << RESET    << std::endl;
}

int Interface::getCycle() {
    return this->cycle;
}

void Interface::incrementCycle() {
    this->cycle++;
}

void Interface::nextCycle() {
    int numbCylesChoice = 1;
    std::cout   << "Enter the number of cycles to simulate: (2-5):" << std::endl;
    std::cin    >> numbCylesChoice;

    if (numbCylesChoice < 2 || numbCylesChoice > 5) {
        displayInvalidInputMessage();
        return;
    }

    for (int i = 0; i < numbCylesChoice; ++i) {
        this->incrementCycle();
        this->updateCityStats();
    }
}



/*
    Display Prompt Functions
*/
void Interface::displayOperationMenu() {
    std::cout   << "????????????????????????????????????"       << std::endl
                << "=> Choose an option to manage your city:"   << std::endl
                << "????????????????????????????????????"       << std::endl
                << "\t1. Build a Neighbourhood"                 << std::endl
                << "\t2. Build a Building"                      << std::endl    
                << "\t3. Implement a new policy"                << std::endl
                << "\t4. Build new transport"                   << std::endl
                << "\t5. Next cycle"                            << std::endl
                << "\t0. Quit simulation"                       << std::endl
                << "????????????????????????????????????"       << std::endl;
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

void Interface::displayNeighbourhoodMenu() {
    clearTerminal();
    std::cout   << "????????????????????????????????????"                                   << std::endl
                << "=> In which neighbourhood would you like to build your building?"       << std::endl
                << "------------------------------------"                                   << std::endl
                << this->c->getNeighbourhoods()                                             << std::endl
                << "------------------------------------"                                   << std::endl
                << "????????????????????????????????????"                                   << std::endl;
}

void Interface::displayTransportMenu() {
    clearTerminal();
    std::cout   << "????????????????????????????????????"       << std::endl
                << "=> Choose a mode of transport to build:"    << std::endl
                << "------------------------------------"       << std::endl
                << "1. Airport"                                 << std::endl
                << "2. Bus"                                     << std::endl
                << "3. Ferry"                                   << std::endl
                << "4. Train"                                   << std::endl
                << "------------------------------------"       << std::endl
                << "????????????????????????????????????"       << std::endl;
}




/*
    FAILURE FUNCTIONS
*/
void Interface::displayInvalidInputMessage() {
    clearTerminal();
    std::cout   << RED  << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"                   << std::endl
                        << "=> Invalid Input"                                       << std::endl
                        << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"       << RESET    << std::endl;
    sleepProgram();
    clearTerminal();
}

void Interface::displayBuildingFailureMessage() {
    clearTerminal();
    std::cout   << RED  << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"                   << std::endl
                        << "=> Building not built!!!"                               << std::endl 
                        << "=> Reasons:"                                            << std::endl 
                        << "\tNot in budget OR"                                     << std::endl
                        << "\tIncorrect neighbourhood name."                        << std::endl
                        << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"       << RESET    << std::endl;
    sleepProgram();
    clearTerminal();
}

void Interface::displayNeighbourhoodFailureMessage(const std::string& errMsg) {
    clearTerminal();
    std::cout   << RED  << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"                   << std::endl
                        << "=> Neighbourhood not built!!!"                          << std::endl
                        << "=> Reason:"                                             << std::endl
                        << "\t"     << errMsg                                       << std::endl
                        << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"       << RESET    << std::endl;
    sleepProgram();
    clearTerminal();
}

void Interface::displayTransportFailureMessage(const std::string& errMsg) {
    clearTerminal();
    std::cout   << RED  << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"                   << std::endl
                        << "=> Transport Not Built!!!"                              << std::endl 
                        << "=> Reason:"                                             << std::endl 
                        << "\t"     << errMsg                                       << std::endl
                        << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"       << RESET    << std::endl;
    sleepProgram();
    clearTerminal();
}


/*
    SUCCESS FUNCTIONS
*/
void Interface::displayBuildingSuccessMessage() {
    clearTerminal();
    std::cout   << GREEN    << "------------------------------------"               << std::endl
                            << "=> Building Built"                                  << std::endl
                            << "------------------------------------"   << RESET    << std::endl;
    sleepProgram();
    clearTerminal();
}

void Interface::displayNeighbourhoodSuccessMessage(const std::string& r) {
    clearTerminal();
    std::cout   << GREEN    << "------------------------------------"               << std::endl
                            << "=> "    << r                                        << std::endl
                            << "------------------------------------"   << RESET    << std::endl;
    sleepProgram();
    clearTerminal();
}

void Interface::displayTransportSuccessMessage() {
    clearTerminal();
    std::cout   << GREEN    << "------------------------------------"               << std::endl
                            << "=> Transport Built"                                 << std::endl
                            << "------------------------------------"   << RESET    << std::endl;
    sleepProgram();
    clearTerminal();
}




/*
    UI FUNCTIONS
*/
void Interface::clearTerminal() {
    system("clear");
}

void Interface::sleepProgram() {
    std::this_thread::sleep_for(std::chrono::seconds(5));
}




/*
    GREETER FUNCTIONS
*/
void Interface::displayWelcomeMessage() {
    clearTerminal();
    std::cout   << BLUE << "===================================="    << std::endl
                        << "Welcome to City Kings"                   << std::endl
                        << "===================================="    << RESET       << std::endl;
}

void Interface::displayGoodbyeMessage() {
    clearTerminal();
    std::cout   << BLUE <<"===================================="                        << std::endl
                        << "Hope to see you again in the City of Kings!"                << std::endl
                        << "===================================="           << RESET    << std::endl;
}