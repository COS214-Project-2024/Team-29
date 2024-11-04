#ifndef TOTAL_VISITOR_H
#define TOTAL_VISITOR_H

#include "BuildingVisitor.h"
#include "../buildingComposite/commercial/Mall.h"
#include "../buildingComposite/commercial/Office.h"
#include "../buildingComposite/commercial/Shop.h"
#include "../buildingComposite/industrial/Factory.h"
#include "../buildingComposite/industrial/Plant.h"
#include "../buildingComposite/industrial/Warehouse.h"
#include "../buildingComposite/landmark/CulturalCentre.h"
#include "../buildingComposite/landmark/Monument.h"
#include "../buildingComposite/landmark/Park.h"
#include "../buildingComposite/residential/Estate.h"
#include "../buildingComposite/residential/House.h"
#include "../buildingComposite/residential/TownHouse.h"
#include "../buildingComposite/CompositeNeighbourhood.h"

class TotalVisitor : public BuildingVisitor {
        private:
            double totalBuildCost;
            double totalTaxIncome;
            int totalLivingCapacity;
            int totalEmployeeCapacity;
            int totalSatisfactionValue;

        public:
            TotalVisitor();
            virtual void visit(Mall* m);
            virtual void visit(Office* o);
            virtual void visit(Shop* s);
            virtual void visit(Factory* f);
            virtual void visit(Plant* p);
            virtual void visit(Warehouse* w);
            virtual void visit(CulturalCentre* cc);
            virtual void visit(Monument* m);
            virtual void visit(Park* p);
            virtual void visit(Estate* e);
            virtual void visit(House* h);
            virtual void visit(TownHouse* th);
            virtual void visit(CompositeNeighbourhood* cn);
            
            //Getters
            double getTotalBuildCost() const;
            double getTotalTaxIncome() const;
            int getTotalLivingCapacity() const;
            int getTotalEmployeeCapacity() const;
            int getTotalSatisfactionValue() const;
            //Destructor
            ~TotalVisitor() {};
};

#endif