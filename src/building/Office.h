#ifndef OFFICE_H
#define OFFICE_H

#include "CommercialBuilding.h"


class Office : public CommercialBuilding {
    public:
        Office();
        // virtual void acceptVisitor(Visitor * visitor);
};

#endif