
// customers.h

#ifndef CUSTOMERS_H
#define CUSTOMERS_H

struct customer {
    std::string name;
    customer *next;
};

void print_customers(customer &head);

#endif
