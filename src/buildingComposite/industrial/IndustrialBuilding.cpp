#include "IndustrialBuilding.h"

IndustrialBuilding::IndustrialBuilding(double taxIncome, double buildCost, int employeeCapacity) : Building(taxIncome, buildCost), employeeCapacity(employeeCapacity) {}

int IndustrialBuilding::getEmployeeCapacity() const {
    return employeeCapacity;
}