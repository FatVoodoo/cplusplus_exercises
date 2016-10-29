// exercise6.cpp

#include <iostream>
#include <string>
#include "customers.cpp"

int main(void) {

    std::cout << "Enter the name for customer 1: " << std::endl;
    std::string name;
    getline(std::cin, name);

    if(name == "end") { 
        std::cout << "The length of the linked list is: 0" << std::endl; 
        exit(0);
    };

    struct customer *head = create_list(name);

    int customer_cnt = 2;

    while(true) {

        std::cout << "Enter the name for customer " << customer_cnt << ":" << std::endl;
        getline(std::cin, name);

        if(name != "end") {
            insert_name(head, name);
        } else break;

        customer_cnt++;

    } 
    std::cout << std::endl;

    print_customers(head);

    int length = list_length(head);
    std::cout << "The length of the linked list is: " << length << std::endl;

    return 0;
}
