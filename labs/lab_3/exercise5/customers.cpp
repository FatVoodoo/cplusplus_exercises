// customers.cpp

#include <iostream>
#include "customers.h"

void print_customers(customer &head) {

    customer *cur = &head;

    while (cur != NULL) {
        std::cout << cur->name << '\n';
        cur = cur->next;
    }
}
