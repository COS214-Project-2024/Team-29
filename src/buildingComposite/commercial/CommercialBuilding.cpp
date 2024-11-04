#include "CommercialBuilding.h"

CommercialBuilding::CommercialBuilding(double taxIncome, double buildCost, int employeeCapacity) : Building(taxIncome, buildCost), employeeCapacity(employeeCapacity) {}

int CommercialBuilding::getEmployeeCapacity() const {
    return employeeCapacity;
}