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
         * @brief Constructs a CompositeNeighbourhood with an empty name.
         */
        CompositeNeighbourhood();
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
};

#endif