#ifndef BUILDING_COMPONENT_H
#define BUILDING_COMPONENT_H

class BuildingVisitor;  // Forward declaration

/**
 * @class BuildingComponent
 * @brief Abstract class representing a generic building component.
 *
 * The BuildingComponent class provides a structure for handling individual
 * building components, including operations for adding, demolishing, and
 * retrieving financial data.
 */
class BuildingComponent
{
    public:
        /**
         * @brief Adds a building component.
         * @param bc Pointer to a BuildingComponent to add.
         */
        virtual void addBuilding(BuildingComponent* bc);    
        /**
         * @brief Demolishes a specified building component (removes the building from the component).
         * @param bc Pointer to a BuildingComponent to demolish.
         */   
        virtual void demolishBuilding(BuildingComponent* bc);
        /**
         * @brief Retrieves the tax income of the building component.
         * @return Tax income as a double.
         */
        virtual double getTaxIncome() const = 0;

        /**
         * @brief Retrieves the powerDemand of the building.
         * @return Power demand as an int.
         */
        virtual int getPowerDemand() const = 0;
        /**
         * @brief Retrieves the waterDemand of the building.
         * @return Water demand as an int.
         */
        virtual int getWaterDemand() const = 0;
        /**
         * @brief Retrieves the waterDemand of the building.
         * @return Waste demand as an int.
         */
        virtual int getWasteDemand() const = 0;
        /**
         * @brief Retrieves the wasteDemand of the building.
         * @return Sewage demand as an int.
         */
        virtual int getSewageDemand() const = 0;
             
        /**
         * @brief Retrieves the build cost of the building component.
         * @return Build cost as a double.
         */             //Pure virtual
        virtual double getBuildCost() const = 0;
        /**
         * @brief Accepts a visitor object for performing operations on the building component.
         * @param v Pointer to a BuildingVisitor object.
         */
        virtual void accept(BuildingVisitor* v) = 0;
        /**
         * @brief Destroys the BuildingComponent object. (inline)
         */
        virtual ~BuildingComponent() {};

        /**
         * @brief Creates a copy of the current building for saving in CityMemento.
         * @return Pointer to copy of the current building as a BuildingComponent type.
         */
        virtual BuildingComponent* clone() = 0;
        
};

#endif