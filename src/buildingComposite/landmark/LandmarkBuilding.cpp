#include "LandmarkBuilding.h"

LandmarkBuilding::LandmarkBuilding(double taxIncome, double buildCost, int satisfactionValue) : Building(taxIncome, buildCost), satisfactionValue(satisfactionValue) {}

int LandmarkBuilding::getSatisfactionValue() const {
    return satisfactionValue;
}