#include "IndustrialBuilding.h"

IndustrialBuilding::IndustrialBuilding(double taxIncome, double buildCost, int employeeCapacity, int pow, int water, int waste, int sewage) : Building(taxIncome, buildCost, pow ,water, waste, sewage), employeeCapacity(employeeCapacity) {}

int IndustrialBuilding::getEmployeeCapacity() const {
    return employeeCapacity;
}