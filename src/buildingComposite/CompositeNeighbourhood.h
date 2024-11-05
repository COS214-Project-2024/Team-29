#ifndef COMPOSITE_NEIGHBOURHOOD_H
#define COMPOSITE_NEIGHBOURHOOD_H

#include "BuildingComponent.h"
#include <list> 
#include <string>

/**
 * @class CompositeNeighbourhood
 * @brief Represents a composite neighbourhood containing multiple building components.
 *
 * The CompositeNeighbourhood class allows managing a collection of BuildingComponent
 * objects, enabling operations such as adding, demolishing, and calculating
 * the tax income of buildings within the neighbourhood.
 */
class CompositeNeighbourhood : public BuildingComponent {
    private:
        std::list<BuildingComponent*> buildingsList; /**< List of building components within the neighbourhood. */
        std::string nName;                           /**< Name of the neighbourhood. */
        
    public:
        /**
         * @brief Constructs a CompositeNeighbourhood with a specified name.
         * @param nName Name of the neighbourhood.
         */
        CompositeNeighbourhood(std::string nName);
        /**
         * @brief Adds a building component to the neighbourhood.
         * @param bc Pointer to a BuildingComponent to add.
         */
        virtual void addBuilding(BuildingComponent* bc) override;
        /**
         * @brief Demolishes a specified building component from the neighbourhood.
         * @param bc Pointer to a BuildingComponent to remove.
         */
        virtual void demolishBuilding(BuildingComponent* bc) override;
        /**
         * @brief Retrieves the total tax income for the neighbourhood.
         * @return Total tax income as a double.
         */
        virtual double getTaxIncome() const override;

        /**
         * @brief Retrieves the powerDemand of the building.
         * @return Power demand as an int.
         */
        int getPowerDemand() const;
        /**
         * @brief Retrieves the waterDemand of the building.
         * @return Water demand as an int.
         */
        int getWaterDemand() const;
        /**
         * @brief Retrieves the waterDemand of the building.
         * @return Waste demand as an int.
         */
        int getWasteDemand() const;
        /**
         * @brief Retrieves the wasteDemand of the building.
         * @return Sewage demand as an int.
         */
        int getSewageDemand() const;

        /**
         * @brief Retrieves the total build cost for the neighbourhood.
         * @return Total build cost as a double.
         */
        virtual double getBuildCost() const override;
        /**
         * @brief Retrieves the name of the neighbourhood.
         * @return Name of the neighbourhood as string
         */
        std::string getName();
        /**
         * @brief Accepts a visitor object for performing operations on the neighbourhood.
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* bv) override;
        /**
         * @brief Destroys the CompositeNeighbourhood object and its building components.
         */
        ~CompositeNeighbourhood();

        /**
         * @brief Returns nullptr since no implementation is needed for the inherited function.
         * @return nullptr

         */
        BuildingComponent* clone();
        /**
         * @brief Creates a deep copy of the current neighbourhood for saving in CityMemento.
         * @return Pointer to copy of the current neighbourhood as a CompositeNeighbourhood type.
         */
        CompositeNeighbourhood* copy() const;
};

#endif