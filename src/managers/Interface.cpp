#include "Interface.h"
#include <iostream>
#include <string>

Interface::Interface() {
    this->c = new City();
    this->cycle = 0;
}

Interface::~Interface() {
    delete this->c;
}

void Interface::startSimulation() {
    int choice;

    // Welcome Message
    std::cout   << "====================================\n"
                << "Welcome to City Kings\n"
                << "====================================\n\n";

    // MAIN LOOP - Increment cycle after each iteration, end when user quits or population reaches 0
    do {
        choice = -1; //Initial value of -1, no steps taken until user changes choice's value
        std::cout   << "====================\n"
                    << "Cycle: "    <<this->cycle    <<"\n"
                    << "====================\n\n";

        
        // User Choice Loop: Allows user to make multiple choices, per cycle until they quit or proceed to the next cycle.
        while (!handleChoice(choice)) {
            // Display current stats about the city
            std::cout   << "------------------------------------\n"
                        << "City Stats:\n"
                        << "------------------------------------\n"
                        << "\tBalance: "        << this->c->getBudget()        << "\n"
                        << "\tPopulation: "     << this->c->getPopulation()    << "\n"
                        << "\tPower demand: "   << this->c->getPowerDemand()   << "\n"
                        << "\tWater demand: "   << this->c->getWaterDemand()   << "\n"
                        << "\tWaste demand: "   << this->c->getWasteDemand()   << "\n"
                        << "\tSewage demand: "  << this->c->getSewageDemand()  << "\n"
                        << "------------------------------------\n\n";
                        
            // USER PROMPT: displays the available options to the user
            std::cout   << "====================================\n"
                        << "=> Choose an option to manage your city:\n"
                        << "====================================\n"
                        << "\t1. Add building\n"
                        << "\t2. Implement a new policy\n"
                        << "\t3. Next cycle\n"
                        << "\t0. Quit simulation\n"
                        << "====================================\n\n";

            // USER INPUT: User chooses an option
            std::cin>>choice;
            std::cout   << "\n";        //Move to next line for prompt
        }

        cycle++;

    } while (choice != 0 && this->c->getPopulation() > 0);
}

// returns true if the simulation should advance to the next cycle
bool Interface::handleChoice(int choice){
    if (choice == 3 || choice == 0){
        return true;
    } else if (choice == 1){
        int type;   // Type of building to be built

        //USER PROMPT
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

        //USER INPUT
        cin>>type;  
        std::cout   << "\n";        //Move to next line for prompt
        build(type);
        
    } else if (choice == 2){
        this->c->implementPolicy();
    }
    return false;   // Case falls through if choice is not 0, 1, 2, or 3
}

void Interface::build(int type){
    int bType, bName;
    std::string nName;

    if (type <= 3){
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
        std::cout   << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"
                    << "=> Invalid input\n"
                    << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n";
        return;
    }

    //User Prompt
    std::cout   << "????????????????????????????????????\n"
                << "=> In which neighbourhood would you like to build your building?\n"
                << "????????????????????????????????????\n";
    //User Input
    std::cin>>nName;
    std::cout   << "\n";        //Move to next line for prompt

    int buildCode = this->c->buildBuilding(nName, bType, bName);

    //Failure Message
    if (buildCode == 0) {
        
        std::cout   << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"
                    << "=> Building not built!!!\n" 
                    << "=> Reasons:\n" 
                    << "\tNot in budget or\n"
                    << "\tIncorrect neighbourhood name\n"
                    << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n";
    } 
                 
    //Success Message
    std::cout   << "------------------------------------\n"
                << "=> Building built\n"
                << "------------------------------------\n\n";
}