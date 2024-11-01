#ifndef BUS_H
#define BUS_H

#include <iostream>
using namespace std;

#include "ModeOfTransport.h"

class Bus: public ModeOfTransport {

    public:
        /// @brief Creates a new bus for the city. 
        ///
        ///- Cost: R 100 000. 
        ///
        ///- Type: PublicTransport 
        ///
        ///- Capacity: 5 000
        /// @param name the name of the bus
        /// @throws runtime_error if there is not enough budget for the bus
        Bus(string name);
        ~Bus();
        string getTransportType();
        string getName();
        string getType();

    private:
        float cost;
        string name;
};

#endif