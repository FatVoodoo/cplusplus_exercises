
// vehicle.cpp

#include <iostream>

using std::cout;
using std::endl;

#include "vehicle.h"

Vehicle::Vehicle(const int doors, const int cylinders, string color, double initialFuel, const int transmission) : numberOfDoors(doors), numberOfCylinders(cylinders), transmissionType(transmission) 
{
    this->className = "Vehicle";
    this->vehicleColor = color;
    this->fuelLevel = initialFuel;
}

ostream &operator<<(ostream &out, const Vehicle &v) {
    out << v.className << "\n"
        << "\tNumber of doors: " << v.numberOfDoors
        << "\n\tNumber of cylinders: " << v.numberOfCylinders
        << "\n\tTransmission type: " << v.transmissionType
        << "\n\tColor: " << v.vehicleColor
        << "\n\tFuel level: " << v.fuelLevel << endl;

    return out;

}

void Vehicle::setColor(string color) {
    vehicleColor = color;
}

void Vehicle::setFuelLevel(double amount) {
    // assume 20 gallons is full tank
    if (amount > 0.0 && amount <= 20.0) 
        fuelLevel = amount;

    else
        fuelLevel = 5.0;

}

string Vehicle::getColor() const {   
    return vehicleColor;
}

double Vehicle::getFuelLevel() const {
    return fuelLevel;
}

int Vehicle::getTransmissionType() const {
    return transmissionType;
}

int Vehicle::getNumberOfDoors() const {
    return numberOfDoors;
}

int Vehicle::getNumberOfCylinders() const {
    return numberOfCylinders;   
}

void Vehicle::setClassName(string newName) {
    className = newName;
}

string Vehicle::getClassName() const {
    return className;
}



