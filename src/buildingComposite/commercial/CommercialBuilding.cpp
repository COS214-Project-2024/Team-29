#include "CommercialBuilding.h"

CommercialBuilding::CommercialBuilding(double taxIncome, double buildCost, int employeeCapacity, int pow, int water, int waste, int sewage) : Building(taxIncome, buildCost, pow, water ,waste, sewage), employeeCapacity(employeeCapacity) {}

int CommercialBuilding::getEmployeeCapacity() const {
    return employeeCapacity;
}