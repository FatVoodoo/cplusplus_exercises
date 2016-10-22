
// Gregory Kelleher 14478352

#include <iostream>

int resize(int &size, int *array) {

    size_t new_size = size * 2;

    int *new_array = new int[new_size];

    memcpy(new_array, array, size * sizeof(int));

    size = new_size;
    array = new_array;
    delete [] array;

    return 0;
}

int main(void)
{

    int size = 10;

    int *array = new int[size];

    double number = 0.0;

    int count = 0;

    std::cout << "Enter numbers for the sequence: \n";
    std::cin >> number;

    while(number != -1) {

        array[count] = number;
        count++;

        if (count == size) {
            resize(size, array);
        }
        std::cout << "Enter numbers for the sequence: \n";
        std::cin >> number;
    }
    return 0;
}
