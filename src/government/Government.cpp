#include "Government.h"
#include "../buildingFactory/CommercialBuildingCreator.h"
#include "../buildingFactory/IndustrialBuildingCreator.h"
#include "../buildingFactory/LandmarkBuildingCreator.h"
#include "../buildingFactory/ResidentialBuildingCreator.h"

#include <fstream>
#include <sstream>
#include <string>
#include <random>

Government::Government(){
	//get list of policies
	ifstream file("Policies.txt");
    
    if (!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return;
    }
    
    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        string name;
        string impactString;
        
        if (getline(iss, name, ',') && getline(iss, impactString)) {
            bool impact = (impactString == "true");
            this->policies.push_back(Policy(name, impact));
        } else {
            cerr << "Error parsing line: " << line << endl;
        }
    }
    
    file.close();
}

Government* Government::clone()const{

    Government* newGovernment = new Government();
    newGovernment->policies = this->policies;
    return newGovernment;

}

bool Government::implementPolicy(float &budget)
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(0, policies.size());

	int policyIndex = distrib(gen);

	return this->policies.at(policyIndex).getImpact();
}
