#ifndef CITY_H
#define CITY_H

class City {
    private:
        static City* cityInstance;
    
    protected:
        City();
        ~City();

    public:
        static City* instance();
};

#endif