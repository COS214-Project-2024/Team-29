#ifndef INTERFACE_H
#define INTERFACE_H

#include "../government/Government.h"
#include "City.h"

class Interface {
    private:
        Government* gov;
    
    public:
        /// @brief default constructor for Interface
        Interface();
        /// @brief calls the construct command from government
        void build();
        /// @brief used to generate a random new policy in government
        void policy();
        /// @brief changes the tax rate base on user input
        /// @param change 
        //void taxes(double change);
        ~Interface();
};

#endif