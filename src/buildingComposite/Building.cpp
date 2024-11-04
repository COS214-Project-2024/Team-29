#include "Building.h"

Building::Building(double taxIncome, double buildCost, int pow, int water, int waste, int sewage) : taxIncome(taxIncome), buildCost(buildCost) {
    this->powerDemand = pow;
    this->waterDemand = water ;
    this->wasteDemand = waste;
    this->sewageDemand = sewage;
}

double Building::getTaxIncome() const {
    return taxIncome;
}

double Building::getBuildCost() const {
    return buildCost;
}

int Building::getPowerDemand() const{
    return this->powerDemand;
}

int Building::getWaterDemand() const{
    return this->waterDemand;
}

int Building::getWasteDemand() const{
    return this->wasteDemand;
}

int Building::getSewageDemand() const{
    return this->sewageDemand;
}
