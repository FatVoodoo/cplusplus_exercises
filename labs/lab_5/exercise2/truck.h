
// truck.h

#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include "vehicle.h"

class Truck : public Vehicle {
    friend ostream& operator<<(ostream &, const Truck &);

    public:
    Truck(double f);

    void setCargo(bool c);
    bool hasCargo() const;

    private:
    bool cargo;

};

#endif
