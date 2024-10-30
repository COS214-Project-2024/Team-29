#ifndef UTILITIESDECORATOR_H
#define UTILITIESDECORATOR_H

class UtilitiesDecorator{
    private:
        int level;
        int currentCapacity;
    public:
        UtilitiesDecorator(int capacity);
        bool upgardeLevel();                //min level=0, max level=3. Returns true if upgrade successful, if at max returns false
        int getCapacity();
        int getLevel();
        bool isEfficient(int demand);       //if demand < capacity*2^level returns false else returns true
};

#endif