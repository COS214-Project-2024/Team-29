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
	std::ifstream file("Policies.txt");
        
        if (!file.is_open()) {
            std::cerr << "Failed to open file." << std::endl;
            return;
        }
        
        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string name, impactString;
            
            if (std::getline(iss, name, ',') && std::getline(iss, impactString)) {
                // Trim whitespace from name
                name.erase(name.find_last_not_of(" \n\r\t") + 1);
                
                bool impact = (impactString == "true");
                policies.push_back(Policy(name, impact));
            } else {
                std::cerr << "Error parsing line: " << line << std::endl;
            }
        }
        
        file.close();
}

bool Government::implementPolicy(float &budget)
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(0, policies.size()-1);

	int policyIndex = distrib(gen);

	return this->policies.at(policyIndex).getImpact();
}
