
// racecar.h

#ifndef RACECAR_H
#define RACECAR_H

#include "car.h"

class Racecar : public Car {

    public:
        Racecar(std::string name, std::string color, std::string s);

        void setGearbox(int);
        void useParachute();
        void print() const;

    private:
        int gearbox;
        std::string sponsor;  
        bool parachuteDeployed; 
};

#endif


