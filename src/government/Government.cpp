#include "Government.h"
#include "building/CommercialBuildingCreator.h"
#include "building/IndustrialBuildingCreator.h"
#include "building/LandmarkBuildingCreator.h"
#include "building/ResidentialBuildingCreator.h"

Government* Government::uniqueinstance = 0;

Government::Government(){
	city = City::instance();
	construct = new ConstructBuildingCommand(city->getBuildings(), new CommercialBuildingCreator(), new IndustrialBuildingCreator(), new ResidentialBuildingCreator(), new LandmarkBuildingCreator());
	policies = new SetPolicyCommand(city);
	//resources = new AllocateResourcesCommand();
	budget = 1000000; // Add actual budget
}

Government::~Government(){
	delete construct;
	delete policies;
	delete resources;
	//delete city; // Might remove this
}

Government* Government::instance() {
	if(uniqueinstance == 0){
		uniqueinstance = new Government();
	}
	return uniqueinstance;
}

ConstructBuildingCommand* Government::getConstruct(){
	return this->construct;
}

SetPolicyCommand* Government::getPolicies(){
	return this->policies;
}

AllocateResourcesCommand* Government::getResources(){
	return this->resources;
}
