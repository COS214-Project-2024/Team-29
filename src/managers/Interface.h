#ifndef INTERFACE_H
#define INTERFACE_H

#include "City.h"
#include "BuildingManager.h"

class Interface {
    private:
        City* c;
        int cycle;
    
    public:
        /// @brief default constructor for Interface
        Interface();
        void startSimulation();
        bool handleChoice(int choice);
        void build(int type);
        void endCycle();
        ~Interface();
};

#endif