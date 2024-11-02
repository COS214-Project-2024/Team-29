#ifndef TRANSPORTMANAGER_H
#define TRANSPORTMANAGER_H

#include <iostream>
#include <vector>
using namespace std;

#include "ModeOfTransport.h"
#include "Airport.h"
#include "Bus.h"
#include "Ferry.h"
#include "Train.h"

class TransportManager {
    private:
        vector<ModeOfTransport*> modesOfTransport;

    public:

        /// @brief Adds a mode of transport to the city
        /// @param type "Airport", "Bus", "Ferry", "Train"
        /// @param name eg. "Gautrain"
        /// @param budget The budget of the city at the current point in time
        void addTransport(string type, string name, float& budget);

        int getTotalCapacity();

        void printSummary();

        ~TransportManager();

};

#endif