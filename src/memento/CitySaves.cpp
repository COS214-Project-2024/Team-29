#include "CitySaves.h"

CitySaves::~CitySaves(){
    
}

void CitySaves::addSave(string name, CityMemento* m){
    if(save.find(name) != save.end()){
        cout << "Save with name "<< name  <<" already exists" << endl;
        return;
    }
    save[name] = m;
}

void CitySaves::removeSave(string name){
     size_t numErased = save.erase(name);

    if (numErased > 0) {
        cout << "Save '" << name << "' has been removed." << endl;
    } else {
        cout << "Save '" << name << "' not found." << endl;
    }
}

CityMemento* CitySaves::getSave(string name){
    
}

string CitySaves::toString(){
    return ;
}
