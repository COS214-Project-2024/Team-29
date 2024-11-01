#include "Government.h"
#include "../buildingFactory/CommercialBuildingCreator.h"
#include "../buildingFactory/IndustrialBuildingCreator.h"
#include "../buildingFactory/LandmarkBuildingCreator.h"
#include "../buildingFactory/ResidentialBuildingCreator.h"

Government* Government::uniqueinstance = 0;

Government::Government(){
	budget = 1000000; // Add actual budget
}

Government::~Government(){
	delete uniqueinstance;
}

Government* Government::instance() {
	if(uniqueinstance == 0){
		uniqueinstance = new Government();
	}
	return uniqueinstance;
}
