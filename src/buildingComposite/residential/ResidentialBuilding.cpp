#include "ResidentialBuilding.h"

ResidentialBuilding::ResidentialBuilding(double taxIncome, double buildCost, int livingCapacity, int pow, int water, int waste, int sewage) : Building(taxIncome, buildCost, pow, water, waste, sewage), livingCapacity(livingCapacity) {}

int ResidentialBuilding::getLivingCapacity() const {
    return livingCapacity;
}