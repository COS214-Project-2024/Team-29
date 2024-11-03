#include "Interface.h"
#include <iostream>

Interface::Interface(){
    this->c = new City();
    this->cycle = 0;
}

Interface::~Interface(){
    delete this->c;
}

void Interface::startSimulation(){
    // initial value of -1 so that nothing is done until the user makes a choice
    int choice = -1;
    std::cout<<"Welcome to our city building simulator"<<std::endl;

    // main game loop
    // increments number of cycles
    do {
        std::cout<<"Cycle "<<this->cycle<<"\n"
                 <<"====================\n";

        // choice loop
        // allows user to make multiple choices per cycle until they quit or go ot the next cycle
        while (handleChoice(choice)){
            // displays stats about the city
            std::cout<<"City Stats:\n"
                <<"--------------------\n"
                <<"Balance: "<<this->c->getBudget()
                <<"\tPopulation: "<<this->c->getPopulation()
                <<"\nPower demand: "<<this->c->getPowerDemand()
                <<"\tWater demand: "<<this->c->getWaterDemand()
                <<"\nWaste demand: "<<this->c->getWasteDemand()
                <<"\tSewage demand: "<<this->c->getSewageDemand()
                <<"\n====================\n\n";

            // displays the available options to the user
            std::cout<<"Choose an option to manage your city:\n"
                <<"--------------------\n"
                <<"\t1. Add building"
                <<"\t2. Implement a new policy\n"
                <<"\t3. Next cycle"
                <<"\t0. Quit simulation\n"
                <<"====================\n\n";
            std::cin>>choice;
        }

        cycle++;

    } while (choice != 0 && this->c->getPopulation() > 0);
}

// returns true if the simulation should advance to the next cycle
bool Interface::handleChoice(int choice){
    if (choice == 3 || choice == 0){
        return true;
    } else if (choice == 1){
        // tell Building Manager to add a building
    } else if (choice == 2){
        this->c->implementPolicy();
    }
    return false;
}