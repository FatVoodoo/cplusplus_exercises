
// taxi.h

#ifndef TAXI_H
#define TAXI_H

#include <iostream>
#include "vehicle.h"

class Taxi : public Vehicle {
    friend ostream& operator<<(ostream &, const Taxi &);

    public:
    Taxi(double f);

    void setCustomers(bool c);
    bool hasCustomers() const;

    private:
    bool customers;
};

#endif


