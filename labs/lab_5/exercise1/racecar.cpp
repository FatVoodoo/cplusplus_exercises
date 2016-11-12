
// racecar.cpp

#include <iostream>

#include "racecar.h"

Racecar::Racecar(std::string name, std::string color, std::string s) : Car(name,color) {

    sponsor = s;
    gearbox = 6;
    parachuteDeployed = false;

}

void Racecar::setGearbox(int gears) {
    gearbox = ((gears <= 10 && gears >= 0) ? gears : 6);
}

void Racecar::useParachute() {
    parachuteDeployed = true;
}

void Racecar::print() const {
    std::cout << getName() << " also has " << gearbox 
        << " gears and is sponsored by " << sponsor << ". ";

    if (parachuteDeployed)
        std::cout << getName() << " has used its parachute." << std::endl;
    else
        std::cout << getName() << " has not used its parachute." << std::endl;

}



