#ifndef BUILDING_H
#define BUILDING_H

class Building {
    protected:
        int powerConsumption; // amount of power units consumed in one game cycle
        int waterConsumption; // amount of water units need per game cycle
        int wasteProduction; // amount of waste produced per game cycle
        int sewageProduction; // amount of sewage produced per game cycle
};

#endif