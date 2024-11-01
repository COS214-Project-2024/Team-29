#ifndef AIRPORT_H
#define AIRPORT_H

#include <iostream>
using namespace std;

#include "ModeOfTransport.h"

class Airport: public ModeOfTransport {

    public:
        /// @brief Creates a new airport for the city. 
        ///
        ///- Cost: R 10 000 000. 
        ///
        ///- Type: GeneralTransport 
        ///
        ///- Capacity: 1 000 000 (General Transport capacity splits evenly between goods and public transport)
        /// @param name the name of the airports
        /// @throws runtime_error if there is not enough budget to build the airports
        Airport(string name);
        ~Airport();
        string getTransportType();
        string getName();
        string getType();

    private:
        float cost;
        string name;
};

#endif