// customers.cpp

#include <iostream>
#include <string>
#include "customers.h"

customer * create_list(std::string name) {

    struct customer *head = new customer;
    head->name = name;
    head->next = NULL;

    return head;
}

void insert_name(customer *& head, std::string name) {

    struct customer *new_customer = new customer;

    new_customer->name = name;
    new_customer->next = head;

    head = new_customer;
}

int list_length(customer *& head) {

    int count = 0;

    customer *cur = head;
    while(cur != NULL) { 
        count++;
        cur = cur->next;
    };
    return count;
}

void print_customers(customer *& head) {

    customer *cur = head;
    while(cur != NULL) {
        std::cout << cur->name << std::endl;
        cur = cur->next;
    }
}


