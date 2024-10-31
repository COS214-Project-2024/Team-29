#include "Policy.h"

Policy::Policy(std::string n, int b, int s, int d, int t, int cU, int rU){
    name = n;
    budget = b;
    satisfaction = s;
    deathrate = d;
    taxes = t;
    commercialUsage = cU;
    residentialUsage = rU;
}

std::string Policy::getName(){
    return name;
}

int Policy::getBudget(){
    return budget;
}

int Policy::getSatisfaction(){
    return satisfaction;
}

int Policy::getDeathrate(){
    return deathrate;
}

int Policy::getTaxes(){
    return taxes;
}

int Policy::getCommercialUsage(){
    return commercialUsage;
}

int Policy::getResidentialUsage(){
    return residentialUsage;
}