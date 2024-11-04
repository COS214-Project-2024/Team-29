#include "BuildingManager.h"
#include "../visitor/TotalVisitor.h"

BuildingManager::BuildingManager(){
    cCreator = new CommercialBuildingCreator(); 
    iCreator = new IndustrialBuildingCreator(); 
    lCreator = new LandmarkBuildingCreator(); 
    rCreator = new ResidentialBuildingCreator(); 
}

std::string BuildingManager::createNeighbourhood(std::string nName) {
    // Failure to add if neighbourhood already exists
    if(neighbourhoodExists(nName)) {
        return "Neighbourhood not created as" + nName + " already exists!";
    }

    // No neighbourhood found, add to list
    nList.push_back(new CompositeNeighbourhood(nName));
    return "Neighbourhood " + nName + " created!";
}

/*
    Input: nName - Neighbourhood name
           bType - Building type
           bName - Building name
           balance - City balance
    Output: 
    Success: Building cost
    Failure: -1
    bType:
        1 - Commercial
        2 - Industrial
        3 - Landmark
        4 - Residential
    bName:
        e.g. 1 - Mall, 2 - Office, 3 - Shop OR 1 - Townhouse, 2 - Estate, 3 - House ...
*/
double BuildingManager::buildBuilding(std::string nName, int bType, int bName, double balance) {
    
    //Check if neighbourhood exists
    if (!neighbourhoodExists(nName)) {
        std::cout << "Neighbourhood not found" << std::endl;
        return -1;
    }

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

    // Check if building in budget
    if (newB->getBuildCost() > balance) {
        delete newB;
        return -1;
    }

    // Add building to neighbourhood
    for (auto it = nList.begin(); it != nList.end(); it++) {
        if ((*it)->getName() == nName) {
            (*it)->addBuilding(newB);
            return newB->getBuildCost();
        }
    }

    // Neighbourhood not found
    delete newB;
    return -1;
}

std::string BuildingManager::getTotalPerNeighbourhood() {
    std::string output = "";
    BuildingVisitor* v;
    for (auto it = nList.begin(); it != nList.end(); it++) {
        v = new TotalVisitor();
        (*it)->accept(v);

        //Format string
        output += "Neighbourhood: " + (*it)->getName() + "\n";
        output += "Total Building Cost: " + std::to_string(((TotalVisitor*)v)->getTotalBuildCost()) + "\n";
        output += "Total Tax Income: " + std::to_string(((TotalVisitor*)v)->getTotalTaxIncome()) + "\n";
        output += "Total Living Capacity: " + std::to_string(((TotalVisitor*)v)->getTotalLivingCapacity()) + "\n";
        output += "Total Employee Capacity: " + std::to_string(((TotalVisitor*)v)->getTotalEmployeeCapacity()) + "\n";
        output += "Total Satisfaction Value: " + std::to_string(((TotalVisitor*)v)->getTotalSatisfactionValue()) + "\n\n";

        delete v;
    }
    return output;  
}

std::string BuildingManager::getNeighbourhoods(){
    std::string list = "";

    for (auto it = nList.begin(); it != nList.end(); it++){
        list += " - " + (*it)->getName() + "\n";
    }

    return list;
}

double BuildingManager::getTotalBuildCost() {
    double total = 0;
    BuildingVisitor* v;
    for (auto it = nList.begin(); it != nList.end(); it++) {
        v = new TotalVisitor();
        (*it)->accept(v);
        total += ((TotalVisitor*)v)->getTotalBuildCost();
        delete v;
    }
    return total;
}

double BuildingManager::getTotalTaxIncome() {
    double total = 0;
    BuildingVisitor* v;
    for (auto it = nList.begin(); it != nList.end(); it++) {
        v = new TotalVisitor();
        (*it)->accept(v);
        total += ((TotalVisitor*)v)->getTotalTaxIncome();
        delete v;
    }
    return total;
}

int BuildingManager::getTotalLivingCapacity() {
    int total = 0;
    BuildingVisitor* v = new TotalVisitor();
    for (auto it = nList.begin(); it != nList.end(); it++) {
        v = new TotalVisitor();
        (*it)->accept(v);
        total += ((TotalVisitor*)v)->getTotalLivingCapacity();
        delete v;
    }
    return total;
}

int BuildingManager::getTotalEmployeeCapacity() {
    int total = 0;
    BuildingVisitor* v;
    for (auto it = nList.begin(); it != nList.end(); it++) {
        v = new TotalVisitor();
        (*it)->accept(v);
        total += ((TotalVisitor*)v)->getTotalEmployeeCapacity();
        delete v;
    }
    return total;
}

int BuildingManager::getTotalSatisfactionValue() {
    int total = 0;
    BuildingVisitor* v;
    for (auto it = nList.begin(); it != nList.end(); it++) {
        v = new TotalVisitor();
        (*it)->accept(v);
        total += ((TotalVisitor*)v)->getTotalSatisfactionValue();
        delete v;
    }
    return total;
}

BuildingManager::~BuildingManager() {
    for (auto it = nList.begin(); it != nList.end(); it++) {
        delete *it;
    }

    delete cCreator;
    delete iCreator;
    delete lCreator;
    delete rCreator;
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

int BuildingManager::getTotalPowerDemand(){
    int total = 0;
    BuildingVisitor* v;
    for (auto it = nList.begin(); it != nList.end(); it++) {
        v = new TotalVisitor();
        (*it)->accept(v);
        total += ((TotalVisitor*)v)->getTotalPowerDemand();
        delete v;
    }
    return total;
}

int BuildingManager::getTotalWaterDemand(){
    int total = 0;
    BuildingVisitor* v;
    for (auto it = nList.begin(); it != nList.end(); it++) {
        v = new TotalVisitor();
        (*it)->accept(v);
        total += ((TotalVisitor*)v)->getTotalWaterDemand();
        delete v;
    }
    return total;
}

int BuildingManager::getTotalWasteDemand(){
    int total = 0;
    BuildingVisitor* v;
    for (auto it = nList.begin(); it != nList.end(); it++) {
        v = new TotalVisitor();
        (*it)->accept(v);
        total += ((TotalVisitor*)v)->getTotalWasteDemand();
        delete v;
    }
    return total;
}

int BuildingManager::getTotalSewageDemand(){
    int total = 0;
    BuildingVisitor* v;
    for (auto it = nList.begin(); it != nList.end(); it++) {
        v = new TotalVisitor();
        (*it)->accept(v);
        total += ((TotalVisitor*)v)->getTotalSewageDemand();
        delete v;
    }
    return total;
}




BuildingManager* BuildingManager::clone(){
    BuildingManager * clone = new BuildingManager();
    for(CompositeNeighbourhood * curr : nList){
        clone->nList.push_back(curr->copy());
    }
    return clone;
}