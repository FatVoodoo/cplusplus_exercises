
// Gregory Kelleher 14478352

#include <iostream>

using namespace std;

int my_swap(int *num_1, int *num_2); 

int main () {
    int num_1, num_2 = 0;
    cout << "Please enter a value for num_1: " << "\n";
    cin >> num_1;
    cout << "Please enter a value for num_2: " << "\n";
    cin >> num_2;

    printf("before swapping: num_1 = %d, num_2 = %d\n", num_1, num_2);
    my_swap(&num_1, &num_2);
    printf("after swapping: num_1 = %d, num_2 = %d\n", num_1, num_2);

    return 0;
}

int my_swap(int *num_1, int *num_2) {

    int temp;
    temp = *num_1;
    *num_1 = *num_2;
    *num_2 = temp;

    return 0;

}


