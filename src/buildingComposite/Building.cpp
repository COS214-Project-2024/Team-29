#include "Building.h"

Building::Building(double taxIncome, double buildCost) : taxIncome(taxIncome), buildCost(buildCost) {}

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
