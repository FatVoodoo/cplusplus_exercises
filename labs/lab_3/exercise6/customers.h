
// customers.h

#ifndef CUSTOMERS_H
#define CUSTOMERS_H

struct customer {
    std::string name;
    customer *next;
};

void print_customers(customer &head);

customer *create_list(std::string name);
void insert_name(customer* head, std::string name);
int list_length(customer* head);
void print_customers(customer *head);

#endif
