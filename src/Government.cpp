#include "Government.h"

Government::Government(){
	city = City::instance();
	construct = new ConstructBuildingCommand();
	policies = new SetPolicyCommand();
	resources = new AllocateResourcesCommand();
	budget = 1000_000; // Add actual budget
}

Government::~Government(){
	delete construct;
	delete policies;
	delete resources;
	delete city; // Might remove this
}

static Government* Government::instance() {
	if(uniqueinstance == NULL){
		instance = new Government();
	}
	return instance;
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
