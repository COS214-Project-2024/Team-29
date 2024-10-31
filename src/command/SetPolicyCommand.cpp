#include "SetPolicyCommand.h"
#include "managers/City.h"
#include "Policy.h"

SetPolicyCommand::SetPolicyCommand(City* newCity){
    city = newCity;
}

void SetPolicyCommand::execute(){
    int choice = 0;
    Policy* newPolicy = nullptr;

    std::cout<<"What type of policy would you like to implement?"<<std::endl
             <<"1. Increased public holidays            : + satisfaction\n"
             <<"2. Implement Evironmental Awareness Days: + satisfaction - budget\n"
             <<"3. Increase Taxes                       : - satisfaction + taxes(+budget)\n"
             <<"4. Decrease Taxes                       : + satisfaction - taxes(-budget)\n"
             <<"5. Decrease Public Transport Prices     : + satisfaction - budget\n"
             <<"6. Implement Safety Programs            : + satisfaction - budget - deathrate\n"
             <<"7. Implement Work From Home initiatives : - utilities in commercial buildings + utilities in residential\n";
    
    std::cin>>choice;

    switch(choice){ //implementation still to be added for the policies in city
        case 1:
            std::cout<<"Public Holidays have been increased so satisfaction has increased\n";
            newPolicy = new Policy("Public Holidays Increase", 0, 1, 0, 0, 0, 0);
        case 2:
            std::cout<<"Implemented Evironmental Awareness Days so satisfaction has increased\n";
            newPolicy = new Policy("Environmental Awareness Days", -1, 1, 0, 0, 0, 0);
        case 3:
            std::cout<<"Taxes increased so satisfaction has decreased but budget has increased\n";
            newPolicy = new Policy("Tax Increase", 1, -1, 0, 1, 0, 0);
        case 4:
            std::cout<<"Taxes decreased so satisfaction has increased but budget has decreased\n";
            newPolicy = new Policy("Tax Decrease", -1, 1, 0, -1, 0, 0);
        case 5:
            std::cout<<"Public trasport prices has decreased so satisfaction has increased but budget has decreased\n";
            newPolicy = new Policy("Transport Price Decrease", -1, 1, 0, 0, 0, 0);
        case 6:
            std::cout<<"Safety Programs have started so satisfaction has increased, budget decreased and deathrate has decreased\n";
            newPolicy = new Policy("Safety Programs", -1, 1, -1, 0, 0, 0);
        case 7:
            std::cout<<"Initiatives to work from home have been implemented so satisfaction has increased but commercial building\n"
                     <<"utilities usage has decreased but residential usage has increased\n";
            newPolicy = new Policy("Work From Home Initiative", 0, 1, 0, 0, -1, 1);
    }

    //city->handlePolicy()
}