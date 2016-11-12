
// driver.cpp

#include <iostream>

using std::cout;
using std::endl;

#include "vehicle.h"
#include "vehicle.cpp"

#include "taxi.h"
#include "taxi.cpp"

#include "truck.h"
#include "truck.cpp"

int main() {

   Vehicle car(2, 6, "blue", 14.6, 3);

   Taxi cab(3.3);
   Truck mack(7.54);

   /* Write code to indicate that mack is carrying cargo */

   /* Write code to print all objects in the Vehicle
      hierarchy */

   cout << car << endl;
   cout << cab << endl;
   cout << mack << endl;

   return 0;

}
