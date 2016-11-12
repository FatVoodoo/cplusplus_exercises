
// truck.cpp

#include "truck.h"

/* Write definition for class Truck's constructor */

Truck::Truck(double f) : Vehicle(2, 16, "black", f, 8) {
    cargo = true;
    setClassName("Truck");
}

bool Truck::hasCargo() const {
   return cargo;

} // end function hasCargo

void Truck::setCargo(bool c) {
   cargo = c;

}

// function operator<< definition
ostream &operator<<(ostream &output, const Truck &t) {
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

   if (t.cargo)
      output << "\tThe truck is carrying cargo.\n";

   else
      output << "\tThe truck is not carrying cargo.\n";

   return output;

}
