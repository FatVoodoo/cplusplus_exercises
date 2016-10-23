
#include <iostream>

struct person {
    char name[10];
    int age;
};

void ary_func(int num_p) {

    // array of people of type person - dynamically allocated array
    person *people = new person[num_p];

    int count = 0;

    while(count != num_p) {
        std::cout << "Enter person " << count << "'s name: \n";
        std::cin >> people[count].name;
        std::cout << "Enter " << count << "'s " << "age: \n";
        std::cin >> people[count].age;
        count++;
    }

    count = num_p;

    while(count != 0) {
        std::cout << "person " << count << "'s name: " << people[count].name << '\n';
        std::cout << "person " << count << "'s age: " << people[count].age << '\n';
        count--;
    }

    delete [] people;

}

int main(void)
{

    int num_p = 0;

    std::cout << "Enter the number of people: \n";
    std::cin >> num_p;

    ary_func(num_p);

    return 0;
}
