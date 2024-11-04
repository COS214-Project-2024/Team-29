#include "ResidentialBuilding.h"

ResidentialBuilding::ResidentialBuilding(double taxIncome, double buildCost, int livingCapacity) : Building(taxIncome, buildCost), livingCapacity(livingCapacity) {}

int ResidentialBuilding::getLivingCapacity() const {
    return livingCapacity;
}