#ifndef POCILY_H
#define POLICY_H

#include <iostream>

class Policy{
    private:
        std::string name;
        int budget;
        int satisfaction;
        int deathrate;
        int taxes;
        int commercialUsage;
        int residentialUsage;
    public:
        Policy(std::string n, int b, int s, int d, int t, int cU, int rU);
        std::string getName();
        int getBudget();
        int getSatisfaction();
        int getDeathrate();
        int getTaxes();
        int getCommercialUsage();
        int getResidentialUsage();
};

#endif