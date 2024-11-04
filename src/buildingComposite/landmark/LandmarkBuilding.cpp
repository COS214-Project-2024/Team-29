#include "LandmarkBuilding.h"

LandmarkBuilding::LandmarkBuilding(double taxIncome, double buildCost, int satisfactionValue, int pow, int water, int waste, int sewage) : Building(taxIncome, buildCost, pow, water, waste, sewage), satisfactionValue(satisfactionValue) {}

int LandmarkBuilding::getSatisfactionValue() const {
    return satisfactionValue;
}