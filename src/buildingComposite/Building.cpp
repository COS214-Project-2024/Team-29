#include "Building.h"

Building::Building(double taxIncome, double buildCost) : taxIncome(taxIncome), buildCost(buildCost) {}

double Building::getTaxIncome() const {
    return taxIncome;
}

double Building::getBuildCost() const {
    return buildCost;
}