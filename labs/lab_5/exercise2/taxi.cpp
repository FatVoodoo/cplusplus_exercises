
// taxi.cpp

#include "taxi.h"

Taxi::Taxi(double f) : Vehicle(4, 6, "yellow", f, 5) {
    customers = false;
    setClassName("Taxi");
}

void Taxi::setCustomers(bool c) {
    customers = c; 
}

bool Taxi::hasCustomers() const {
    return customers;
}

// function operator<< definition
ostream &operator<<(ostream &output, const Taxi &t) {
    output << t.getClassName() << "\n"
        << "\tNumber of doors: "
        << t.getNumberOfDoors()
        << "\n\tNumber of cylinders: "
        << t.getNumberOfCylinders()
        << "\n\tTransmission type: "
        << t.getTransmissionType()
        << "\n\tColor: " << t.getColor()
        << "\n\tFuel level: " 
        << t.getFuelLevel() << "\n";

    if (t.hasCustomers() == true)
        output << "\tThe taxi has passengers.\n";

    else
        output << "\tThe taxi has no passengers.\n";

    return output;

}

