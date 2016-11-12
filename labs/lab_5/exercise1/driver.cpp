
// driver for race car and car

#include <iostream>

#include "car.h"
#include "car.cpp"

#include "racecar.h"
#include "racecar.cpp"

int main()
{
   Car chevy("Chevrolette", "black");

   chevy.print();

   Racecar f1("Ferrari", "red", "Bug2Bug");

   f1.setEngineValves(40);
   f1.setMaxSpeed(220);
   f1.setGearbox(7);
   f1.useParachute();

   f1.print();

   return 0;

} 


