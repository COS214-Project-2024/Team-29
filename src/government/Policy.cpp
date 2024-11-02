#include "Policy.h"

Policy::Policy(string policyName, bool impact)
{
    this->policyName = policyName;
    this->impact = impact;

    string x = "";
    if(impact)
        x = "satisfied";
    else
        x = "not satisfied";

    cout << "Policy: " << policyName << " implemented! " << " The citizens are " << x << endl;
}

string Policy::getName()
{
    return this->policyName;
}

bool Policy::getImpact()
{
    return this->impact;
}
