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
	policies.push_back(Policy("More public holidays", true));
	policies.push_back(Policy("Crime reduction Programs", true));
	policies.push_back(Policy("Green spaces expansion", true));
	policies.push_back(Policy("Free Public Wifi", true));
	policies.push_back(Policy("Wildlife Protection", true));
	policies.push_back(Policy("4 Day work week", true));
	policies.push_back(Policy("Ban on operating a vehicle while blindfolded", false));
	policies.push_back(Policy("Increased parking fees", false));
	policies.push_back(Policy("Alcohol and Tabacco Ban", false));
	policies.push_back(Policy("Brandy special price increase", false));
	policies.push_back(Policy("Fast Food Ban", false));
}

bool Government::implementPolicy(float &budget)
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(0, policies.size()-1);

	int policyIndex = distrib(gen);

	return this->policies.at(policyIndex).getImpact();
}
