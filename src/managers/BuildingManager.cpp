#include "BuildingManager.h"

std::string BuildingManager::createNeighbourhood(std::string nName) {
    // Failure to add if neighbourhood already exists
    if (neighbourhoodExists(nName)) {
        return "Neighbourhood not created as" + nName + " already exists!";
    }

    // No neighbourhood found, add to list
    nList.push_back(new CompositeNeighbourhood(nName));
    return "";
}

/*
    Input: nName - Neighbourhood name
           bType - Building type
           bName - Building name
           balance - City balance
    Output: 
    Success: Building cost
    Failure: -1

    Note: No need to check if neighbourhood exists as input checked in main
    bType:
        1 - Commercial
        2 - Industrial
        3 - Landmark
        4 - Residential
    bName:
        e.g. 1 - Mall, 2 - Office, 3 - Shop OR 1 - Townhouse, 2 - Estate, 3 - House ...
*/
double BuildingManager::buildBuilding(std::string nName, int bType, int bName, double balance) {
    
    //No need to check if neighbourhood exists as input checked in main
    BuildingComponent* newB = nullptr;
    
    // Create building based on type
    switch(bType) {
        case 1:
            newB = cCreator->createBuilding(bName);
            break;
        case 2:
            newB = iCreator->createBuilding(bName);
            break;
        case 3:
            newB = lCreator->createBuilding(bName);
            break;
        case 4:
            newB = rCreator->createBuilding(bName);
            break;
        default:
            return -1;
    }

    // Check if building was created
    if (newB == nullptr) {
        return -1;
    }
}

double BuildingManager::getTotalTaxIncome() {
    double totalTaxIncome = 0.0;
    for (auto it = nList.begin(); it != nList.end(); it++) {
        totalTaxIncome += (*it)->getTaxIncome();
    }
    return totalTaxIncome;
}

BuildingManager::~BuildingManager() {
    delete cCreator;
    delete iCreator;
    delete lCreator;
    delete rCreator;
    for (auto it = nList.begin(); it != nList.end(); it++) {
        delete *it;
    }
}

/*
    Helper functions
*/
bool BuildingManager::neighbourhoodExists(std::string nName) {
    for (auto it = nList.begin(); it != nList.end(); it++) {
        if ((*it)->getName() == nName) {
            return true;
        }
    }
    return false;
}