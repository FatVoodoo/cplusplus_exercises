
// Gregory Kelleher 14478352

#include <iostream>

int main(void)
{
    int size = 0;

    std::cout << "Enter the size of the sequence: \n";
    std::cin >> size;

    double *ary = new double[size];
    
    for (int i = 0; i < size; i++) {
        std::cout << "Enter the number at position: " << i << '\n';
        std::cin >> ary[i];
    }
    
    std::cout << "The numbers in reverse are: \n";

    for (int j = size-1; j >= 0; j--) {
        std::cout << ary[j] << " ";
    }
    

    delete[] ary;


    return 0;
}
