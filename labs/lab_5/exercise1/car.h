
// car.h

#ifndef CAR_H
#define CAR_H

#include <iostream>


class Car {

    public:

        Car(std::string name, std::string color);

        void setMaxSpeed(int);
        int getMaxSpeed() const;

        void setEngineValves(int);
        int getEngineValves() const;

        std::string getColor() const;
        std::string getName() const;

        void print() const;

    private:
        int maxSpeed;
        int engineValves;
        std::string color;
        std::string name;

}; 

#endif

