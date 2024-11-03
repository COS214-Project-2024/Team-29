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
                 <<"==============\n";

        // choice loop
        // allows user to make multiple choices per cycle until they quit or go ot the next cycle
        while (handleChoice(choice)){
            std::cout<<"Choose an option to manage your city:\n"
                 <<"\t1. Add building\n"
                 <<"\t2. Implement a new policy\n"
                 <<"\t3. Next cycle\n"
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