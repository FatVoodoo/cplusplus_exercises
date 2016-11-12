
// car.cpp


#include <iostream>
#include "car.h"

Car::Car(std::string name, std::string color) {
    this->name = name;
    this->color = color;
    maxSpeed = 95;
    engineValves = 4;
}


void Car::setMaxSpeed(int s) { 
   maxSpeed = ((s >= 0 && s < 250) ? s : 40); 

}

void Car::setEngineValves(int v) {
   engineValves = (( v >= 0 && v < 50 ) ? v : 4);

}

int Car::getMaxSpeed() const {
   return maxSpeed;

}

int Car::getEngineValves() const {
   return engineValves;

}

std::string Car::getName() const {
   return name;

}

std::string Car::getColor() const {
   return color;

}

void Car::print() const {

    std::cout << "Car: " << name << " is " << color << " and has a " 
        << engineValves << "-valve engine. MAX SPEED = " 
        << maxSpeed << " mph. " << std::endl;

}

