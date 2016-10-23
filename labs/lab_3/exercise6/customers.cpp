// customers.cpp

#include <iostream>
#include <string>
#include "customers.h"

void print_customers(customer &head) {

    customer *cur = &head;

    while (cur != NULL) {
        std::cout << cur->name << '\n';
        cur = cur->next;
    }
}

customer *create_list(std::string name) {

    return 0;
}

void insert_name(customer* head, std::string name) {

}

int list_length(customer* head) {

    return 0;
}

void print_customers(customer *head) {

}


